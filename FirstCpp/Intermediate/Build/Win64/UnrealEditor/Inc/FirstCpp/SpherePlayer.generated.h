// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FIRSTCPP_SpherePlayer_generated_h
#error "SpherePlayer.generated.h already included, missing '#pragma once' in SpherePlayer.h"
#endif
#define FIRSTCPP_SpherePlayer_generated_h

#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_SPARSE_DATA
#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpherePlayer(); \
	friend struct Z_Construct_UClass_ASpherePlayer_Statics; \
public: \
	DECLARE_CLASS(ASpherePlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstCpp"), NO_API) \
	DECLARE_SERIALIZER(ASpherePlayer)


#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASpherePlayer(); \
	friend struct Z_Construct_UClass_ASpherePlayer_Statics; \
public: \
	DECLARE_CLASS(ASpherePlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstCpp"), NO_API) \
	DECLARE_SERIALIZER(ASpherePlayer)


#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpherePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpherePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpherePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpherePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpherePlayer(ASpherePlayer&&); \
	NO_API ASpherePlayer(const ASpherePlayer&); \
public:


#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpherePlayer(ASpherePlayer&&); \
	NO_API ASpherePlayer(const ASpherePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpherePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpherePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpherePlayer)


#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_13_PROLOG
#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_SPARSE_DATA \
	FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_RPC_WRAPPERS \
	FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_INCLASS \
	FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_SPARSE_DATA \
	FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTCPP_API UClass* StaticClass<class ASpherePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstCpp_Source_FirstCpp_Game_SpherePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
