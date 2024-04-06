// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso/CursoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCursoGameMode() {}
// Cross Module References
	CURSO_API UClass* Z_Construct_UClass_ACursoGameMode();
	CURSO_API UClass* Z_Construct_UClass_ACursoGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Curso();
// End Cross Module References
	void ACursoGameMode::StaticRegisterNativesACursoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACursoGameMode);
	UClass* Z_Construct_UClass_ACursoGameMode_NoRegister()
	{
		return ACursoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACursoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACursoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACursoGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACursoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CursoGameMode.h" },
		{ "ModuleRelativePath", "CursoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACursoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACursoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACursoGameMode_Statics::ClassParams = {
		&ACursoGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACursoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACursoGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACursoGameMode()
	{
		if (!Z_Registration_Info_UClass_ACursoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACursoGameMode.OuterSingleton, Z_Construct_UClass_ACursoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACursoGameMode.OuterSingleton;
	}
	template<> CURSO_API UClass* StaticClass<ACursoGameMode>()
	{
		return ACursoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACursoGameMode);
	ACursoGameMode::~ACursoGameMode() {}
	struct Z_CompiledInDeferFile_FID_Curso_Curso_Source_Curso_CursoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Curso_Curso_Source_Curso_CursoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACursoGameMode, ACursoGameMode::StaticClass, TEXT("ACursoGameMode"), &Z_Registration_Info_UClass_ACursoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACursoGameMode), 1680648025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Curso_Curso_Source_Curso_CursoGameMode_h_1508183804(TEXT("/Script/Curso"),
		Z_CompiledInDeferFile_FID_Curso_Curso_Source_Curso_CursoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Curso_Curso_Source_Curso_CursoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
