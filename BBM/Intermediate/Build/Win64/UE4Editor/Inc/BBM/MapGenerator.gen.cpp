// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BBM/MapGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapGenerator() {}
// Cross Module References
	BBM_API UClass* Z_Construct_UClass_AMapGenerator_NoRegister();
	BBM_API UClass* Z_Construct_UClass_AMapGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BBM();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AMapGenerator::StaticRegisterNativesAMapGenerator()
	{
	}
	UClass* Z_Construct_UClass_AMapGenerator_NoRegister()
	{
		return AMapGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AMapGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grid_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthBetweenTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LengthBetweenTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfTilesY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfTilesY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfTilesX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfTilesX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CubeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlaneActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BBM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapGenerator.h" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::NewProp_Grid_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGenerator, Grid), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::NewProp_Grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::NewProp_Grid_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_Grid_Inner = { "Grid", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::NewProp_LengthBetweenTiles_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_LengthBetweenTiles = { "LengthBetweenTiles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGenerator, LengthBetweenTiles), METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::NewProp_LengthBetweenTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::NewProp_LengthBetweenTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesY_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesY = { "NumberOfTilesY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGenerator, NumberOfTilesY), METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesX_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesX = { "NumberOfTilesX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGenerator, NumberOfTilesX), METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::NewProp_CubeActor_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_CubeActor = { "CubeActor", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGenerator, CubeActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::NewProp_CubeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::NewProp_CubeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::NewProp_PlaneActor_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_PlaneActor = { "PlaneActor", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGenerator, PlaneActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::NewProp_PlaneActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::NewProp_PlaneActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_Grid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_Grid_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_LengthBetweenTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_NumberOfTilesX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_CubeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_PlaneActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapGenerator_Statics::ClassParams = {
		&AMapGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMapGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapGenerator, 2797978239);
	template<> BBM_API UClass* StaticClass<AMapGenerator>()
	{
		return AMapGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapGenerator(Z_Construct_UClass_AMapGenerator, &AMapGenerator::StaticClass, TEXT("/Script/BBM"), TEXT("AMapGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
