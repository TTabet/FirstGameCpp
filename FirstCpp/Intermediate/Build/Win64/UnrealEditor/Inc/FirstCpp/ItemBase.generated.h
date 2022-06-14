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
#ifdef FIRSTCPP_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define FIRSTCPP_ItemBase_generated_h

#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_SPARSE_DATA
#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_RPC_WRAPPERS \
	virtual void Collected_Implementation(); \
 \
	DECLARE_FUNCTION(execCollected); \
	DECLARE_FUNCTION(execOverlapBegin);


#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Collected_Implementation(); \
 \
	DECLARE_FUNCTION(execCollected); \
	DECLARE_FUNCTION(execOverlapBegin);


#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_EVENT_PARMS
#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_CALLBACK_WRAPPERS
#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstCpp"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstCpp"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public:


#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBase)


#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_9_PROLOG \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_EVENT_PARMS


#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_SPARSE_DATA \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_RPC_WRAPPERS \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_CALLBACK_WRAPPERS \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_INCLASS \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_SPARSE_DATA \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_CALLBACK_WRAPPERS \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTCPP_API UClass* StaticClass<class AItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstCpp_Source_FirstCpp_Items_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
