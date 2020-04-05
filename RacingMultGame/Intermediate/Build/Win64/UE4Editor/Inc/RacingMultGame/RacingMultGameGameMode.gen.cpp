// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RacingMultGame/RacingMultGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRacingMultGameGameMode() {}
// Cross Module References
	RACINGMULTGAME_API UClass* Z_Construct_UClass_ARacingMultGameGameMode_NoRegister();
	RACINGMULTGAME_API UClass* Z_Construct_UClass_ARacingMultGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RacingMultGame();
// End Cross Module References
	void ARacingMultGameGameMode::StaticRegisterNativesARacingMultGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARacingMultGameGameMode_NoRegister()
	{
		return ARacingMultGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARacingMultGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARacingMultGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RacingMultGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARacingMultGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RacingMultGameGameMode.h" },
		{ "ModuleRelativePath", "RacingMultGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARacingMultGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARacingMultGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARacingMultGameGameMode_Statics::ClassParams = {
		&ARacingMultGameGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ARacingMultGameGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARacingMultGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARacingMultGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARacingMultGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARacingMultGameGameMode, 387041273);
	template<> RACINGMULTGAME_API UClass* StaticClass<ARacingMultGameGameMode>()
	{
		return ARacingMultGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARacingMultGameGameMode(Z_Construct_UClass_ARacingMultGameGameMode, &ARacingMultGameGameMode::StaticClass, TEXT("/Script/RacingMultGame"), TEXT("ARacingMultGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARacingMultGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
