#pragma once

#include "Modules/ModuleManager.h"
#include "CapyAIApi.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CapyAiSdk.generated.h"


class CAPYAISDK_API FCapyAiSdkModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    // ✅ Static function to get API instance
    static UCapyAIApi* GetCapyAIApi();
    
    // ✅ Convert Hex to Linear Color (for C++)
    static FLinearColor HexToLinearColor(const FString& HexCode);

private:
    static UCapyAIApi* CapyAIApiInstance;
};

// ✅ Expose function to Blueprints
UCLASS()
class CAPYAISDK_API UCapyAiSdkUtils : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** Converts a Hex color string (#RRGGBB or #RRGGBBAA) to FLinearColor */
    UFUNCTION(BlueprintCallable, Category = "CapyAI | Color")
    static FLinearColor HexToLinearColor(const FString& HexCode);
};
