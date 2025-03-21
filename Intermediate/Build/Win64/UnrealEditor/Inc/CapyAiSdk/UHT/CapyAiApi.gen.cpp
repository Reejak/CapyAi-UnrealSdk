// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapyAiSdk/Public/CapyAiApi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapyAiApi() {}
// Cross Module References
	CAPYAISDK_API UClass* Z_Construct_UClass_UCapyAIApi();
	CAPYAISDK_API UClass* Z_Construct_UClass_UCapyAIApi_NoRegister();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature();
	CAPYAISDK_API UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CapyAiSdk();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics
	{
		struct _Script_CapyAiSdk_eventOnLoginResponse_Parms
		{
			bool Success;
			FString Message;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_CapyAiSdk_eventOnLoginResponse_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CapyAiSdk_eventOnLoginResponse_Parms), &Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnLoginResponse_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CapyAiSdk, nullptr, "OnLoginResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnLoginResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnLoginResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLoginResponse_DelegateWrapper(const FMulticastScriptDelegate& OnLoginResponse, bool Success, const FString& Message)
{
	struct _Script_CapyAiSdk_eventOnLoginResponse_Parms
	{
		bool Success;
		FString Message;
	};
	_Script_CapyAiSdk_eventOnLoginResponse_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.Message=Message;
	OnLoginResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics
	{
		struct _Script_CapyAiSdk_eventOnCreateAccountResponse_Parms
		{
			bool Success;
			FString Message;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_CapyAiSdk_eventOnCreateAccountResponse_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CapyAiSdk_eventOnCreateAccountResponse_Parms), &Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnCreateAccountResponse_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CapyAiSdk, nullptr, "OnCreateAccountResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnCreateAccountResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnCreateAccountResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCreateAccountResponse_DelegateWrapper(const FMulticastScriptDelegate& OnCreateAccountResponse, bool Success, const FString& Message)
{
	struct _Script_CapyAiSdk_eventOnCreateAccountResponse_Parms
	{
		bool Success;
		FString Message;
	};
	_Script_CapyAiSdk_eventOnCreateAccountResponse_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.Message=Message;
	OnCreateAccountResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics
	{
		struct _Script_CapyAiSdk_eventOnGetMyCapyResponse_Parms
		{
			bool Success;
			TArray<FString> AgentIDs;
			FString Message;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AgentIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AgentIDs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_CapyAiSdk_eventOnGetMyCapyResponse_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CapyAiSdk_eventOnGetMyCapyResponse_Parms), &Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_AgentIDs_Inner = { "AgentIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_AgentIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_AgentIDs = { "AgentIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnGetMyCapyResponse_Parms, AgentIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_AgentIDs_MetaData), Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_AgentIDs_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnGetMyCapyResponse_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_AgentIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_AgentIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CapyAiSdk, nullptr, "OnGetMyCapyResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnGetMyCapyResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnGetMyCapyResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetMyCapyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetMyCapyResponse, bool Success, TArray<FString> const& AgentIDs, const FString& Message)
{
	struct _Script_CapyAiSdk_eventOnGetMyCapyResponse_Parms
	{
		bool Success;
		TArray<FString> AgentIDs;
		FString Message;
	};
	_Script_CapyAiSdk_eventOnGetMyCapyResponse_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.AgentIDs=AgentIDs;
	Parms.Message=Message;
	OnGetMyCapyResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics
	{
		struct _Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms
		{
			bool bSuccess;
			FString Email;
			int32 Credit;
			FString ReferralCode;
			FString Message;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Credit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferralCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms), &Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms, Email), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_Credit = { "Credit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms, Credit), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_ReferralCode = { "ReferralCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms, ReferralCode), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_Credit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_ReferralCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CapyAiSdk, nullptr, "OnGetUserInfoResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetUserInfoResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserInfoResponse, bool bSuccess, const FString& Email, int32 Credit, const FString& ReferralCode, const FString& Message)
{
	struct _Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms
	{
		bool bSuccess;
		FString Email;
		int32 Credit;
		FString ReferralCode;
		FString Message;
	};
	_Script_CapyAiSdk_eventOnGetUserInfoResponse_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Email=Email;
	Parms.Credit=Credit;
	Parms.ReferralCode=ReferralCode;
	Parms.Message=Message;
	OnGetUserInfoResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics
	{
		struct _Script_CapyAiSdk_eventOnAgentSecretKeyResponse_Parms
		{
			bool Success;
			FString SecretKey;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SecretKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_CapyAiSdk_eventOnAgentSecretKeyResponse_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CapyAiSdk_eventOnAgentSecretKeyResponse_Parms), &Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::NewProp_SecretKey = { "SecretKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnAgentSecretKeyResponse_Parms, SecretKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::NewProp_SecretKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CapyAiSdk, nullptr, "OnAgentSecretKeyResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnAgentSecretKeyResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnAgentSecretKeyResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAgentSecretKeyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnAgentSecretKeyResponse, bool Success, const FString& SecretKey)
{
	struct _Script_CapyAiSdk_eventOnAgentSecretKeyResponse_Parms
	{
		bool Success;
		FString SecretKey;
	};
	_Script_CapyAiSdk_eventOnAgentSecretKeyResponse_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.SecretKey=SecretKey;
	OnAgentSecretKeyResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics
	{
		struct _Script_CapyAiSdk_eventOnSendMessageToAgentResponse_Parms
		{
			bool Success;
			FString ResponseMessage;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_CapyAiSdk_eventOnSendMessageToAgentResponse_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CapyAiSdk_eventOnSendMessageToAgentResponse_Parms), &Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::NewProp_ResponseMessage = { "ResponseMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnSendMessageToAgentResponse_Parms, ResponseMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::NewProp_ResponseMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CapyAiSdk, nullptr, "OnSendMessageToAgentResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnSendMessageToAgentResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnSendMessageToAgentResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSendMessageToAgentResponse_DelegateWrapper(const FMulticastScriptDelegate& OnSendMessageToAgentResponse, bool Success, const FString& ResponseMessage)
{
	struct _Script_CapyAiSdk_eventOnSendMessageToAgentResponse_Parms
	{
		bool Success;
		FString ResponseMessage;
	};
	_Script_CapyAiSdk_eventOnSendMessageToAgentResponse_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.ResponseMessage=ResponseMessage;
	OnSendMessageToAgentResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics
	{
		struct _Script_CapyAiSdk_eventOnCreateAgentResponse_Parms
		{
			bool Success;
			FString AgentId;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_CapyAiSdk_eventOnCreateAgentResponse_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CapyAiSdk_eventOnCreateAgentResponse_Parms), &Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnCreateAgentResponse_Parms, AgentId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::NewProp_AgentId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CapyAiSdk, nullptr, "OnCreateAgentResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnCreateAgentResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnCreateAgentResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCreateAgentResponse_DelegateWrapper(const FMulticastScriptDelegate& OnCreateAgentResponse, bool Success, const FString& AgentId)
{
	struct _Script_CapyAiSdk_eventOnCreateAgentResponse_Parms
	{
		bool Success;
		FString AgentId;
	};
	_Script_CapyAiSdk_eventOnCreateAgentResponse_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.AgentId=AgentId;
	OnCreateAgentResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics
	{
		struct _Script_CapyAiSdk_eventOnDeleteAgentResponse_Parms
		{
			bool Success;
			FString Message;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_CapyAiSdk_eventOnDeleteAgentResponse_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CapyAiSdk_eventOnDeleteAgentResponse_Parms), &Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnDeleteAgentResponse_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CapyAiSdk, nullptr, "OnDeleteAgentResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnDeleteAgentResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnDeleteAgentResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDeleteAgentResponse_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteAgentResponse, bool Success, const FString& Message)
{
	struct _Script_CapyAiSdk_eventOnDeleteAgentResponse_Parms
	{
		bool Success;
		FString Message;
	};
	_Script_CapyAiSdk_eventOnDeleteAgentResponse_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.Message=Message;
	OnDeleteAgentResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics
	{
		struct _Script_CapyAiSdk_eventOnGetAgentInformationResponse_Parms
		{
			bool Success;
			FString ResponseJson;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseJson;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_CapyAiSdk_eventOnGetAgentInformationResponse_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_CapyAiSdk_eventOnGetAgentInformationResponse_Parms), &Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::NewProp_ResponseJson = { "ResponseJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CapyAiSdk_eventOnGetAgentInformationResponse_Parms, ResponseJson), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::NewProp_ResponseJson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CapyAiSdk, nullptr, "OnGetAgentInformationResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnGetAgentInformationResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::_Script_CapyAiSdk_eventOnGetAgentInformationResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetAgentInformationResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetAgentInformationResponse, bool Success, const FString& ResponseJson)
{
	struct _Script_CapyAiSdk_eventOnGetAgentInformationResponse_Parms
	{
		bool Success;
		FString ResponseJson;
	};
	_Script_CapyAiSdk_eventOnGetAgentInformationResponse_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.ResponseJson=ResponseJson;
	OnGetAgentInformationResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCapyAIApi::execGetAccessToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccessToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execGetAgentInformation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAgentInformation(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execLogout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Logout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execGetMyCapy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMyCapy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execDeleteAgent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAgent(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execCreateAccount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAccount(Z_Param_Email,Z_Param_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Login(Z_Param_Email,Z_Param_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execGetUserInformation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserInformation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execSendMessageToAgent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AgentId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SecretKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMessageToAgent(Z_Param_AgentId,Z_Param_SecretKey,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execCreateAgent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Mood);
		P_GET_PROPERTY(FIntProperty,Z_Param_Age);
		P_GET_PROPERTY(FStrProperty,Z_Param_Job);
		P_GET_PROPERTY(FStrProperty,Z_Param_BaseKnowledge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAgent(Z_Param_Name,Z_Param_Mood,Z_Param_Age,Z_Param_Job,Z_Param_BaseKnowledge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execGetAgentSecretKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AgentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAgentSecretKey(Z_Param_AgentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCapyAIApi::execGetCapyAIApi)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCapyAIApi**)Z_Param__Result=UCapyAIApi::GetCapyAIApi();
		P_NATIVE_END;
	}
	void UCapyAIApi::StaticRegisterNativesUCapyAIApi()
	{
		UClass* Class = UCapyAIApi::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAccount", &UCapyAIApi::execCreateAccount },
			{ "CreateAgent", &UCapyAIApi::execCreateAgent },
			{ "DeleteAgent", &UCapyAIApi::execDeleteAgent },
			{ "GetAccessToken", &UCapyAIApi::execGetAccessToken },
			{ "GetAgentInformation", &UCapyAIApi::execGetAgentInformation },
			{ "GetAgentSecretKey", &UCapyAIApi::execGetAgentSecretKey },
			{ "GetCapyAIApi", &UCapyAIApi::execGetCapyAIApi },
			{ "GetMyCapy", &UCapyAIApi::execGetMyCapy },
			{ "GetUserInformation", &UCapyAIApi::execGetUserInformation },
			{ "Login", &UCapyAIApi::execLogin },
			{ "Logout", &UCapyAIApi::execLogout },
			{ "SendMessageToAgent", &UCapyAIApi::execSendMessageToAgent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics
	{
		struct CapyAIApi_eventCreateAccount_Parms
		{
			FString Email;
			FString Password;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventCreateAccount_Parms, Email), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventCreateAccount_Parms, Password), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "CreateAccount", nullptr, nullptr, Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::CapyAIApi_eventCreateAccount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::CapyAIApi_eventCreateAccount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAIApi_CreateAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_CreateAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics
	{
		struct CapyAIApi_eventCreateAgent_Parms
		{
			FString Name;
			FString Mood;
			int32 Age;
			FString Job;
			FString BaseKnowledge;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mood;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Age;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Job;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseKnowledge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventCreateAgent_Parms, Name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_Mood = { "Mood", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventCreateAgent_Parms, Mood), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventCreateAgent_Parms, Age), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventCreateAgent_Parms, Job), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_BaseKnowledge = { "BaseKnowledge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventCreateAgent_Parms, BaseKnowledge), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_Mood,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_Age,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::NewProp_BaseKnowledge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "CreateAgent", nullptr, nullptr, Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::CapyAIApi_eventCreateAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::CapyAIApi_eventCreateAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAIApi_CreateAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_CreateAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics
	{
		struct CapyAIApi_eventDeleteAgent_Parms
		{
			FString AgentId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventDeleteAgent_Parms, AgentId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::NewProp_AgentId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "DeleteAgent", nullptr, nullptr, Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::CapyAIApi_eventDeleteAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::CapyAIApi_eventDeleteAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAIApi_DeleteAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_DeleteAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics
	{
		struct CapyAIApi_eventGetAccessToken_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "GetAccessToken", nullptr, nullptr, Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::CapyAIApi_eventGetAccessToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::CapyAIApi_eventGetAccessToken_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAIApi_GetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_GetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics
	{
		struct CapyAIApi_eventGetAgentInformation_Parms
		{
			FString AgentId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventGetAgentInformation_Parms, AgentId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::NewProp_AgentId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "GetAgentInformation", nullptr, nullptr, Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::CapyAIApi_eventGetAgentInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::CapyAIApi_eventGetAgentInformation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAIApi_GetAgentInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_GetAgentInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics
	{
		struct CapyAIApi_eventGetAgentSecretKey_Parms
		{
			FString AgentId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventGetAgentSecretKey_Parms, AgentId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::NewProp_AgentId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "GetAgentSecretKey", nullptr, nullptr, Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::CapyAIApi_eventGetAgentSecretKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::CapyAIApi_eventGetAgentSecretKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics
	{
		struct CapyAIApi_eventGetCapyAIApi_Parms
		{
			UCapyAIApi* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventGetCapyAIApi_Parms, ReturnValue), Z_Construct_UClass_UCapyAIApi_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "DisplayName", "Get Capy AI API" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "GetCapyAIApi", nullptr, nullptr, Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::CapyAIApi_eventGetCapyAIApi_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::CapyAIApi_eventGetCapyAIApi_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_GetMyCapy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_GetMyCapy_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_GetMyCapy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "GetMyCapy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetMyCapy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_GetMyCapy_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCapyAIApi_GetMyCapy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_GetMyCapy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_GetUserInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_GetUserInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_GetUserInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "GetUserInformation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_GetUserInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_GetUserInformation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCapyAIApi_GetUserInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_GetUserInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_Login_Statics
	{
		struct CapyAIApi_eventLogin_Parms
		{
			FString Email;
			FString Password;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_Login_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventLogin_Parms, Email), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_Login_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventLogin_Parms, Password), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAIApi_Login_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_Login_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_Login_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_Login_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "Login", nullptr, nullptr, Z_Construct_UFunction_UCapyAIApi_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_Login_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAIApi_Login_Statics::CapyAIApi_eventLogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_Login_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_Login_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_Login_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAIApi_Login_Statics::CapyAIApi_eventLogin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAIApi_Login()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_Login_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_Logout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_Logout_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "Logout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_Logout_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCapyAIApi_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics
	{
		struct CapyAIApi_eventSendMessageToAgent_Parms
		{
			FString AgentId;
			FString SecretKey;
			FString Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AgentId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SecretKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::NewProp_AgentId = { "AgentId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventSendMessageToAgent_Parms, AgentId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::NewProp_SecretKey = { "SecretKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventSendMessageToAgent_Parms, SecretKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAIApi_eventSendMessageToAgent_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::NewProp_AgentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::NewProp_SecretKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAIApi, nullptr, "SendMessageToAgent", nullptr, nullptr, Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::CapyAIApi_eventSendMessageToAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::CapyAIApi_eventSendMessageToAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCapyAIApi);
	UClass* Z_Construct_UClass_UCapyAIApi_NoRegister()
	{
		return UCapyAIApi::StaticClass();
	}
	struct Z_Construct_UClass_UCapyAIApi_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetUserInfoResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetUserInfoResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetAgentInformationResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetAgentInformationResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCreateAgentResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateAgentResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetMyCapyResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetMyCapyResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeleteAgentResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeleteAgentResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCreateAccountResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateAccountResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAgentSecretKeyResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgentSecretKeyResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSendMessageToAgentResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSendMessageToAgentResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCapyAIApi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CapyAiSdk,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCapyAIApi_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCapyAIApi_CreateAccount, "CreateAccount" }, // 2221125835
		{ &Z_Construct_UFunction_UCapyAIApi_CreateAgent, "CreateAgent" }, // 1265888081
		{ &Z_Construct_UFunction_UCapyAIApi_DeleteAgent, "DeleteAgent" }, // 415271785
		{ &Z_Construct_UFunction_UCapyAIApi_GetAccessToken, "GetAccessToken" }, // 1854411037
		{ &Z_Construct_UFunction_UCapyAIApi_GetAgentInformation, "GetAgentInformation" }, // 4156330505
		{ &Z_Construct_UFunction_UCapyAIApi_GetAgentSecretKey, "GetAgentSecretKey" }, // 2189867029
		{ &Z_Construct_UFunction_UCapyAIApi_GetCapyAIApi, "GetCapyAIApi" }, // 4237865504
		{ &Z_Construct_UFunction_UCapyAIApi_GetMyCapy, "GetMyCapy" }, // 416962890
		{ &Z_Construct_UFunction_UCapyAIApi_GetUserInformation, "GetUserInformation" }, // 1780743017
		{ &Z_Construct_UFunction_UCapyAIApi_Login, "Login" }, // 3724924421
		{ &Z_Construct_UFunction_UCapyAIApi_Logout, "Logout" }, // 4095928111
		{ &Z_Construct_UFunction_UCapyAIApi_SendMessageToAgent, "SendMessageToAgent" }, // 237357838
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CapyAiApi.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetUserInfoResponse_MetaData[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetUserInfoResponse = { "OnGetUserInfoResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapyAIApi, OnGetUserInfoResponse), Z_Construct_UDelegateFunction_CapyAiSdk_OnGetUserInfoResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetUserInfoResponse_MetaData), Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetUserInfoResponse_MetaData) }; // 1519175616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetAgentInformationResponse_MetaData[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetAgentInformationResponse = { "OnGetAgentInformationResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapyAIApi, OnGetAgentInformationResponse), Z_Construct_UDelegateFunction_CapyAiSdk_OnGetAgentInformationResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetAgentInformationResponse_MetaData), Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetAgentInformationResponse_MetaData) }; // 3527037445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAgentResponse_MetaData[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAgentResponse = { "OnCreateAgentResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapyAIApi, OnCreateAgentResponse), Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAgentResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAgentResponse_MetaData), Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAgentResponse_MetaData) }; // 4241689189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetMyCapyResponse_MetaData[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetMyCapyResponse = { "OnGetMyCapyResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapyAIApi, OnGetMyCapyResponse), Z_Construct_UDelegateFunction_CapyAiSdk_OnGetMyCapyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetMyCapyResponse_MetaData), Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetMyCapyResponse_MetaData) }; // 2260134781
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnDeleteAgentResponse_MetaData[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnDeleteAgentResponse = { "OnDeleteAgentResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapyAIApi, OnDeleteAgentResponse), Z_Construct_UDelegateFunction_CapyAiSdk_OnDeleteAgentResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnDeleteAgentResponse_MetaData), Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnDeleteAgentResponse_MetaData) }; // 4256119449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnLoginResponse_MetaData[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnLoginResponse = { "OnLoginResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapyAIApi, OnLoginResponse), Z_Construct_UDelegateFunction_CapyAiSdk_OnLoginResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnLoginResponse_MetaData), Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnLoginResponse_MetaData) }; // 2403856327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAccountResponse_MetaData[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAccountResponse = { "OnCreateAccountResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapyAIApi, OnCreateAccountResponse), Z_Construct_UDelegateFunction_CapyAiSdk_OnCreateAccountResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAccountResponse_MetaData), Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAccountResponse_MetaData) }; // 4206766891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnAgentSecretKeyResponse_MetaData[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnAgentSecretKeyResponse = { "OnAgentSecretKeyResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapyAIApi, OnAgentSecretKeyResponse), Z_Construct_UDelegateFunction_CapyAiSdk_OnAgentSecretKeyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnAgentSecretKeyResponse_MetaData), Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnAgentSecretKeyResponse_MetaData) }; // 1484521545
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnSendMessageToAgentResponse_MetaData[] = {
		{ "Category", "CapyAI" },
		{ "ModuleRelativePath", "Public/CapyAiApi.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnSendMessageToAgentResponse = { "OnSendMessageToAgentResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapyAIApi, OnSendMessageToAgentResponse), Z_Construct_UDelegateFunction_CapyAiSdk_OnSendMessageToAgentResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnSendMessageToAgentResponse_MetaData), Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnSendMessageToAgentResponse_MetaData) }; // 1525083926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCapyAIApi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetUserInfoResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetAgentInformationResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAgentResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnGetMyCapyResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnDeleteAgentResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnLoginResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnCreateAccountResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnAgentSecretKeyResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapyAIApi_Statics::NewProp_OnSendMessageToAgentResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCapyAIApi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapyAIApi>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCapyAIApi_Statics::ClassParams = {
		&UCapyAIApi::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCapyAIApi_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::Class_MetaDataParams), Z_Construct_UClass_UCapyAIApi_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAIApi_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCapyAIApi()
	{
		if (!Z_Registration_Info_UClass_UCapyAIApi.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCapyAIApi.OuterSingleton, Z_Construct_UClass_UCapyAIApi_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCapyAIApi.OuterSingleton;
	}
	template<> CAPYAISDK_API UClass* StaticClass<UCapyAIApi>()
	{
		return UCapyAIApi::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCapyAIApi);
	UCapyAIApi::~UCapyAIApi() {}
	struct Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCapyAIApi, UCapyAIApi::StaticClass, TEXT("UCapyAIApi"), &Z_Registration_Info_UClass_UCapyAIApi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCapyAIApi), 241973808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_1331134110(TEXT("/Script/CapyAiSdk"),
		Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiApi_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
