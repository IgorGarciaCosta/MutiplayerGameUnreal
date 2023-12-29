// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerProj/MultiplayerProjGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerProjGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MULTIPLAYERPROJ_API UClass* Z_Construct_UClass_AMultiplayerProjGameMode();
	MULTIPLAYERPROJ_API UClass* Z_Construct_UClass_AMultiplayerProjGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayerProj();
// End Cross Module References
	void AMultiplayerProjGameMode::StaticRegisterNativesAMultiplayerProjGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerProjGameMode);
	UClass* Z_Construct_UClass_AMultiplayerProjGameMode_NoRegister()
	{
		return AMultiplayerProjGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerProjGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerProjGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerProj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerProjGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerProjGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerProjGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerProjGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerProjGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerProjGameMode_Statics::ClassParams = {
		&AMultiplayerProjGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerProjGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerProjGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerProjGameMode()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerProjGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerProjGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerProjGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerProjGameMode.OuterSingleton;
	}
	template<> MULTIPLAYERPROJ_API UClass* StaticClass<AMultiplayerProjGameMode>()
	{
		return AMultiplayerProjGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerProjGameMode);
	AMultiplayerProjGameMode::~AMultiplayerProjGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_MultiplayerProj_Source_MultiplayerProj_MultiplayerProjGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_MultiplayerProj_Source_MultiplayerProj_MultiplayerProjGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerProjGameMode, AMultiplayerProjGameMode::StaticClass, TEXT("AMultiplayerProjGameMode"), &Z_Registration_Info_UClass_AMultiplayerProjGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerProjGameMode), 151560208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_MultiplayerProj_Source_MultiplayerProj_MultiplayerProjGameMode_h_3658061956(TEXT("/Script/MultiplayerProj"),
		Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_MultiplayerProj_Source_MultiplayerProj_MultiplayerProjGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_MultiplayerProj_Source_MultiplayerProj_MultiplayerProjGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
