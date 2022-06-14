// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstCpp/Game/FirstCppGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstCppGameModeBase() {}
// Cross Module References
	FIRSTCPP_API UClass* Z_Construct_UClass_AFirstCppGameModeBase_NoRegister();
	FIRSTCPP_API UClass* Z_Construct_UClass_AFirstCppGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstCpp();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	FIRSTCPP_API UClass* Z_Construct_UClass_UFirstCppUserWidget_NoRegister();
// End Cross Module References
	void AFirstCppGameModeBase::StaticRegisterNativesAFirstCppGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstCppGameModeBase);
	UClass* Z_Construct_UClass_AFirstCppGameModeBase_NoRegister()
	{
		return AFirstCppGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirstCppGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstCppGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstCpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCppGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/FirstCppGameModeBase.h" },
		{ "ModuleRelativePath", "Game/FirstCppGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Game/FirstCppGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidgetClass = { "GameWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstCppGameModeBase, GameWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/FirstCppGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidget = { "GameWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstCppGameModeBase, GameWidget), Z_Construct_UClass_UFirstCppUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstCppGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstCppGameModeBase_Statics::NewProp_GameWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstCppGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstCppGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstCppGameModeBase_Statics::ClassParams = {
		&AFirstCppGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirstCppGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCppGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstCppGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCppGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstCppGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFirstCppGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstCppGameModeBase.OuterSingleton, Z_Construct_UClass_AFirstCppGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstCppGameModeBase.OuterSingleton;
	}
	template<> FIRSTCPP_API UClass* StaticClass<AFirstCppGameModeBase>()
	{
		return AFirstCppGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstCppGameModeBase);
	struct Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstCppGameModeBase, AFirstCppGameModeBase::StaticClass, TEXT("AFirstCppGameModeBase"), &Z_Registration_Info_UClass_AFirstCppGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstCppGameModeBase), 1925883116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppGameModeBase_h_2093320800(TEXT("/Script/FirstCpp"),
		Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
