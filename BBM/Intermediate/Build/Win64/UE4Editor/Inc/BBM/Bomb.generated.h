// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BBM_Bomb_generated_h
#error "Bomb.generated.h already included, missing '#pragma once' in Bomb.h"
#endif
#define BBM_Bomb_generated_h

#define BBM_Source_BBM_Bomb_h_12_SPARSE_DATA
#define BBM_Source_BBM_Bomb_h_12_RPC_WRAPPERS
#define BBM_Source_BBM_Bomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BBM_Source_BBM_Bomb_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BBM"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define BBM_Source_BBM_Bomb_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BBM"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define BBM_Source_BBM_Bomb_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public:


#define BBM_Source_BBM_Bomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomb)


#define BBM_Source_BBM_Bomb_h_12_PRIVATE_PROPERTY_OFFSET
#define BBM_Source_BBM_Bomb_h_9_PROLOG
#define BBM_Source_BBM_Bomb_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BBM_Source_BBM_Bomb_h_12_PRIVATE_PROPERTY_OFFSET \
	BBM_Source_BBM_Bomb_h_12_SPARSE_DATA \
	BBM_Source_BBM_Bomb_h_12_RPC_WRAPPERS \
	BBM_Source_BBM_Bomb_h_12_INCLASS \
	BBM_Source_BBM_Bomb_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BBM_Source_BBM_Bomb_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BBM_Source_BBM_Bomb_h_12_PRIVATE_PROPERTY_OFFSET \
	BBM_Source_BBM_Bomb_h_12_SPARSE_DATA \
	BBM_Source_BBM_Bomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BBM_Source_BBM_Bomb_h_12_INCLASS_NO_PURE_DECLS \
	BBM_Source_BBM_Bomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BBM_API UClass* StaticClass<class ABomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BBM_Source_BBM_Bomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
