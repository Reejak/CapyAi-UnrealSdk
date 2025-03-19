#include "CapyAIApi.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"

#include "CapyAiSdk.h"

UCapyAIApi::UCapyAIApi() {}

// ✅ Fonction statique pour obtenir l'instance en Blueprint
UCapyAIApi* UCapyAIApi::GetCapyAIApi()
{
    return FCapyAiSdkModule::GetCapyAIApi();
}

// ✅ Getter pour récupérer le token d'accès
FString UCapyAIApi::GetAccessToken() const
{
    return AccessToken;
}

// ✅ Fonction LOGOUT
void UCapyAIApi::Logout()
{
    AccessToken = ""; // 🔹 Réinitialisation du token
    UE_LOG(LogTemp, Warning, TEXT("User logged out successfully."));
}

// ✅ Fonction LOGIN
void UCapyAIApi::Login(FString Email, FString Password)
{
    if (ServerBaseUrl.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("ServerBaseUrl is empty!"));
        return;
    }

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField("email", Email);
    JsonObject->SetStringField("password", Password);

    FString JsonPayload;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonPayload);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UCapyAIApi::OnLoginResponseReceived);
    Request->SetURL(ServerBaseUrl + "/user/login");
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/json");
    Request->SetContentAsString(JsonPayload);
    Request->ProcessRequest();
}


void UCapyAIApi::GetUserInformation()
{
    if (ServerBaseUrl.IsEmpty() || AccessToken.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("ServerBaseUrl or AccessToken is empty!"));
        return;
    }

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UCapyAIApi::OnGetUserInfoResponseReceived);
    Request->SetURL(ServerBaseUrl + "/user/info");
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/json");
    Request->SetHeader("Authorization", "Bearer " + AccessToken);
    Request->ProcessRequest();
}

void UCapyAIApi::OnGetUserInfoResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        OnGetUserInfoResponse.Broadcast(false, "", 0, "", "Network error");
        return;
    }

    int32 StatusCode = Response->GetResponseCode();
    FString ResponseContent = Response->GetContentAsString();
    // 🔹 Log pour voir la réponse de l'API
    UE_LOG(LogTemp, Error, TEXT("API Response: %s"), *ResponseContent);

    if (StatusCode == 200)
    {
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);

        if (FJsonSerializer::Deserialize(Reader, JsonObject))
        {
            FString Email = JsonObject->GetStringField("email");
            int Credits = JsonObject->GetIntegerField("credits"); // Correction ici
            FString ReferalCode = JsonObject->GetStringField("referal_code");

            OnGetUserInfoResponse.Broadcast(true, Email, Credits, ReferalCode, "User information retrieved successfully");
            return;
        }
    }

    OnGetUserInfoResponse.Broadcast(false, "", 0, "", ResponseContent);
}

// ✅ Gestion de la réponse LOGIN
void UCapyAIApi::OnLoginResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        OnLoginResponse.Broadcast(false, "Network error");
        return;
    }

    int32 StatusCode = Response->GetResponseCode();
    FString ResponseContent = Response->GetContentAsString();

    if (StatusCode == 200)
    {
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);
        if (FJsonSerializer::Deserialize(Reader, JsonObject))
        {
            if (JsonObject->HasField("token"))
            {
                AccessToken = JsonObject->GetStringField("token");
                OnLoginResponse.Broadcast(true, "Login successful");
                return;
            }
        }
    }

    OnLoginResponse.Broadcast(false, ResponseContent);
}

// ✅ Fonction CREATE ACCOUNT
void UCapyAIApi::CreateAccount(FString Email, FString Password)
{
    if (ServerBaseUrl.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("ServerBaseUrl is empty!"));
        return;
    }

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField("email", Email);
    JsonObject->SetStringField("password", Password);

    FString JsonPayload;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonPayload);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UCapyAIApi::OnCreateAccountResponseReceived);
    Request->SetURL(ServerBaseUrl + "/user/register");
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/json");
    Request->SetContentAsString(JsonPayload);
    Request->ProcessRequest();
}

// ✅ Gestion de la réponse CREATE ACCOUNT
void UCapyAIApi::OnCreateAccountResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        OnCreateAccountResponse.Broadcast(false, "Network error");
        return;
    }

    int32 StatusCode = Response->GetResponseCode();
    FString ResponseContent = Response->GetContentAsString();

    if (StatusCode == 200)
    {
        OnCreateAccountResponse.Broadcast(true, "Account created successfully");
        return;
    }

    OnCreateAccountResponse.Broadcast(false, ResponseContent);
}

// ✅ Fonction GET MY Capy
void UCapyAIApi::GetMyCapy()
{
    if (ServerBaseUrl.IsEmpty() || AccessToken.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("ServerBaseUrl or AccessToken is empty!"));
        return;
    }

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UCapyAIApi::OnGetMyCapyResponseReceived);
    Request->SetURL(ServerBaseUrl + "/user/getmyPears");
    Request->SetVerb("GET");
    Request->SetHeader("Content-Type", "application/json");
    Request->SetHeader("Authorization", "Bearer " + AccessToken);
    Request->ProcessRequest();
}

// ✅ Gestion de la réponse GET MY Capy
void UCapyAIApi::OnGetMyCapyResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("OnGetMyCapyResponseReceived: Network error"));
        OnGetMyCapyResponse.Broadcast(false, {}, "Network error");
        return;
    }

    int32 StatusCode = Response->GetResponseCode();
    FString ResponseContent = Response->GetContentAsString();

    UE_LOG(LogTemp, Warning, TEXT("OnGetMyCapyResponseReceived: Response content: %s"), *ResponseContent);

    if (StatusCode == 200)
    {
        TArray<FString> AgentIDs;
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);

        if (FJsonSerializer::Deserialize(Reader, JsonObject))
        {
            if (JsonObject->HasField("agents"))
            {
                TArray<TSharedPtr<FJsonValue>> AgentsArray = JsonObject->GetArrayField("agents");

                UE_LOG(LogTemp, Warning, TEXT("OnGetMyCapyResponseReceived: Found %d agents"), AgentsArray.Num());

                for (int32 i = 0; i < AgentsArray.Num(); i++)
                {
                    TSharedPtr<FJsonValue> Item = AgentsArray[i];

                    if (Item.IsValid() && Item->Type == EJson::String) // Vérification supplémentaire
                    {
                        FString AgentID;
                        if (Item->TryGetString(AgentID)) // ⚠️ Utiliser TryGetString pour éviter les conversions foireuses
                        {
                            UE_LOG(LogTemp, Warning, TEXT("OnGetMyCapyResponseReceived: AgentID[%d] = %s"), i, *AgentID);
                            AgentIDs.Add(AgentID);
                        }
                        else
                        {
                            UE_LOG(LogTemp, Error, TEXT("OnGetMyCapyResponseReceived: Failed to convert agent ID at index %d"), i);
                        }
                    }
                    else
                    {
                        UE_LOG(LogTemp, Error, TEXT("OnGetMyCapyResponseReceived: Invalid data type at index %d"), i);
                    }
                }

                // ✅ Forcer la copie du tableau pour Blueprint
                TArray<FString> CopiedAgentIDs = AgentIDs;

                UE_LOG(LogTemp, Warning, TEXT("OnGetMyCapyResponseReceived: Broadcasting %d agent IDs"), CopiedAgentIDs.Num());

                OnGetMyCapyResponse.Broadcast(true, CopiedAgentIDs, "Success");
                return;
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("OnGetMyCapyResponseReceived: 'agents' field not found in JSON"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("OnGetMyCapyResponseReceived: Failed to deserialize JSON"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("OnGetMyCapyResponseReceived: Unexpected status code: %d"), StatusCode);
    }

    OnGetMyCapyResponse.Broadcast(false, {}, ResponseContent);
}



void UCapyAIApi::GetAgentSecretKey(FString AgentId)
{
    if (ServerBaseUrl.IsEmpty() || AccessToken.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("ServerBaseUrl or AccessToken is empty!"));
        return;
    }

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UCapyAIApi::OnGetAgentSecretResponseReceived); // Correction ici
    Request->SetURL(ServerBaseUrl + TEXT("/agent/") + AgentId + TEXT("/secret")); // Ajout de TEXT()
    Request->SetVerb(TEXT("GET")); // Ajout de TEXT()
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json")); // Ajout de TEXT()
    Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + AccessToken); // Ajout de TEXT()
    Request->ProcessRequest();
}

void UCapyAIApi::OnGetAgentSecretResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) // Correction du nom ici
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        OnAgentSecretKeyResponse.Broadcast(false, TEXT("Network error")); // Ajout de TEXT()
        return;
    }

    int32 StatusCode = Response->GetResponseCode();
    FString ResponseContent = Response->GetContentAsString();

    if (StatusCode == 200)
    {
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);
        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject->HasField(TEXT("secretKey"))) // Ajout de TEXT()
        {
            FString SecretKey = JsonObject->GetStringField(TEXT("secretKey")); // Ajout de TEXT()
            OnAgentSecretKeyResponse.Broadcast(true, SecretKey);
            return;
        }
    }

    OnAgentSecretKeyResponse.Broadcast(false, ResponseContent);
}



void UCapyAIApi::SendMessageToAgent(FString AgentId, FString SecretKey, FString Message)
{
    if (ServerBaseUrl.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("ServerBaseUrl is empty!"));
        return;
    }

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField("message", Message);

    FString JsonPayload;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonPayload);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UCapyAIApi::OnSendMessageToAgentResponseReceived);
    Request->SetURL(ServerBaseUrl + "/agent/" + AgentId + "/message");
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/json");
    Request->SetHeader("X-Secret-Key", SecretKey);
    Request->SetContentAsString(JsonPayload);
    Request->ProcessRequest();
}

void UCapyAIApi::OnSendMessageToAgentResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        OnSendMessageToAgentResponse.Broadcast(false, "Network error");
        return;
    }

    int32 StatusCode = Response->GetResponseCode();
    FString ResponseContent = Response->GetContentAsString();

    if (StatusCode == 200)
    {
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);
        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject->HasField("response"))
        {
            FString AIResponse = JsonObject->GetStringField("response");
            OnSendMessageToAgentResponse.Broadcast(true, AIResponse);
            return;
        }
    }

    OnSendMessageToAgentResponse.Broadcast(false, ResponseContent);
}


void UCapyAIApi::CreateAgent(FString Name, FString Mood, int32 Age, FString Job, FString BaseKnowledge)
{
    if (ServerBaseUrl.IsEmpty() || AccessToken.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("ServerBaseUrl or AccessToken is empty!"));
        return;
    }

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField("name", Name);
    JsonObject->SetStringField("mood", Mood);
    JsonObject->SetNumberField("age", Age);
    JsonObject->SetStringField("job", Job);
    JsonObject->SetStringField("baseKnowledge", BaseKnowledge);

    FString JsonPayload;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonPayload);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UCapyAIApi::OnCreateAgentResponseReceived);
    Request->SetURL(ServerBaseUrl + "/agent/create"); // 🔹 Endpoint pour créer un agent
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/json");
    Request->SetHeader("Authorization", "Bearer " + AccessToken);
    Request->SetContentAsString(JsonPayload);
    Request->ProcessRequest();
}

void UCapyAIApi::OnCreateAgentResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        OnCreateAgentResponse.Broadcast(false, "Network error");
        return;
    }

    int32 StatusCode = Response->GetResponseCode();
    FString ResponseContent = Response->GetContentAsString();

    if (StatusCode == 200)
    {
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseContent);
        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject->HasField("agentId"))
        {
            FString AgentId = JsonObject->GetStringField("agentId");
            OnCreateAgentResponse.Broadcast(true, AgentId);
            return;
        }
    }

    OnCreateAgentResponse.Broadcast(false, ResponseContent);
}
void UCapyAIApi::DeleteAgent(FString AgentId)
{
    if (ServerBaseUrl.IsEmpty() || AccessToken.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("ServerBaseUrl or AccessToken is empty!"));
        return;
    }

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UCapyAIApi::OnDeleteAgentResponseReceived);
    Request->SetURL(ServerBaseUrl + TEXT("/agent/") + AgentId);
    Request->SetVerb(TEXT("DELETE"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + AccessToken);
    Request->ProcessRequest();
}

void UCapyAIApi::OnDeleteAgentResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        OnDeleteAgentResponse.Broadcast(false, TEXT("Network error"));
        return;
    }

    int32 StatusCode = Response->GetResponseCode();
    FString ResponseContent = Response->GetContentAsString();

    if (StatusCode == 200)
    {
        OnDeleteAgentResponse.Broadcast(true, TEXT("Agent deleted successfully"));
    }
    else
    {
        OnDeleteAgentResponse.Broadcast(false, ResponseContent);
    }
}

void UCapyAIApi::GetAgentInformation(FString AgentId)
{
    if (ServerBaseUrl.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("ServerBaseUrl is empty!"));
        return;
    }

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UCapyAIApi::OnGetAgentInformationResponseReceived);
    Request->SetURL(ServerBaseUrl + TEXT("/agent/public/") + AgentId);
    Request->SetVerb(TEXT("GET"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->ProcessRequest();
}

void UCapyAIApi::OnGetAgentInformationResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        OnGetAgentInformationResponse.Broadcast(false, TEXT("Network error"));
        return;
    }

    int32 StatusCode = Response->GetResponseCode();
    FString ResponseContent = Response->GetContentAsString();

    if (StatusCode == 200)
    {
        OnGetAgentInformationResponse.Broadcast(true, ResponseContent);
    }
    else
    {
        OnGetAgentInformationResponse.Broadcast(false, ResponseContent);
    }
}
