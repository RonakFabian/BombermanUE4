// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BBM_PlaneActor_generated_h
#error "PlaneActor.generated.h already included, missing '#pragma once' in PlaneActor.h"
#endif
#define BBM_PlaneActor_generated_h

#define BBM_Source_BBM_PlaneActor_h_12_SPARSE_DATA
#define BBM_Source_BBM_PlaneActor_h_12_RPC_WRAPPERS
#define BBM_Source_BBM_PlaneActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BBM_Source_BBM_PlaneActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlaneActor(); \
	friend struct Z_Construct_UClass_APlaneActor_Statics; \
public: \
	DECLARE_CLASS(APlaneActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BBM"), NO_API) \
	DECLARE_SERIALIZER(APlaneActor)


#define BBM_Source_BBM_PlaneActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlaneActor(); \
	friend struct Z_Construct_UClass_APlaneActor_Statics; \
public: \
	DECLARE_CLASS(APlaneActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BBM"), NO_API) \
	DECLARE_SERIALIZER(APlaneActor)


#define BBM_Source_BBM_PlaneActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlaneActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlaneActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlaneActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlaneActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlaneActor(APlaneActor&&); \
	NO_API APlaneActor(const APlaneActor&); \
public:


#define BBM_Source_BBM_PlaneActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlaneActor(APlaneActor&&); \
	NO_API APlaneActor(const APlaneActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlaneActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlaneActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlaneActor)


#define BBM_Source_BBM_PlaneActor_h_12_PRIVATE_PROPERTY_OFFSET
#define BBM_Source_BBM_PlaneActor_h_9_PROLOG
#define BBM_Source_BBM_PlaneActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BBM_Source_BBM_PlaneActor_h_12_PRIVATE_PROPERTY_OFFSET \
	BBM_Source_BBM_PlaneActor_h_12_SPARSE_DATA \
	BBM_Source_BBM_PlaneActor_h_12_RPC_WRAPPERS \
	BBM_Source_BBM_PlaneActor_h_12_INCLASS \
	BBM_Source_BBM_PlaneActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BBM_Source_BBM_PlaneActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BBM_Source_BBM_PlaneActor_h_12_PRIVATE_PROPERTY_OFFSET \
	BBM_Source_BBM_PlaneActor_h_12_SPARSE_DATA \
	BBM_Source_BBM_PlaneActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BBM_Source_BBM_PlaneActor_h_12_INCLASS_NO_PURE_DECLS \
	BBM_Source_BBM_PlaneActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BBM_API UClass* StaticClass<class APlaneActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BBM_Source_BBM_PlaneActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
