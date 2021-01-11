// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BBM_MapGenerator_generated_h
#error "MapGenerator.generated.h already included, missing '#pragma once' in MapGenerator.h"
#endif
#define BBM_MapGenerator_generated_h

#define BBM_Source_BBM_MapGenerator_h_13_SPARSE_DATA
#define BBM_Source_BBM_MapGenerator_h_13_RPC_WRAPPERS
#define BBM_Source_BBM_MapGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BBM_Source_BBM_MapGenerator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapGenerator(); \
	friend struct Z_Construct_UClass_AMapGenerator_Statics; \
public: \
	DECLARE_CLASS(AMapGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BBM"), NO_API) \
	DECLARE_SERIALIZER(AMapGenerator)


#define BBM_Source_BBM_MapGenerator_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMapGenerator(); \
	friend struct Z_Construct_UClass_AMapGenerator_Statics; \
public: \
	DECLARE_CLASS(AMapGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BBM"), NO_API) \
	DECLARE_SERIALIZER(AMapGenerator)


#define BBM_Source_BBM_MapGenerator_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapGenerator(AMapGenerator&&); \
	NO_API AMapGenerator(const AMapGenerator&); \
public:


#define BBM_Source_BBM_MapGenerator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapGenerator(AMapGenerator&&); \
	NO_API AMapGenerator(const AMapGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapGenerator)


#define BBM_Source_BBM_MapGenerator_h_13_PRIVATE_PROPERTY_OFFSET
#define BBM_Source_BBM_MapGenerator_h_10_PROLOG
#define BBM_Source_BBM_MapGenerator_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BBM_Source_BBM_MapGenerator_h_13_PRIVATE_PROPERTY_OFFSET \
	BBM_Source_BBM_MapGenerator_h_13_SPARSE_DATA \
	BBM_Source_BBM_MapGenerator_h_13_RPC_WRAPPERS \
	BBM_Source_BBM_MapGenerator_h_13_INCLASS \
	BBM_Source_BBM_MapGenerator_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BBM_Source_BBM_MapGenerator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BBM_Source_BBM_MapGenerator_h_13_PRIVATE_PROPERTY_OFFSET \
	BBM_Source_BBM_MapGenerator_h_13_SPARSE_DATA \
	BBM_Source_BBM_MapGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BBM_Source_BBM_MapGenerator_h_13_INCLASS_NO_PURE_DECLS \
	BBM_Source_BBM_MapGenerator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BBM_API UClass* StaticClass<class AMapGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BBM_Source_BBM_MapGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
