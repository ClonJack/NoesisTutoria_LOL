// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisRuntime/Classes/NoesisInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoesisInterface() {}
// Cross Module References
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisInterface_NoRegister();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NoesisRuntime();
// End Cross Module References
	void UNoesisInterface::StaticRegisterNativesUNoesisInterface()
	{
	}
	UClass* Z_Construct_UClass_UNoesisInterface_NoRegister()
	{
		return UNoesisInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNoesisInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoesisInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoesisInterface.h" },
		{ "ModuleRelativePath", "Classes/NoesisInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoesisInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoesisInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoesisInterface_Statics::ClassParams = {
		&UNoesisInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNoesisInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoesisInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoesisInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoesisInterface, 1189399922);
	template<> NOESISRUNTIME_API UClass* StaticClass<UNoesisInterface>()
	{
		return UNoesisInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoesisInterface(Z_Construct_UClass_UNoesisInterface, &UNoesisInterface::StaticClass, TEXT("/Script/NoesisRuntime"), TEXT("UNoesisInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoesisInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
