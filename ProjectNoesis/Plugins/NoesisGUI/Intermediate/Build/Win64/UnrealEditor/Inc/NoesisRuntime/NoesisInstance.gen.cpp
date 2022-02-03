// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisRuntime/Classes/NoesisInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoesisInstance() {}
// Cross Module References
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_NoesisInstanceRenderFlags();
	UPackage* Z_Construct_UPackage__Script_NoesisRuntime();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisInstance_NoRegister();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisInstance();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisXaml_NoRegister();
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisTessellationQuality();
// End Cross Module References
	static UEnum* NoesisInstanceRenderFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NoesisRuntime_NoesisInstanceRenderFlags, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("NoesisInstanceRenderFlags"));
		}
		return Singleton;
	}
	template<> NOESISRUNTIME_API UEnum* StaticEnum<NoesisInstanceRenderFlags>()
	{
		return NoesisInstanceRenderFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_NoesisInstanceRenderFlags(NoesisInstanceRenderFlags_StaticEnum, TEXT("/Script/NoesisRuntime"), TEXT("NoesisInstanceRenderFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NoesisRuntime_NoesisInstanceRenderFlags_Hash() { return 4176834473U; }
	UEnum* Z_Construct_UEnum_NoesisRuntime_NoesisInstanceRenderFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("NoesisInstanceRenderFlags"), 0, Get_Z_Construct_UEnum_NoesisRuntime_NoesisInstanceRenderFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NoesisInstanceRenderFlags::Normal", (int64)NoesisInstanceRenderFlags::Normal },
				{ "NoesisInstanceRenderFlags::Wireframe", (int64)NoesisInstanceRenderFlags::Wireframe },
				{ "NoesisInstanceRenderFlags::ColorBatches", (int64)NoesisInstanceRenderFlags::ColorBatches },
				{ "NoesisInstanceRenderFlags::Overdraw", (int64)NoesisInstanceRenderFlags::Overdraw },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ColorBatches.Name", "NoesisInstanceRenderFlags::ColorBatches" },
				{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
				{ "Normal.Name", "NoesisInstanceRenderFlags::Normal" },
				{ "Overdraw.Name", "NoesisInstanceRenderFlags::Overdraw" },
				{ "Wireframe.Name", "NoesisInstanceRenderFlags::Wireframe" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NoesisRuntime,
				nullptr,
				"NoesisInstanceRenderFlags",
				"NoesisInstanceRenderFlags",
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
	DEFINE_FUNCTION(UNoesisInstance::execExecuteConsoleCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteConsoleCommand(Z_Param_Command,Z_Param_SpecificPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNoesisInstance::execGetTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNoesisInstance::execFindResource)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->FindResource(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNoesisInstance::execFindName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->FindName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNoesisInstance::execSetDataContext)
	{
		P_GET_OBJECT(UObject,Z_Param_DataContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataContext(Z_Param_DataContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNoesisInstance::execInitInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitInstance();
		P_NATIVE_END;
	}
	static FName NAME_UNoesisInstance_EventInitInstance = FName(TEXT("EventInitInstance"));
	void UNoesisInstance::EventInitInstance()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNoesisInstance_EventInitInstance),NULL);
	}
	static FName NAME_UNoesisInstance_XamlLoaded = FName(TEXT("XamlLoaded"));
	void UNoesisInstance::XamlLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNoesisInstance_XamlLoaded),NULL);
	}
	void UNoesisInstance::StaticRegisterNativesUNoesisInstance()
	{
		UClass* Class = UNoesisInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteConsoleCommand", &UNoesisInstance::execExecuteConsoleCommand },
			{ "FindName", &UNoesisInstance::execFindName },
			{ "FindResource", &UNoesisInstance::execFindResource },
			{ "GetTimeSeconds", &UNoesisInstance::execGetTimeSeconds },
			{ "InitInstance", &UNoesisInstance::execInitInstance },
			{ "SetDataContext", &UNoesisInstance::execSetDataContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNoesisInstance_EventInitInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoesisInstance_EventInitInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "NoesisGUI" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use XamlLoaded instead." },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoesisInstance_EventInitInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoesisInstance, nullptr, "EventInitInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoesisInstance_EventInitInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_EventInitInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoesisInstance_EventInitInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoesisInstance_EventInitInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics
	{
		struct NoesisInstance_eventExecuteConsoleCommand_Parms
		{
			FString Command;
			APlayerController* SpecificPlayer;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecificPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoesisInstance_eventExecuteConsoleCommand_Parms, Command), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::NewProp_SpecificPlayer = { "SpecificPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoesisInstance_eventExecuteConsoleCommand_Parms, SpecificPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::NewProp_SpecificPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoesisInstance, nullptr, "ExecuteConsoleCommand", nullptr, nullptr, sizeof(NoesisInstance_eventExecuteConsoleCommand_Parms), Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNoesisInstance_FindName_Statics
	{
		struct NoesisInstance_eventFindName_Parms
		{
			FString Name;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNoesisInstance_FindName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoesisInstance_eventFindName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNoesisInstance_FindName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoesisInstance_eventFindName_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoesisInstance_FindName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoesisInstance_FindName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoesisInstance_FindName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoesisInstance_FindName_Statics::Function_MetaDataParams[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoesisInstance_FindName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoesisInstance, nullptr, "FindName", nullptr, nullptr, sizeof(NoesisInstance_eventFindName_Parms), Z_Construct_UFunction_UNoesisInstance_FindName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_FindName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoesisInstance_FindName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_FindName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoesisInstance_FindName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoesisInstance_FindName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNoesisInstance_FindResource_Statics
	{
		struct NoesisInstance_eventFindResource_Parms
		{
			FString Name;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoesisInstance_eventFindResource_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoesisInstance_eventFindResource_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoesisInstance, nullptr, "FindResource", nullptr, nullptr, sizeof(NoesisInstance_eventFindResource_Parms), Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoesisInstance_FindResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoesisInstance_FindResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics
	{
		struct NoesisInstance_eventGetTimeSeconds_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoesisInstance_eventGetTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoesisInstance, nullptr, "GetTimeSeconds", nullptr, nullptr, sizeof(NoesisInstance_eventGetTimeSeconds_Parms), Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNoesisInstance_InitInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoesisInstance_InitInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoesisInstance_InitInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoesisInstance, nullptr, "InitInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoesisInstance_InitInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_InitInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoesisInstance_InitInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoesisInstance_InitInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics
	{
		struct NoesisInstance_eventSetDataContext_Parms
		{
			UObject* DataContext;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::NewProp_DataContext = { "DataContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoesisInstance_eventSetDataContext_Parms, DataContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::NewProp_DataContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoesisInstance, nullptr, "SetDataContext", nullptr, nullptr, sizeof(NoesisInstance_eventSetDataContext_Parms), Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoesisInstance_SetDataContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoesisInstance_SetDataContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNoesisInstance_XamlLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoesisInstance_XamlLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoesisInstance_XamlLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoesisInstance, nullptr, "XamlLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoesisInstance_XamlLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoesisInstance_XamlLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoesisInstance_XamlLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoesisInstance_XamlLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNoesisInstance_NoRegister()
	{
		return UNoesisInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNoesisInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoesisInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNoesisInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNoesisInstance_EventInitInstance, "EventInitInstance" }, // 3194194545
		{ &Z_Construct_UFunction_UNoesisInstance_ExecuteConsoleCommand, "ExecuteConsoleCommand" }, // 127753663
		{ &Z_Construct_UFunction_UNoesisInstance_FindName, "FindName" }, // 3374778514
		{ &Z_Construct_UFunction_UNoesisInstance_FindResource, "FindResource" }, // 772377749
		{ &Z_Construct_UFunction_UNoesisInstance_GetTimeSeconds, "GetTimeSeconds" }, // 1916311562
		{ &Z_Construct_UFunction_UNoesisInstance_InitInstance, "InitInstance" }, // 3388659039
		{ &Z_Construct_UFunction_UNoesisInstance_SetDataContext, "SetDataContext" }, // 3837470552
		{ &Z_Construct_UFunction_UNoesisInstance_XamlLoaded, "XamlLoaded" }, // 4123907186
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NoesisInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisInstance_Statics::NewProp_BaseXaml_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNoesisInstance_Statics::NewProp_BaseXaml = { "BaseXaml", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisInstance, BaseXaml), Z_Construct_UClass_UNoesisXaml_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNoesisInstance_Statics::NewProp_BaseXaml_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisInstance_Statics::NewProp_BaseXaml_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisInstance_Statics::NewProp_EnablePPAA_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	void Z_Construct_UClass_UNoesisInstance_Statics::NewProp_EnablePPAA_SetBit(void* Obj)
	{
		((UNoesisInstance*)Obj)->EnablePPAA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNoesisInstance_Statics::NewProp_EnablePPAA = { "EnablePPAA", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNoesisInstance), &Z_Construct_UClass_UNoesisInstance_Statics::NewProp_EnablePPAA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNoesisInstance_Statics::NewProp_EnablePPAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisInstance_Statics::NewProp_EnablePPAA_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisInstance_Statics::NewProp_TessellationQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisInstance_Statics::NewProp_TessellationQuality_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisInstance_Statics::NewProp_TessellationQuality = { "TessellationQuality", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisInstance, TessellationQuality), Z_Construct_UEnum_NoesisRuntime_ENoesisTessellationQuality, METADATA_PARAMS(Z_Construct_UClass_UNoesisInstance_Statics::NewProp_TessellationQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisInstance_Statics::NewProp_TessellationQuality_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisInstance_Statics::NewProp_RenderFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisInstance_Statics::NewProp_RenderFlags_MetaData[] = {
		{ "Category", "NoesisGUI" },
		{ "ModuleRelativePath", "Classes/NoesisInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisInstance_Statics::NewProp_RenderFlags = { "RenderFlags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisInstance, RenderFlags), Z_Construct_UEnum_NoesisRuntime_NoesisInstanceRenderFlags, METADATA_PARAMS(Z_Construct_UClass_UNoesisInstance_Statics::NewProp_RenderFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisInstance_Statics::NewProp_RenderFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoesisInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisInstance_Statics::NewProp_BaseXaml,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisInstance_Statics::NewProp_EnablePPAA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisInstance_Statics::NewProp_TessellationQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisInstance_Statics::NewProp_TessellationQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisInstance_Statics::NewProp_RenderFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisInstance_Statics::NewProp_RenderFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoesisInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoesisInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoesisInstance_Statics::ClassParams = {
		&UNoesisInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNoesisInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisInstance_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNoesisInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoesisInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoesisInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoesisInstance, 1827228934);
	template<> NOESISRUNTIME_API UClass* StaticClass<UNoesisInstance>()
	{
		return UNoesisInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoesisInstance(Z_Construct_UClass_UNoesisInstance, &UNoesisInstance::StaticClass, TEXT("/Script/NoesisRuntime"), TEXT("UNoesisInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoesisInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
