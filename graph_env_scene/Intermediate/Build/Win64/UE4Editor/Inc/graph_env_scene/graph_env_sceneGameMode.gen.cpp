// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "graph_env_scene/graph_env_sceneGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegraph_env_sceneGameMode() {}
// Cross Module References
	GRAPH_ENV_SCENE_API UClass* Z_Construct_UClass_Agraph_env_sceneGameMode_NoRegister();
	GRAPH_ENV_SCENE_API UClass* Z_Construct_UClass_Agraph_env_sceneGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_graph_env_scene();
// End Cross Module References
	void Agraph_env_sceneGameMode::StaticRegisterNativesAgraph_env_sceneGameMode()
	{
	}
	UClass* Z_Construct_UClass_Agraph_env_sceneGameMode_NoRegister()
	{
		return Agraph_env_sceneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Agraph_env_sceneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agraph_env_sceneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_graph_env_scene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agraph_env_sceneGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "graph_env_sceneGameMode.h" },
		{ "ModuleRelativePath", "graph_env_sceneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agraph_env_sceneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agraph_env_sceneGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agraph_env_sceneGameMode_Statics::ClassParams = {
		&Agraph_env_sceneGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Agraph_env_sceneGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Agraph_env_sceneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agraph_env_sceneGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agraph_env_sceneGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agraph_env_sceneGameMode, 3260123451);
	template<> GRAPH_ENV_SCENE_API UClass* StaticClass<Agraph_env_sceneGameMode>()
	{
		return Agraph_env_sceneGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agraph_env_sceneGameMode(Z_Construct_UClass_Agraph_env_sceneGameMode, &Agraph_env_sceneGameMode::StaticClass, TEXT("/Script/graph_env_scene"), TEXT("Agraph_env_sceneGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agraph_env_sceneGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
