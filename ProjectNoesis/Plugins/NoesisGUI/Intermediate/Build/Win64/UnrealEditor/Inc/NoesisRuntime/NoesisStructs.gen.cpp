// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisRuntime/Classes/NoesisStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoesisStructs() {}
// Cross Module References
	NOESISRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNoesisKeyTime();
	UPackage* Z_Construct_UPackage__Script_NoesisRuntime();
	NOESISRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNoesisDuration();
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisDurationType();
	NOESISRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNoesisThickness();
	NOESISRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNoesisCornerRadius();
	NOESISRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNoesisSize();
// End Cross Module References
class UScriptStruct* FNoesisKeyTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NOESISRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FNoesisKeyTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoesisKeyTime, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("NoesisKeyTime"), sizeof(FNoesisKeyTime), Get_Z_Construct_UScriptStruct_FNoesisKeyTime_Hash());
	}
	return Singleton;
}
template<> NOESISRUNTIME_API UScriptStruct* StaticStruct<FNoesisKeyTime>()
{
	return FNoesisKeyTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNoesisKeyTime(FNoesisKeyTime::StaticStruct, TEXT("/Script/NoesisRuntime"), TEXT("NoesisKeyTime"), false, nullptr, nullptr);
static struct FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisKeyTime
{
	FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisKeyTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NoesisKeyTime")),new UScriptStruct::TCppStructOps<FNoesisKeyTime>);
	}
} ScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisKeyTime;
	struct Z_Construct_UScriptStruct_FNoesisKeyTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextForm_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextForm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoesisKeyTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::NewProp_TextForm_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::NewProp_TextForm = { "TextForm", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisKeyTime, TextForm), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::NewProp_TextForm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::NewProp_TextForm_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::NewProp_TextForm,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
		nullptr,
		&NewStructOps,
		"NoesisKeyTime",
		sizeof(FNoesisKeyTime),
		alignof(FNoesisKeyTime),
		Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoesisKeyTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNoesisKeyTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NoesisKeyTime"), sizeof(FNoesisKeyTime), Get_Z_Construct_UScriptStruct_FNoesisKeyTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNoesisKeyTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNoesisKeyTime_Hash() { return 1850273157U; }
class UScriptStruct* FNoesisDuration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NOESISRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FNoesisDuration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoesisDuration, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("NoesisDuration"), sizeof(FNoesisDuration), Get_Z_Construct_UScriptStruct_FNoesisDuration_Hash());
	}
	return Singleton;
}
template<> NOESISRUNTIME_API UScriptStruct* StaticStruct<FNoesisDuration>()
{
	return FNoesisDuration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNoesisDuration(FNoesisDuration::StaticStruct, TEXT("/Script/NoesisRuntime"), TEXT("NoesisDuration"), false, nullptr, nullptr);
static struct FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisDuration
{
	FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisDuration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NoesisDuration")),new UScriptStruct::TCppStructOps<FNoesisDuration>);
	}
} ScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisDuration;
	struct Z_Construct_UScriptStruct_FNoesisDuration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DurationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Milliseconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisDuration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoesisDuration>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_DurationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_DurationType_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_DurationType = { "DurationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisDuration, DurationType), Z_Construct_UEnum_NoesisRuntime_ENoesisDurationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_DurationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_DurationType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_Milliseconds_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisDuration, Milliseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_Milliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_Milliseconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoesisDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_DurationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_DurationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisDuration_Statics::NewProp_Milliseconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoesisDuration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
		nullptr,
		&NewStructOps,
		"NoesisDuration",
		sizeof(FNoesisDuration),
		alignof(FNoesisDuration),
		Z_Construct_UScriptStruct_FNoesisDuration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisDuration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisDuration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisDuration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoesisDuration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNoesisDuration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NoesisDuration"), sizeof(FNoesisDuration), Get_Z_Construct_UScriptStruct_FNoesisDuration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNoesisDuration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNoesisDuration_Hash() { return 2584787935U; }
class UScriptStruct* FNoesisThickness::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NOESISRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FNoesisThickness_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoesisThickness, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("NoesisThickness"), sizeof(FNoesisThickness), Get_Z_Construct_UScriptStruct_FNoesisThickness_Hash());
	}
	return Singleton;
}
template<> NOESISRUNTIME_API UScriptStruct* StaticStruct<FNoesisThickness>()
{
	return FNoesisThickness::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNoesisThickness(FNoesisThickness::StaticStruct, TEXT("/Script/NoesisRuntime"), TEXT("NoesisThickness"), false, nullptr, nullptr);
static struct FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisThickness
{
	FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisThickness()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NoesisThickness")),new UScriptStruct::TCppStructOps<FNoesisThickness>);
	}
} ScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisThickness;
	struct Z_Construct_UScriptStruct_FNoesisThickness_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisThickness_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoesisThickness>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisThickness, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Top_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisThickness, Top), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisThickness, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Bottom_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisThickness, Bottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Bottom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoesisThickness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisThickness_Statics::NewProp_Bottom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoesisThickness_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
		nullptr,
		&NewStructOps,
		"NoesisThickness",
		sizeof(FNoesisThickness),
		alignof(FNoesisThickness),
		Z_Construct_UScriptStruct_FNoesisThickness_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisThickness_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisThickness_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisThickness_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoesisThickness()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNoesisThickness_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NoesisThickness"), sizeof(FNoesisThickness), Get_Z_Construct_UScriptStruct_FNoesisThickness_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNoesisThickness_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNoesisThickness_Hash() { return 1058692768U; }
class UScriptStruct* FNoesisCornerRadius::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NOESISRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FNoesisCornerRadius_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoesisCornerRadius, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("NoesisCornerRadius"), sizeof(FNoesisCornerRadius), Get_Z_Construct_UScriptStruct_FNoesisCornerRadius_Hash());
	}
	return Singleton;
}
template<> NOESISRUNTIME_API UScriptStruct* StaticStruct<FNoesisCornerRadius>()
{
	return FNoesisCornerRadius::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNoesisCornerRadius(FNoesisCornerRadius::StaticStruct, TEXT("/Script/NoesisRuntime"), TEXT("NoesisCornerRadius"), false, nullptr, nullptr);
static struct FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisCornerRadius
{
	FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisCornerRadius()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NoesisCornerRadius")),new UScriptStruct::TCppStructOps<FNoesisCornerRadius>);
	}
} ScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisCornerRadius;
	struct Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TopLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TopRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoesisCornerRadius>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopLeft_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopLeft = { "TopLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisCornerRadius, TopLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopRight_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopRight = { "TopRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisCornerRadius, TopRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomRight_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomRight = { "BottomRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisCornerRadius, BottomRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomLeft_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomLeft = { "BottomLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisCornerRadius, BottomLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomLeft_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_TopRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::NewProp_BottomLeft,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
		nullptr,
		&NewStructOps,
		"NoesisCornerRadius",
		sizeof(FNoesisCornerRadius),
		alignof(FNoesisCornerRadius),
		Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoesisCornerRadius()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNoesisCornerRadius_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NoesisCornerRadius"), sizeof(FNoesisCornerRadius), Get_Z_Construct_UScriptStruct_FNoesisCornerRadius_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNoesisCornerRadius_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNoesisCornerRadius_Hash() { return 3215850943U; }
class UScriptStruct* FNoesisSize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NOESISRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FNoesisSize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoesisSize, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("NoesisSize"), sizeof(FNoesisSize), Get_Z_Construct_UScriptStruct_FNoesisSize_Hash());
	}
	return Singleton;
}
template<> NOESISRUNTIME_API UScriptStruct* StaticStruct<FNoesisSize>()
{
	return FNoesisSize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNoesisSize(FNoesisSize::StaticStruct, TEXT("/Script/NoesisRuntime"), TEXT("NoesisSize"), false, nullptr, nullptr);
static struct FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisSize
{
	FScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisSize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NoesisSize")),new UScriptStruct::TCppStructOps<FNoesisSize>);
	}
} ScriptStruct_NoesisRuntime_StaticRegisterNativesFNoesisSize;
	struct Z_Construct_UScriptStruct_FNoesisSize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisSize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoesisSize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoesisSize>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisSize, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoesisSize, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoesisSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoesisSize_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoesisSize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
		nullptr,
		&NewStructOps,
		"NoesisSize",
		sizeof(FNoesisSize),
		alignof(FNoesisSize),
		Z_Construct_UScriptStruct_FNoesisSize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisSize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNoesisSize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoesisSize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoesisSize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNoesisSize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NoesisSize"), sizeof(FNoesisSize), Get_Z_Construct_UScriptStruct_FNoesisSize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNoesisSize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNoesisSize_Hash() { return 3060317127U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
