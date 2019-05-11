// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyFirstClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFirstClass() {}
// Cross Module References
	FIRST_API UClass* Z_Construct_UClass_AMyFirstClass_NoRegister();
	FIRST_API UClass* Z_Construct_UClass_AMyFirstClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_first();
// End Cross Module References
	void AMyFirstClass::StaticRegisterNativesAMyFirstClass()
	{
	}
	UClass* Z_Construct_UClass_AMyFirstClass_NoRegister()
	{
		return AMyFirstClass::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyFirstClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_first,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyFirstClass.h" },
				{ "ModuleRelativePath", "MyFirstClass.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyFirstClass>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyFirstClass::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFirstClass, 3759501455);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFirstClass(Z_Construct_UClass_AMyFirstClass, &AMyFirstClass::StaticClass, TEXT("/Script/first"), TEXT("AMyFirstClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFirstClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
