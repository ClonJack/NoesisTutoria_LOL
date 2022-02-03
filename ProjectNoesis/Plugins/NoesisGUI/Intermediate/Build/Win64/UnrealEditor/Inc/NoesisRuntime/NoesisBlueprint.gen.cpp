// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisRuntime/Classes/NoesisBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoesisBlueprint() {}
// Cross Module References
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisTessellationQuality();
	UPackage* Z_Construct_UPackage__Script_NoesisRuntime();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisBlueprint_NoRegister();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisXaml_NoRegister();
// End Cross Module References
	static UEnum* ENoesisTessellationQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NoesisRuntime_ENoesisTessellationQuality, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("ENoesisTessellationQuality"));
		}
		return Singleton;
	}
	template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisTessellationQuality>()
	{
		return ENoesisTessellationQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENoesisTessellationQuality(ENoesisTessellationQuality_StaticEnum, TEXT("/Script/NoesisRuntime"), TEXT("ENoesisTessellationQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NoesisRuntime_ENoesisTessellationQuality_Hash() { return 2329673921U; }
	UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisTessellationQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENoesisTessellationQuality"), 0, Get_Z_Construct_UEnum_NoesisRuntime_ENoesisTessellationQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENoesisTessellationQuality::Low", (int64)ENoesisTessellationQuality::Low },
				{ "ENoesisTessellationQuality::Medium", (int64)ENoesisTessellationQuality::Medium },
				{ "ENoesisTessellationQuality::High", (int64)ENoesisTessellationQuality::High },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "High.Name", "ENoesisTessellationQuality::High" },
				{ "Low.Name", "ENoesisTessellationQuality::Low" },
				{ "Medium.Name", "ENoesisTessellationQuality::Medium" },
				{ "ModuleRelativePath", "Classes/NoesisBlueprint.h" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NoesisRuntime,
				nullptr,
				"ENoesisTessellationQuality",
				"ENoesisTessellationQuality",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UNoesisBlueprint::StaticRegisterNativesUNoesisBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UNoesisBlueprint_NoRegister()
	{
		return UNoesisBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UNoesisBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseXaml_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseXaml;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnablePPAA_MetaData[];
#endif
		static void NewProp_EnablePPAA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePPAA;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TessellationQuality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationQuality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TessellationQuality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoesisBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoesisBlueprint.h" },
		{ "ModuleRelativePath", "Classes/NoesisBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_BaseXaml_MetaData[] = {
		{ "Category", "Noesis View" },
		{ "Comment", "/** Xaml file that defines the user interface. */" },
		{ "DisplayName", "XAML" },
		{ "ModuleRelativePath", "Classes/NoesisBlueprint.h" },
		{ "ToolTip", "Xaml file that defines the user interface." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_BaseXaml = { "BaseXaml", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisBlueprint, BaseXaml), Z_Construct_UClass_UNoesisXaml_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_BaseXaml_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_BaseXaml_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_EnablePPAA_MetaData[] = {
		{ "Category", "Noesis View" },
		{ "Comment", "/** Per-Primitive Antialiasing extrudes the contours of the geometry and smooths them. Useful when GPU MSAA is not enabled. */" },
		{ "ModuleRelativePath", "Classes/NoesisBlueprint.h" },
		{ "ToolTip", "Per-Primitive Antialiasing extrudes the contours of the geometry and smooths them. Useful when GPU MSAA is not enabled." },
	};
#endif
	void Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_EnablePPAA_SetBit(void* Obj)
	{
		((UNoesisBlueprint*)Obj)->EnablePPAA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_EnablePPAA = { "EnablePPAA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNoesisBlueprint), &Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_EnablePPAA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_EnablePPAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_EnablePPAA_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_TessellationQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_TessellationQuality_MetaData[] = {
		{ "Category", "Noesis View" },
		{ "Comment", "/** Specifies tessellation quality. */" },
		{ "ModuleRelativePath", "Classes/NoesisBlueprint.h" },
		{ "ToolTip", "Specifies tessellation quality." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_TessellationQuality = { "TessellationQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisBlueprint, TessellationQuality), Z_Construct_UEnum_NoesisRuntime_ENoesisTessellationQuality, METADATA_PARAMS(Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_TessellationQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_TessellationQuality_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoesisBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_BaseXaml,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_EnablePPAA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_TessellationQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisBlueprint_Statics::NewProp_TessellationQuality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoesisBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoesisBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoesisBlueprint_Statics::ClassParams = {
		&UNoesisBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNoesisBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNoesisBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoesisBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoesisBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoesisBlueprint, 2469821367);
	template<> NOESISRUNTIME_API UClass* StaticClass<UNoesisBlueprint>()
	{
		return UNoesisBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoesisBlueprint(Z_Construct_UClass_UNoesisBlueprint, &UNoesisBlueprint::StaticClass, TEXT("/Script/NoesisRuntime"), TEXT("UNoesisBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoesisBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
