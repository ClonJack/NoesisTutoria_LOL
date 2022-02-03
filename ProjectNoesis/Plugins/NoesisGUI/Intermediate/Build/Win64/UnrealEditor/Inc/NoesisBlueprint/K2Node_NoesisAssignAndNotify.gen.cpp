// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisBlueprint/Classes/K2Node_NoesisAssignAndNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_NoesisAssignAndNotify() {}
// Cross Module References
	NOESISBLUEPRINT_API UClass* Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_NoRegister();
	NOESISBLUEPRINT_API UClass* Z_Construct_UClass_UK2Node_NoesisAssignAndNotify();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable();
	UPackage* Z_Construct_UPackage__Script_NoesisBlueprint();
// End Cross Module References
	void UK2Node_NoesisAssignAndNotify::StaticRegisterNativesUK2Node_NoesisAssignAndNotify()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_NoRegister()
	{
		return UK2Node_NoesisAssignAndNotify::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Variable,
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_NoesisAssignAndNotify.h" },
		{ "ModuleRelativePath", "Classes/K2Node_NoesisAssignAndNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_NoesisAssignAndNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_Statics::ClassParams = {
		&UK2Node_NoesisAssignAndNotify::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_NoesisAssignAndNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_NoesisAssignAndNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_NoesisAssignAndNotify, 1181733664);
	template<> NOESISBLUEPRINT_API UClass* StaticClass<UK2Node_NoesisAssignAndNotify>()
	{
		return UK2Node_NoesisAssignAndNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_NoesisAssignAndNotify(Z_Construct_UClass_UK2Node_NoesisAssignAndNotify, &UK2Node_NoesisAssignAndNotify::StaticClass, TEXT("/Script/NoesisBlueprint"), TEXT("UK2Node_NoesisAssignAndNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_NoesisAssignAndNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
