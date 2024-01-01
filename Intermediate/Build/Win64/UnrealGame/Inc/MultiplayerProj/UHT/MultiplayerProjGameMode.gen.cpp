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
	DEFINE_FUNCTION(AMultiplayerProjGameMode::execJoinLANGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinLANGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiplayerProjGameMode::execHostLANGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostLANGame();
		P_NATIVE_END;
	}
	void AMultiplayerProjGameMode::StaticRegisterNativesAMultiplayerProjGameMode()
	{
		UClass* Class = AMultiplayerProjGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HostLANGame", &AMultiplayerProjGameMode::execHostLANGame },
			{ "JoinLANGame", &AMultiplayerProjGameMode::execJoinLANGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiplayerProjGameMode_HostLANGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjGameMode_HostLANGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MultiplayerProjGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjGameMode_HostLANGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjGameMode, nullptr, "HostLANGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerProjGameMode_HostLANGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjGameMode_HostLANGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerProjGameMode_HostLANGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjGameMode_HostLANGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerProjGameMode_JoinLANGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerProjGameMode_JoinLANGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MultiplayerProjGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerProjGameMode_JoinLANGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerProjGameMode, nullptr, "JoinLANGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerProjGameMode_JoinLANGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerProjGameMode_JoinLANGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerProjGameMode_JoinLANGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerProjGameMode_JoinLANGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerProjGameMode);
	UClass* Z_Construct_UClass_AMultiplayerProjGameMode_NoRegister()
	{
		return AMultiplayerProjGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerProjGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiplayerProjGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerProjGameMode_HostLANGame, "HostLANGame" }, // 1829817622
		{ &Z_Construct_UFunction_AMultiplayerProjGameMode_JoinLANGame, "JoinLANGame" }, // 3313172732
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AMultiplayerProjGameMode, AMultiplayerProjGameMode::StaticClass, TEXT("AMultiplayerProjGameMode"), &Z_Registration_Info_UClass_AMultiplayerProjGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerProjGameMode), 1925082578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_MultiplayerProj_Source_MultiplayerProj_MultiplayerProjGameMode_h_2857282191(TEXT("/Script/MultiplayerProj"),
		Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_MultiplayerProj_Source_MultiplayerProj_MultiplayerProjGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_igoni_OneDrive_Documentos_Unreal_Projects_MultiplayerProj_Source_MultiplayerProj_MultiplayerProjGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
