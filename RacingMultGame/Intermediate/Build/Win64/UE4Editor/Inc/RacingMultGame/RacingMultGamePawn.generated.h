// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RACINGMULTGAME_RacingMultGamePawn_generated_h
#error "RacingMultGamePawn.generated.h already included, missing '#pragma once' in RacingMultGamePawn.h"
#endif
#define RACINGMULTGAME_RacingMultGamePawn_generated_h

#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_RPC_WRAPPERS
#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARacingMultGamePawn(); \
	friend struct Z_Construct_UClass_ARacingMultGamePawn_Statics; \
public: \
	DECLARE_CLASS(ARacingMultGamePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RacingMultGame"), NO_API) \
	DECLARE_SERIALIZER(ARacingMultGamePawn)


#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesARacingMultGamePawn(); \
	friend struct Z_Construct_UClass_ARacingMultGamePawn_Statics; \
public: \
	DECLARE_CLASS(ARacingMultGamePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RacingMultGame"), NO_API) \
	DECLARE_SERIALIZER(ARacingMultGamePawn)


#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARacingMultGamePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARacingMultGamePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARacingMultGamePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARacingMultGamePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARacingMultGamePawn(ARacingMultGamePawn&&); \
	NO_API ARacingMultGamePawn(const ARacingMultGamePawn&); \
public:


#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARacingMultGamePawn(ARacingMultGamePawn&&); \
	NO_API ARacingMultGamePawn(const ARacingMultGamePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARacingMultGamePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARacingMultGamePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARacingMultGamePawn)


#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ARacingMultGamePawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ARacingMultGamePawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ARacingMultGamePawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ARacingMultGamePawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ARacingMultGamePawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ARacingMultGamePawn, InCarGear); }


#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_14_PROLOG
#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_PRIVATE_PROPERTY_OFFSET \
	RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_RPC_WRAPPERS \
	RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_INCLASS \
	RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_PRIVATE_PROPERTY_OFFSET \
	RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_INCLASS_NO_PURE_DECLS \
	RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RACINGMULTGAME_API UClass* StaticClass<class ARacingMultGamePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RacingMultGame_Source_RacingMultGame_RacingMultGamePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
