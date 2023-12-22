// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetroFPS_V2/RetroFPSAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetroFPSAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	RETROFPS_V2_API UClass* Z_Construct_UClass_URetroFPSAttributeSet();
	RETROFPS_V2_API UClass* Z_Construct_UClass_URetroFPSAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RetroFPS_V2();
// End Cross Module References
	void URetroFPSAttributeSet::StaticRegisterNativesURetroFPSAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetroFPSAttributeSet);
	UClass* Z_Construct_UClass_URetroFPSAttributeSet_NoRegister()
	{
		return URetroFPSAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_URetroFPSAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URetroFPSAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_RetroFPS_V2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetroFPSAttributeSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetroFPSAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RetroFPSAttributeSet.h" },
		{ "ModuleRelativePath", "RetroFPSAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "RetroFPSAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetroFPSAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "RetroFPSAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetroFPSAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Armor_MetaData), Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Armor_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetroFPSAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetroFPSAttributeSet_Statics::NewProp_Armor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URetroFPSAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetroFPSAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URetroFPSAttributeSet_Statics::ClassParams = {
		&URetroFPSAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URetroFPSAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URetroFPSAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URetroFPSAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URetroFPSAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetroFPSAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URetroFPSAttributeSet()
	{
		if (!Z_Registration_Info_UClass_URetroFPSAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetroFPSAttributeSet.OuterSingleton, Z_Construct_UClass_URetroFPSAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URetroFPSAttributeSet.OuterSingleton;
	}
	template<> RETROFPS_V2_API UClass* StaticClass<URetroFPSAttributeSet>()
	{
		return URetroFPSAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URetroFPSAttributeSet);
	URetroFPSAttributeSet::~URetroFPSAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URetroFPSAttributeSet, URetroFPSAttributeSet::StaticClass, TEXT("URetroFPSAttributeSet"), &Z_Registration_Info_UClass_URetroFPSAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetroFPSAttributeSet), 1752732763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSAttributeSet_h_809910978(TEXT("/Script/RetroFPS_V2"),
		Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
