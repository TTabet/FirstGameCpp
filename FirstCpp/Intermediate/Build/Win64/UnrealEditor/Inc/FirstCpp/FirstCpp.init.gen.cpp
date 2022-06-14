// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstCpp_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstCpp;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstCpp()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstCpp.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstCpp",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x62B52322,
				0xDE53BAEE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstCpp.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstCpp.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstCpp(Z_Construct_UPackage__Script_FirstCpp, TEXT("/Script/FirstCpp"), Z_Registration_Info_UPackage__Script_FirstCpp, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x62B52322, 0xDE53BAEE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
