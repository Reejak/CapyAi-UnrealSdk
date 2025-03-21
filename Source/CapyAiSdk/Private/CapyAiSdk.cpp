#include "CapyAiSdk.h"
#include "Modules/ModuleManager.h"
#include "Misc/Parse.h"
#include "CapyAIApi.h"

IMPLEMENT_MODULE(FCapyAiSdkModule, CapyAiSdk)

// 🔹 Initialize API instance
UCapyAIApi* FCapyAiSdkModule::CapyAIApiInstance = nullptr;

void FCapyAiSdkModule::StartupModule()
{
    UE_LOG(LogTemp, Warning, TEXT("CapyAiSdk Module Started"));

    if (!CapyAIApiInstance)
    {
        CapyAIApiInstance = NewObject<UCapyAIApi>();
        CapyAIApiInstance->AddToRoot(); // Prevent garbage collection
    }
}

void FCapyAiSdkModule::ShutdownModule()
{
    UE_LOG(LogTemp, Warning, TEXT("CapyAiSdk Module Shutdown"));

    if (CapyAIApiInstance)
    {
        CapyAIApiInstance->RemoveFromRoot();
        CapyAIApiInstance = nullptr;
    }
}

// ✅ Function to get API instance
UCapyAIApi* FCapyAiSdkModule::GetCapyAIApi()
{
    return CapyAIApiInstance;
}

// ✅ Blueprint-exposed function
FLinearColor UCapyAiSdkUtils::HexToLinearColor(const FString& HexCode)
{
    FString ProcessedHex = HexCode;
    ProcessedHex.RemoveFromStart(TEXT("#")); // Remove #

    if (ProcessedHex.Len() != 6 && ProcessedHex.Len() != 8)
    {
        UE_LOG(LogTemp, Warning, TEXT("HexToLinearColor: Invalid hex length! Using default white color."));
        return FLinearColor::White;
    }

    int32 R, G, B, A = 255;
    R = FParse::HexDigit(ProcessedHex[0]) * 16 + FParse::HexDigit(ProcessedHex[1]);
    G = FParse::HexDigit(ProcessedHex[2]) * 16 + FParse::HexDigit(ProcessedHex[3]);
    B = FParse::HexDigit(ProcessedHex[4]) * 16 + FParse::HexDigit(ProcessedHex[5]);

    if (ProcessedHex.Len() == 8)
    {
        A = FParse::HexDigit(ProcessedHex[6]) * 16 + FParse::HexDigit(ProcessedHex[7]);
    }

    return FLinearColor(R / 255.0f, G / 255.0f, B / 255.0f, A / 255.0f);
}
