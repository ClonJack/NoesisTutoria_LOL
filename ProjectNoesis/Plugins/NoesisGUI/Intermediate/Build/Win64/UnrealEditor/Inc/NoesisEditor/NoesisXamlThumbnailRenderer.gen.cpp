// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisEditor/Classes/NoesisXamlThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoesisXamlThumbnailRenderer() {}
// Cross Module References
	NOESISEDITOR_API UClass* Z_Construct_UClass_UNoesisXamlThumbnailRenderer_NoRegister();
	NOESISEDITOR_API UClass* Z_Construct_UClass_UNoesisXamlThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_NoesisEditor();
// End Cross Module References
	void UNoesisXamlThumbnailRenderer::StaticRegisterNativesUNoesisXamlThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UNoesisXamlThumbnailRenderer_NoRegister()
	{
		return UNoesisXamlThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UNoesisXamlThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoesisXamlThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisXamlThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoesisXamlThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/NoesisXamlThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoesisXamlThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoesisXamlThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoesisXamlThumbnailRenderer_Statics::ClassParams = {
		&UNoesisXamlThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNoesisXamlThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisXamlThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoesisXamlThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoesisXamlThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoesisXamlThumbnailRenderer, 3117231958);
	template<> NOESISEDITOR_API UClass* StaticClass<UNoesisXamlThumbnailRenderer>()
	{
		return UNoesisXamlThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoesisXamlThumbnailRenderer(Z_Construct_UClass_UNoesisXamlThumbnailRenderer, &UNoesisXamlThumbnailRenderer::StaticClass, TEXT("/Script/NoesisEditor"), TEXT("UNoesisXamlThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoesisXamlThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
