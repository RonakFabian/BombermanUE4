// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BBM/PlaneActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneActor() {}
// Cross Module References
	BBM_API UClass* Z_Construct_UClass_APlaneActor_NoRegister();
	BBM_API UClass* Z_Construct_UClass_APlaneActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BBM();
// End Cross Module References
	void APlaneActor::StaticRegisterNativesAPlaneActor()
	{
	}
	UClass* Z_Construct_UClass_APlaneActor_NoRegister()
	{
		return APlaneActor::StaticClass();
	}
	struct Z_Construct_UClass_APlaneActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaneActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BBM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaneActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlaneActor.h" },
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaneActor_Statics::NewProp_y_MetaData[] = {
		{ "Category", "PlaneActor" },
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlaneActor, y), METADATA_PARAMS(Z_Construct_UClass_APlaneActor_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaneActor_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaneActor_Statics::NewProp_x_MetaData[] = {
		{ "Category", "PlaneActor" },
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlaneActor, x), METADATA_PARAMS(Z_Construct_UClass_APlaneActor_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaneActor_Statics::NewProp_x_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlaneActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_x,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaneActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaneActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlaneActor_Statics::ClassParams = {
		&APlaneActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlaneActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlaneActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlaneActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaneActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaneActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlaneActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlaneActor, 2792952999);
	template<> BBM_API UClass* StaticClass<APlaneActor>()
	{
		return APlaneActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlaneActor(Z_Construct_UClass_APlaneActor, &APlaneActor::StaticClass, TEXT("/Script/BBM"), TEXT("APlaneActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaneActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
