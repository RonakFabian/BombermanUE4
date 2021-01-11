// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BBM/CubeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeActor() {}
// Cross Module References
	BBM_API UClass* Z_Construct_UClass_ACubeActor_NoRegister();
	BBM_API UClass* Z_Construct_UClass_ACubeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BBM();
// End Cross Module References
	void ACubeActor::StaticRegisterNativesACubeActor()
	{
	}
	UClass* Z_Construct_UClass_ACubeActor_NoRegister()
	{
		return ACubeActor::StaticClass();
	}
	struct Z_Construct_UClass_ACubeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BBM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubeActor.h" },
		{ "ModuleRelativePath", "CubeActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeActor_Statics::ClassParams = {
		&ACubeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACubeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeActor, 2903975506);
	template<> BBM_API UClass* StaticClass<ACubeActor>()
	{
		return ACubeActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeActor(Z_Construct_UClass_ACubeActor, &ACubeActor::StaticClass, TEXT("/Script/BBM"), TEXT("ACubeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
