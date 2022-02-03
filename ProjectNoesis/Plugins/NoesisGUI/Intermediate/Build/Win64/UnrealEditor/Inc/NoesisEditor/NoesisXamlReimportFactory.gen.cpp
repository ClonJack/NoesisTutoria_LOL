// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisEditor/Classes/NoesisXamlReimportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoesisXamlReimportFactory() {}
// Cross Module References
	NOESISEDITOR_API UClass* Z_Construct_UClass_UNoesisXamlReimportFactory_NoRegister();
	NOESISEDITOR_API UClass* Z_Construct_UClass_UNoesisXamlReimportFactory();
	NOESISEDITOR_API UClass* Z_Construct_UClass_UNoesisXamlFactory();
	UPackage* Z_Construct_UPackage__Script_NoesisEditor();
// End Cross Module References
	void UNoesisXamlReimportFactory::StaticRegisterNativesUNoesisXamlReimportFactory()
	{
	}
	UClass* Z_Construct_UClass_UNoesisXamlReimportFactory_NoRegister()
	{
		return UNoesisXamlReimportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNoesisXamlReimportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoesisXamlReimportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoesisXamlFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisXamlReimportFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoesisXamlReimportFactory.h" },
		{ "ModuleRelativePath", "Classes/NoesisXamlReimportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoesisXamlReimportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoesisXamlReimportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoesisXamlReimportFactory_Statics::ClassParams = {
		&UNoesisXamlReimportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNoesisXamlReimportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisXamlReimportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoesisXamlReimportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoesisXamlReimportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoesisXamlReimportFactory, 3730130636);
	template<> NOESISEDITOR_API UClass* StaticClass<UNoesisXamlReimportFactory>()
	{
		return UNoesisXamlReimportFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoesisXamlReimportFactory(Z_Construct_UClass_UNoesisXamlReimportFactory, &UNoesisXamlReimportFactory::StaticClass, TEXT("/Script/NoesisEditor"), TEXT("UNoesisXamlReimportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoesisXamlReimportFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
