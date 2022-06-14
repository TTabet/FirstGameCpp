// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstCpp/Game/FirstCppUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstCppUserWidget() {}
// Cross Module References
	FIRSTCPP_API UClass* Z_Construct_UClass_UFirstCppUserWidget_NoRegister();
	FIRSTCPP_API UClass* Z_Construct_UClass_UFirstCppUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FirstCpp();
// End Cross Module References
	static FName NAME_UFirstCppUserWidget_SetItemText = FName(TEXT("SetItemText"));
	void UFirstCppUserWidget::SetItemText(int32 ItemsCollected, int32 ItemsInLevel)
	{
		FirstCppUserWidget_eventSetItemText_Parms Parms;
		Parms.ItemsCollected=ItemsCollected;
		Parms.ItemsInLevel=ItemsInLevel;
		ProcessEvent(FindFunctionChecked(NAME_UFirstCppUserWidget_SetItemText),&Parms);
	}
	void UFirstCppUserWidget::StaticRegisterNativesUFirstCppUserWidget()
	{
	}
	struct Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsCollected;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsInLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::NewProp_ItemsCollected = { "ItemsCollected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstCppUserWidget_eventSetItemText_Parms, ItemsCollected), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::NewProp_ItemsInLevel = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstCppUserWidget_eventSetItemText_Parms, ItemsInLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::NewProp_ItemsCollected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::NewProp_ItemsInLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/FirstCppUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirstCppUserWidget, nullptr, "SetItemText", nullptr, nullptr, sizeof(FirstCppUserWidget_eventSetItemText_Parms), Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirstCppUserWidget_SetItemText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirstCppUserWidget_SetItemText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirstCppUserWidget);
	UClass* Z_Construct_UClass_UFirstCppUserWidget_NoRegister()
	{
		return UFirstCppUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFirstCppUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirstCppUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstCpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirstCppUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirstCppUserWidget_SetItemText, "SetItemText" }, // 3988485332
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirstCppUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Game/FirstCppUserWidget.h" },
		{ "ModuleRelativePath", "Game/FirstCppUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirstCppUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirstCppUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirstCppUserWidget_Statics::ClassParams = {
		&UFirstCppUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFirstCppUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirstCppUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirstCppUserWidget()
	{
		if (!Z_Registration_Info_UClass_UFirstCppUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirstCppUserWidget.OuterSingleton, Z_Construct_UClass_UFirstCppUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFirstCppUserWidget.OuterSingleton;
	}
	template<> FIRSTCPP_API UClass* StaticClass<UFirstCppUserWidget>()
	{
		return UFirstCppUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirstCppUserWidget);
	struct Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFirstCppUserWidget, UFirstCppUserWidget::StaticClass, TEXT("UFirstCppUserWidget"), &Z_Registration_Info_UClass_UFirstCppUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirstCppUserWidget), 2381028055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppUserWidget_h_2457484760(TEXT("/Script/FirstCpp"),
		Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstCpp_Source_FirstCpp_Game_FirstCppUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
