// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisRuntime/Classes/NoesisBaseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoesisBaseComponent() {}
// Cross Module References
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisBaseComponent_NoRegister();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisBaseComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NoesisRuntime();
// End Cross Module References
	void UNoesisBaseComponent::StaticRegisterNativesUNoesisBaseComponent()
	{
	}
	UClass* Z_Construct_UClass_UNoesisBaseComponent_NoRegister()
	{
		return UNoesisBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNoesisBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoesisBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NoesisBaseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NoesisBaseComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoesisBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoesisBaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoesisBaseComponent_Statics::ClassParams = {
		&UNoesisBaseComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNoesisBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoesisBaseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoesisBaseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoesisBaseComponent, 3617827455);
	template<> NOESISRUNTIME_API UClass* StaticClass<UNoesisBaseComponent>()
	{
		return UNoesisBaseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoesisBaseComponent(Z_Construct_UClass_UNoesisBaseComponent, &UNoesisBaseComponent::StaticClass, TEXT("/Script/NoesisRuntime"), TEXT("UNoesisBaseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoesisBaseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
