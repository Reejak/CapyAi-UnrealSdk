#pragma once

#include "CoreMinimal.h"
#include "Http.h"
#include "CapyAIApi.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoginResponse, bool, Success, FString, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateAccountResponse, bool, Success, FString, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGetMyCapyResponse, bool, Success, const TArray<FString>&, AgentIDs, FString, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnGetUserInfoResponse, bool, bSuccess, FString, Email, int, Credit, FString, ReferralCode, FString, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAgentSecretKeyResponse, bool, Success, FString, SecretKey);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSendMessageToAgentResponse, bool, Success, FString, ResponseMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateAgentResponse, bool, Success, FString, AgentId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeleteAgentResponse, bool, Success, FString, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetAgentInformationResponse, bool, Success, FString, ResponseJson);



UCLASS(Blueprintable, BlueprintType)
class CAPYAISDK_API UCapyAIApi : public UObject
{
    GENERATED_BODY()

public:
    UCapyAIApi();

    UFUNCTION(BlueprintCallable, Category = "CapyAI", meta = (DisplayName = "Get Capy AI API"))
    static UCapyAIApi* GetCapyAIApi();

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void GetAgentSecretKey(FString AgentId);

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void CreateAgent(FString Name, FString Mood, int32 Age, FString Job, FString BaseKnowledge);

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void SendMessageToAgent(FString AgentId, FString SecretKey, FString Message);

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void GetUserInformation();

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void Login(FString Email, FString Password);

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void CreateAccount(FString Email, FString Password);

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void DeleteAgent(FString AgentId);

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void GetMyCapy();

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void Logout(); 

    UFUNCTION(BlueprintCallable, Category = "CapyAI")
    void GetAgentInformation(FString AgentId);


    UFUNCTION(BlueprintPure, Category = "CapyAI")
    FString GetAccessToken() const;

    UPROPERTY(BlueprintAssignable, Category = "CapyAI")
    FOnGetUserInfoResponse OnGetUserInfoResponse;


    UPROPERTY(BlueprintAssignable, Category = "CapyAI")
    FOnGetAgentInformationResponse OnGetAgentInformationResponse;

    UPROPERTY(BlueprintAssignable, Category = "CapyAI")
    FOnCreateAgentResponse OnCreateAgentResponse;

    UPROPERTY(BlueprintAssignable, Category = "CapyAI")
    FOnGetMyCapyResponse OnGetMyCapyResponse;

    UPROPERTY(BlueprintAssignable, Category = "CapyAI")
    FOnDeleteAgentResponse OnDeleteAgentResponse;

    UPROPERTY(BlueprintAssignable, Category = "CapyAI")
    FOnLoginResponse OnLoginResponse;

    UPROPERTY(BlueprintAssignable, Category = "CapyAI")
    FOnCreateAccountResponse OnCreateAccountResponse;

    UPROPERTY(BlueprintAssignable, Category = "CapyAI")
    FOnAgentSecretKeyResponse OnAgentSecretKeyResponse;

    UPROPERTY(BlueprintAssignable, Category = "CapyAI")
    FOnSendMessageToAgentResponse OnSendMessageToAgentResponse;

private:
    void OnLoginResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    void OnCreateAccountResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    void OnGetMyCapyResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    void OnGetUserInfoResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    void OnCreateAgentResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    void OnSendMessageToAgentResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    void OnGetAgentSecretResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    void OnDeleteAgentResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
    void OnGetAgentInformationResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

    const FString ServerBaseUrl = "http://54.38.184.193:3001";
    FString AccessToken;
};