// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RacingMultGame/RacingMultGameHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRacingMultGameHud() {}
// Cross Module References
	RACINGMULTGAME_API UClass* Z_Construct_UClass_ARacingMultGameHud_NoRegister();
	RACINGMULTGAME_API UClass* Z_Construct_UClass_ARacingMultGameHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_RacingMultGame();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ARacingMultGameHud::StaticRegisterNativesARacingMultGameHud()
	{
	}
	UClass* Z_Construct_UClass_ARacingMultGameHud_NoRegister()
	{
		return ARacingMultGameHud::StaticClass();
	}
	struct Z_Construct_UClass_ARacingMultGameHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARacingMultGameHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RacingMultGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARacingMultGameHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RacingMultGameHud.h" },
		{ "ModuleRelativePath", "RacingMultGameHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARacingMultGameHud_Statics::NewProp_HUDFont_MetaData[] = {
		{ "Comment", "/** Font used to render the vehicle info */" },
		{ "ModuleRelativePath", "RacingMultGameHud.h" },
		{ "ToolTip", "Font used to render the vehicle info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARacingMultGameHud_Statics::NewProp_HUDFont = { "HUDFont", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARacingMultGameHud, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARacingMultGameHud_Statics::NewProp_HUDFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARacingMultGameHud_Statics::NewProp_HUDFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARacingMultGameHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARacingMultGameHud_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARacingMultGameHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARacingMultGameHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARacingMultGameHud_Statics::ClassParams = {
		&ARacingMultGameHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARacingMultGameHud_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ARacingMultGameHud_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARacingMultGameHud_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARacingMultGameHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARacingMultGameHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARacingMultGameHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARacingMultGameHud, 2700692292);
	template<> RACINGMULTGAME_API UClass* StaticClass<ARacingMultGameHud>()
	{
		return ARacingMultGameHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARacingMultGameHud(Z_Construct_UClass_ARacingMultGameHud, &ARacingMultGameHud::StaticClass, TEXT("/Script/RacingMultGame"), TEXT("ARacingMultGameHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARacingMultGameHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
