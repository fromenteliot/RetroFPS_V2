// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetroFPS_V2/RetroFPS_V2GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetroFPS_V2GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RETROFPS_V2_API UClass* Z_Construct_UClass_ARetroFPS_V2GameModeBase();
	RETROFPS_V2_API UClass* Z_Construct_UClass_ARetroFPS_V2GameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RetroFPS_V2();
// End Cross Module References
	void ARetroFPS_V2GameModeBase::StaticRegisterNativesARetroFPS_V2GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARetroFPS_V2GameModeBase);
	UClass* Z_Construct_UClass_ARetroFPS_V2GameModeBase_NoRegister()
	{
		return ARetroFPS_V2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARetroFPS_V2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARetroFPS_V2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RetroFPS_V2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPS_V2GameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetroFPS_V2GameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RetroFPS_V2GameModeBase.h" },
		{ "ModuleRelativePath", "RetroFPS_V2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARetroFPS_V2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARetroFPS_V2GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARetroFPS_V2GameModeBase_Statics::ClassParams = {
		&ARetroFPS_V2GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARetroFPS_V2GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARetroFPS_V2GameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARetroFPS_V2GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARetroFPS_V2GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARetroFPS_V2GameModeBase.OuterSingleton, Z_Construct_UClass_ARetroFPS_V2GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARetroFPS_V2GameModeBase.OuterSingleton;
	}
	template<> RETROFPS_V2_API UClass* StaticClass<ARetroFPS_V2GameModeBase>()
	{
		return ARetroFPS_V2GameModeBase::StaticClass();
	}
	ARetroFPS_V2GameModeBase::ARetroFPS_V2GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARetroFPS_V2GameModeBase);
	ARetroFPS_V2GameModeBase::~ARetroFPS_V2GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPS_V2GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPS_V2GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARetroFPS_V2GameModeBase, ARetroFPS_V2GameModeBase::StaticClass, TEXT("ARetroFPS_V2GameModeBase"), &Z_Registration_Info_UClass_ARetroFPS_V2GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARetroFPS_V2GameModeBase), 806126847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPS_V2GameModeBase_h_3074458677(TEXT("/Script/RetroFPS_V2"),
		Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPS_V2GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_Unreal_RetroFPS_RetroFPS_V2_Source_RetroFPS_V2_RetroFPS_V2GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
