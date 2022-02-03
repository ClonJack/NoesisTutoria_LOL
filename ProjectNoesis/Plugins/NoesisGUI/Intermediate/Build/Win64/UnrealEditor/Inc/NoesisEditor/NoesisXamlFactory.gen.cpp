// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisEditor/Classes/NoesisXamlFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoesisXamlFactory() {}
// Cross Module References
	NOESISEDITOR_API UClass* Z_Construct_UClass_UNoesisXamlFactory_NoRegister();
	NOESISEDITOR_API UClass* Z_Construct_UClass_UNoesisXamlFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NoesisEditor();
// End Cross Module References
	void UNoesisXamlFactory::StaticRegisterNativesUNoesisXamlFactory()
	{
	}
	UClass* Z_Construct_UClass_UNoesisXamlFactory_NoRegister()
	{
		return UNoesisXamlFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNoesisXamlFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoesisXamlFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisXamlFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoesisXamlFactory.h" },
		{ "ModuleRelativePath", "Classes/NoesisXamlFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoesisXamlFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoesisXamlFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoesisXamlFactory_Statics::ClassParams = {
		&UNoesisXamlFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNoesisXamlFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisXamlFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoesisXamlFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoesisXamlFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoesisXamlFactory, 2297762384);
	template<> NOESISEDITOR_API UClass* StaticClass<UNoesisXamlFactory>()
	{
		return UNoesisXamlFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoesisXamlFactory(Z_Construct_UClass_UNoesisXamlFactory, &UNoesisXamlFactory::StaticClass, TEXT("/Script/NoesisEditor"), TEXT("UNoesisXamlFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoesisXamlFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
