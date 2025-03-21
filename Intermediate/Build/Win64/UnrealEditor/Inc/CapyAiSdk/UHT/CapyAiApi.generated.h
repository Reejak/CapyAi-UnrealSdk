// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CapyAiApi.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCapyAIApi;
#ifdef CAPYAISDK_CapyAiApi_generated_h
#error "CapyAiApi.generated.h already included, missing '#pragma once' in CapyAiApi.h"
#endif
#define CAPYAISDK_CapyAiApi_generated_h

#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_8_DELEGATE \
CAPYAISDK_API void FOnLoginResponse_DelegateWrapper(const FMulticastScriptDelegate& OnLoginResponse, bool Success, const FString& Message);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_9_DELEGATE \
CAPYAISDK_API void FOnCreateAccountResponse_DelegateWrapper(const FMulticastScriptDelegate& OnCreateAccountResponse, bool Success, const FString& Message);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_10_DELEGATE \
CAPYAISDK_API void FOnGetMyCapyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetMyCapyResponse, bool Success, TArray<FString> const& AgentIDs, const FString& Message);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_11_DELEGATE \
CAPYAISDK_API void FOnGetUserInfoResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserInfoResponse, bool bSuccess, const FString& Email, int32 Credit, const FString& ReferralCode, const FString& Message);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_12_DELEGATE \
CAPYAISDK_API void FOnAgentSecretKeyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnAgentSecretKeyResponse, bool Success, const FString& SecretKey);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_13_DELEGATE \
CAPYAISDK_API void FOnSendMessageToAgentResponse_DelegateWrapper(const FMulticastScriptDelegate& OnSendMessageToAgentResponse, bool Success, const FString& ResponseMessage);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_14_DELEGATE \
CAPYAISDK_API void FOnCreateAgentResponse_DelegateWrapper(const FMulticastScriptDelegate& OnCreateAgentResponse, bool Success, const FString& AgentId);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_15_DELEGATE \
CAPYAISDK_API void FOnDeleteAgentResponse_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteAgentResponse, bool Success, const FString& Message);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_16_DELEGATE \
CAPYAISDK_API void FOnGetAgentInformationResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetAgentInformationResponse, bool Success, const FString& ResponseJson);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_SPARSE_DATA
#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execGetAgentInformation); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execGetMyCapy); \
	DECLARE_FUNCTION(execDeleteAgent); \
	DECLARE_FUNCTION(execCreateAccount); \
	DECLARE_FUNCTION(execLogin); \
	DECLARE_FUNCTION(execGetUserInformation); \
	DECLARE_FUNCTION(execSendMessageToAgent); \
	DECLARE_FUNCTION(execCreateAgent); \
	DECLARE_FUNCTION(execGetAgentSecretKey); \
	DECLARE_FUNCTION(execGetCapyAIApi);


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_ACCESSORS
#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCapyAIApi(); \
	friend struct Z_Construct_UClass_UCapyAIApi_Statics; \
public: \
	DECLARE_CLASS(UCapyAIApi, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CapyAiSdk"), NO_API) \
	DECLARE_SERIALIZER(UCapyAIApi)


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCapyAIApi(UCapyAIApi&&); \
	NO_API UCapyAIApi(const UCapyAIApi&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCapyAIApi); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCapyAIApi); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCapyAIApi) \
	NO_API virtual ~UCapyAIApi();


#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_20_PROLOG
#define FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_SPARSE_DATA \
	FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_ACCESSORS \
	FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_INCLASS_NO_PURE_DECLS \
	FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPYAISDK_API UClass* StaticClass<class UCapyAIApi>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
