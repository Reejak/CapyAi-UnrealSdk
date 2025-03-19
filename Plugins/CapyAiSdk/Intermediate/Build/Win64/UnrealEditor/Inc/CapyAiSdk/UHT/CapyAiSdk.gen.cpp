// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapyAiSdk/Public/CapyAiSdk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapyAiSdk() {}
// Cross Module References
	CAPYAISDK_API UClass* Z_Construct_UClass_UCapyAiSdkUtils();
	CAPYAISDK_API UClass* Z_Construct_UClass_UCapyAiSdkUtils_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CapyAiSdk();
// End Cross Module References
	DEFINE_FUNCTION(UCapyAiSdkUtils::execHexToLinearColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HexCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UCapyAiSdkUtils::HexToLinearColor(Z_Param_HexCode);
		P_NATIVE_END;
	}
	void UCapyAiSdkUtils::StaticRegisterNativesUCapyAiSdkUtils()
	{
		UClass* Class = UCapyAiSdkUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HexToLinearColor", &UCapyAiSdkUtils::execHexToLinearColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics
	{
		struct CapyAiSdkUtils_eventHexToLinearColor_Parms
		{
			FString HexCode;
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HexCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HexCode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::NewProp_HexCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::NewProp_HexCode = { "HexCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAiSdkUtils_eventHexToLinearColor_Parms, HexCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::NewProp_HexCode_MetaData), Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::NewProp_HexCode_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapyAiSdkUtils_eventHexToLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::NewProp_HexCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapyAI | Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a Hex color string (#RRGGBB or #RRGGBBAA) to FLinearColor */" },
#endif
		{ "ModuleRelativePath", "Public/CapyAiSdk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a Hex color string (#RRGGBB or #RRGGBBAA) to FLinearColor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapyAiSdkUtils, nullptr, "HexToLinearColor", nullptr, nullptr, Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::CapyAiSdkUtils_eventHexToLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::CapyAiSdkUtils_eventHexToLinearColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCapyAiSdkUtils);
	UClass* Z_Construct_UClass_UCapyAiSdkUtils_NoRegister()
	{
		return UCapyAiSdkUtils::StaticClass();
	}
	struct Z_Construct_UClass_UCapyAiSdkUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCapyAiSdkUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CapyAiSdk,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAiSdkUtils_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCapyAiSdkUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCapyAiSdkUtils_HexToLinearColor, "HexToLinearColor" }, // 1384261373
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAiSdkUtils_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapyAiSdkUtils_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 Expose function to Blueprints\n" },
#endif
		{ "IncludePath", "CapyAiSdk.h" },
		{ "ModuleRelativePath", "Public/CapyAiSdk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 Expose function to Blueprints" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCapyAiSdkUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapyAiSdkUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCapyAiSdkUtils_Statics::ClassParams = {
		&UCapyAiSdkUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapyAiSdkUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UCapyAiSdkUtils_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCapyAiSdkUtils()
	{
		if (!Z_Registration_Info_UClass_UCapyAiSdkUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCapyAiSdkUtils.OuterSingleton, Z_Construct_UClass_UCapyAiSdkUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCapyAiSdkUtils.OuterSingleton;
	}
	template<> CAPYAISDK_API UClass* StaticClass<UCapyAiSdkUtils>()
	{
		return UCapyAiSdkUtils::StaticClass();
	}
	UCapyAiSdkUtils::UCapyAiSdkUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCapyAiSdkUtils);
	UCapyAiSdkUtils::~UCapyAiSdkUtils() {}
	struct Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiSdk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiSdk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCapyAiSdkUtils, UCapyAiSdkUtils::StaticClass, TEXT("UCapyAiSdkUtils"), &Z_Registration_Info_UClass_UCapyAiSdkUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCapyAiSdkUtils), 266173257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiSdk_h_3481267943(TEXT("/Script/CapyAiSdk"),
		Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiSdk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CapyAi_Plugins_CapyAiSdk_Source_CapyAiSdk_Public_CapyAiSdk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
