// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapyAiSdk_init() {}
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CapyAiSdk;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CapyAiSdk()
	{
		if (!Z_Registration_Info_UPackage__Script_CapyAiSdk.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CapyAiSdk",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFA8D050E,
				0x21056E8A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CapyAiSdk.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CapyAiSdk.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CapyAiSdk(Z_Construct_UPackage__Script_CapyAiSdk, TEXT("/Script/CapyAiSdk"), Z_Registration_Info_UPackage__Script_CapyAiSdk, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFA8D050E, 0x21056E8A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
