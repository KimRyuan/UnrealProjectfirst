// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRST_MyFirstClass_generated_h
#error "MyFirstClass.generated.h already included, missing '#pragma once' in MyFirstClass.h"
#endif
#define FIRST_MyFirstClass_generated_h

#define first_Source_first_MyFirstClass_h_12_RPC_WRAPPERS
#define first_Source_first_MyFirstClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define first_Source_first_MyFirstClass_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyFirstClass(); \
	friend FIRST_API class UClass* Z_Construct_UClass_AMyFirstClass(); \
public: \
	DECLARE_CLASS(AMyFirstClass, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/first"), NO_API) \
	DECLARE_SERIALIZER(AMyFirstClass) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define first_Source_first_MyFirstClass_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyFirstClass(); \
	friend FIRST_API class UClass* Z_Construct_UClass_AMyFirstClass(); \
public: \
	DECLARE_CLASS(AMyFirstClass, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/first"), NO_API) \
	DECLARE_SERIALIZER(AMyFirstClass) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define first_Source_first_MyFirstClass_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyFirstClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyFirstClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFirstClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFirstClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFirstClass(AMyFirstClass&&); \
	NO_API AMyFirstClass(const AMyFirstClass&); \
public:


#define first_Source_first_MyFirstClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFirstClass(AMyFirstClass&&); \
	NO_API AMyFirstClass(const AMyFirstClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFirstClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFirstClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyFirstClass)


#define first_Source_first_MyFirstClass_h_12_PRIVATE_PROPERTY_OFFSET
#define first_Source_first_MyFirstClass_h_9_PROLOG
#define first_Source_first_MyFirstClass_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	first_Source_first_MyFirstClass_h_12_PRIVATE_PROPERTY_OFFSET \
	first_Source_first_MyFirstClass_h_12_RPC_WRAPPERS \
	first_Source_first_MyFirstClass_h_12_INCLASS \
	first_Source_first_MyFirstClass_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define first_Source_first_MyFirstClass_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	first_Source_first_MyFirstClass_h_12_PRIVATE_PROPERTY_OFFSET \
	first_Source_first_MyFirstClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	first_Source_first_MyFirstClass_h_12_INCLASS_NO_PURE_DECLS \
	first_Source_first_MyFirstClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID first_Source_first_MyFirstClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
