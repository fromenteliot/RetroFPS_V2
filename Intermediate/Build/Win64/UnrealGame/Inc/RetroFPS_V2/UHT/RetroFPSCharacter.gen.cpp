// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetroFPS_V2/RetroFPSCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetroFPSCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	RETROFPS_V2_API UClass* Z_Construct_UClass_ARetroFPSCharacter();
	RETROFPS_V2_API UClass* Z_Construct_UClass_ARetroFPSCharacter_NoRegister();
	RETROFPS_V2_API UClass* Z_Construct_UClass_URetroFPSAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RetroFPS_V2();
// End Cross Module References
	void ARetroFPSCharacter::StaticRegisterNativesARetroFPSCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARetroFPSCharacter);
	UClass* Z_Construct_UClass_ARetroFPSCharacter_NoRegister()
	{
		return ARetroFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARetroFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributeEffect;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARetroFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RetroFPS_V2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetroFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RetroFPSCharacter.h" },
		{ "ModuleRelativePath", "RetroFPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RetroFPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARetroFPSCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_Attributes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RetroFPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARetroFPSCharacter, Attributes), Z_Construct_UClass_URetroFPSAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_Attributes_MetaData), Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_Attributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAttributeEffect_MetaData[] = {
		{ "Category", "RetroFPS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Init\n" },
#endif
		{ "ModuleRelativePath", "RetroFPSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Init" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAttributeEffect = { "DefaultAttributeEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARetroFPSCharacter, DefaultAttributeEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAttributeEffect_MetaData), Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAttributeEffect_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAbilities_Inner = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "RetroFPS" },
		{ "ModuleRelativePath", "RetroFPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARetroFPSCharacter, DefaultAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAbilities_MetaData), Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAbilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARetroFPSCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAttributeEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetroFPSCharacter_Statics::NewProp_DefaultAbilities,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARetroFPSCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ARetroFPSCharacter, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARetroFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARetroFPSCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARetroFPSCharacter_Statics::ClassParams = {
		&ARetroFPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARetroFPSCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARetroFPSCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPSCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARetroFPSCharacter()
	{
		if (!Z_Registration_Info_UClass_ARetroFPSCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARetroFPSCharacter.OuterSingleton, Z_Construct_UClass_ARetroFPSCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARetroFPSCharacter.OuterSingleton;
	}
	template<> RETROFPS_V2_API UClass* StaticClass<ARetroFPSCharacter>()
	{
		return ARetroFPSCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARetroFPSCharacter);
	ARetroFPSCharacter::~ARetroFPSCharacter() {}
	struct Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARetroFPSCharacter, ARetroFPSCharacter::StaticClass, TEXT("ARetroFPSCharacter"), &Z_Registration_Info_UClass_ARetroFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARetroFPSCharacter), 2137888301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSCharacter_h_3301264368(TEXT("/Script/RetroFPS_V2"),
		Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPSCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
