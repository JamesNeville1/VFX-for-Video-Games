// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VFX_Neville/VFX_NevilleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVFX_NevilleGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VFX_Neville();
VFX_NEVILLE_API UClass* Z_Construct_UClass_AVFX_NevilleGameMode();
VFX_NEVILLE_API UClass* Z_Construct_UClass_AVFX_NevilleGameMode_NoRegister();
// End Cross Module References

// Begin Class AVFX_NevilleGameMode
void AVFX_NevilleGameMode::StaticRegisterNativesAVFX_NevilleGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVFX_NevilleGameMode);
UClass* Z_Construct_UClass_AVFX_NevilleGameMode_NoRegister()
{
	return AVFX_NevilleGameMode::StaticClass();
}
struct Z_Construct_UClass_AVFX_NevilleGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VFX_NevilleGameMode.h" },
		{ "ModuleRelativePath", "VFX_NevilleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVFX_NevilleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVFX_NevilleGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VFX_Neville,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVFX_NevilleGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVFX_NevilleGameMode_Statics::ClassParams = {
	&AVFX_NevilleGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVFX_NevilleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AVFX_NevilleGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVFX_NevilleGameMode()
{
	if (!Z_Registration_Info_UClass_AVFX_NevilleGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVFX_NevilleGameMode.OuterSingleton, Z_Construct_UClass_AVFX_NevilleGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVFX_NevilleGameMode.OuterSingleton;
}
template<> VFX_NEVILLE_API UClass* StaticClass<AVFX_NevilleGameMode>()
{
	return AVFX_NevilleGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVFX_NevilleGameMode);
AVFX_NevilleGameMode::~AVFX_NevilleGameMode() {}
// End Class AVFX_NevilleGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_n013403n_Documents_GitHub_VFX_for_Video_Games_VFX_Neville_Source_VFX_Neville_VFX_NevilleGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVFX_NevilleGameMode, AVFX_NevilleGameMode::StaticClass, TEXT("AVFX_NevilleGameMode"), &Z_Registration_Info_UClass_AVFX_NevilleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVFX_NevilleGameMode), 292871385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_n013403n_Documents_GitHub_VFX_for_Video_Games_VFX_Neville_Source_VFX_Neville_VFX_NevilleGameMode_h_806277985(TEXT("/Script/VFX_Neville"),
	Z_CompiledInDeferFile_FID_Users_n013403n_Documents_GitHub_VFX_for_Video_Games_VFX_Neville_Source_VFX_Neville_VFX_NevilleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_n013403n_Documents_GitHub_VFX_for_Video_Games_VFX_Neville_Source_VFX_Neville_VFX_NevilleGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
