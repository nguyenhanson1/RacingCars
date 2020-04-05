// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RacingMultGame/RacingMultGameWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRacingMultGameWheelRear() {}
// Cross Module References
	RACINGMULTGAME_API UClass* Z_Construct_UClass_URacingMultGameWheelRear_NoRegister();
	RACINGMULTGAME_API UClass* Z_Construct_UClass_URacingMultGameWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_RacingMultGame();
// End Cross Module References
	void URacingMultGameWheelRear::StaticRegisterNativesURacingMultGameWheelRear()
	{
	}
	UClass* Z_Construct_UClass_URacingMultGameWheelRear_NoRegister()
	{
		return URacingMultGameWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_URacingMultGameWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URacingMultGameWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_RacingMultGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URacingMultGameWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RacingMultGameWheelRear.h" },
		{ "ModuleRelativePath", "RacingMultGameWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URacingMultGameWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URacingMultGameWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URacingMultGameWheelRear_Statics::ClassParams = {
		&URacingMultGameWheelRear::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URacingMultGameWheelRear_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URacingMultGameWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URacingMultGameWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URacingMultGameWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URacingMultGameWheelRear, 952459591);
	template<> RACINGMULTGAME_API UClass* StaticClass<URacingMultGameWheelRear>()
	{
		return URacingMultGameWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URacingMultGameWheelRear(Z_Construct_UClass_URacingMultGameWheelRear, &URacingMultGameWheelRear::StaticClass, TEXT("/Script/RacingMultGame"), TEXT("URacingMultGameWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URacingMultGameWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
