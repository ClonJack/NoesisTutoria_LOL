// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoesisRuntime/Classes/NoesisSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoesisSettings() {}
// Cross Module References
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisLoggingSettings();
	UPackage* Z_Construct_UPackage__Script_NoesisRuntime();
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisGlyphCacheDimensions();
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisOffscreenSampleCount();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisSettings_NoRegister();
	NOESISRUNTIME_API UClass* Z_Construct_UClass_UNoesisSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisFontWeight();
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisFontStretch();
	NOESISRUNTIME_API UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisFontStyle();
// End Cross Module References
	static UEnum* ENoesisLoggingSettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NoesisRuntime_ENoesisLoggingSettings, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("ENoesisLoggingSettings"));
		}
		return Singleton;
	}
	template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisLoggingSettings>()
	{
		return ENoesisLoggingSettings_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENoesisLoggingSettings(ENoesisLoggingSettings_StaticEnum, TEXT("/Script/NoesisRuntime"), TEXT("ENoesisLoggingSettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NoesisRuntime_ENoesisLoggingSettings_Hash() { return 4116183848U; }
	UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisLoggingSettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENoesisLoggingSettings"), 0, Get_Z_Construct_UEnum_NoesisRuntime_ENoesisLoggingSettings_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENoesisLoggingSettings::Off", (int64)ENoesisLoggingSettings::Off },
				{ "ENoesisLoggingSettings::Error", (int64)ENoesisLoggingSettings::Error },
				{ "ENoesisLoggingSettings::Warning", (int64)ENoesisLoggingSettings::Warning },
				{ "ENoesisLoggingSettings::Information", (int64)ENoesisLoggingSettings::Information },
				{ "ENoesisLoggingSettings::Debug", (int64)ENoesisLoggingSettings::Debug },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Debug.Name", "ENoesisLoggingSettings::Debug" },
				{ "Error.Name", "ENoesisLoggingSettings::Error" },
				{ "Information.Name", "ENoesisLoggingSettings::Information" },
				{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
				{ "Off.Name", "ENoesisLoggingSettings::Off" },
				{ "Warning.Name", "ENoesisLoggingSettings::Warning" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NoesisRuntime,
				nullptr,
				"ENoesisLoggingSettings",
				"ENoesisLoggingSettings",
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
	static UEnum* ENoesisGlyphCacheDimensions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NoesisRuntime_ENoesisGlyphCacheDimensions, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("ENoesisGlyphCacheDimensions"));
		}
		return Singleton;
	}
	template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisGlyphCacheDimensions>()
	{
		return ENoesisGlyphCacheDimensions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENoesisGlyphCacheDimensions(ENoesisGlyphCacheDimensions_StaticEnum, TEXT("/Script/NoesisRuntime"), TEXT("ENoesisGlyphCacheDimensions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NoesisRuntime_ENoesisGlyphCacheDimensions_Hash() { return 243568925U; }
	UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisGlyphCacheDimensions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENoesisGlyphCacheDimensions"), 0, Get_Z_Construct_UEnum_NoesisRuntime_ENoesisGlyphCacheDimensions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENoesisGlyphCacheDimensions::x256", (int64)ENoesisGlyphCacheDimensions::x256 },
				{ "ENoesisGlyphCacheDimensions::x512", (int64)ENoesisGlyphCacheDimensions::x512 },
				{ "ENoesisGlyphCacheDimensions::x1024", (int64)ENoesisGlyphCacheDimensions::x1024 },
				{ "ENoesisGlyphCacheDimensions::x2048", (int64)ENoesisGlyphCacheDimensions::x2048 },
				{ "ENoesisGlyphCacheDimensions::x4096", (int64)ENoesisGlyphCacheDimensions::x4096 },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
				{ "x1024.DisplayName", "1024x1024" },
				{ "x1024.Name", "ENoesisGlyphCacheDimensions::x1024" },
				{ "x2048.DisplayName", "2048x2048" },
				{ "x2048.Name", "ENoesisGlyphCacheDimensions::x2048" },
				{ "x256.DisplayName", "256x256" },
				{ "x256.Name", "ENoesisGlyphCacheDimensions::x256" },
				{ "x4096.DisplayName", "4096x4096" },
				{ "x4096.Name", "ENoesisGlyphCacheDimensions::x4096" },
				{ "x512.DisplayName", "512x512" },
				{ "x512.Name", "ENoesisGlyphCacheDimensions::x512" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NoesisRuntime,
				nullptr,
				"ENoesisGlyphCacheDimensions",
				"ENoesisGlyphCacheDimensions",
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
	static UEnum* ENoesisOffscreenSampleCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NoesisRuntime_ENoesisOffscreenSampleCount, Z_Construct_UPackage__Script_NoesisRuntime(), TEXT("ENoesisOffscreenSampleCount"));
		}
		return Singleton;
	}
	template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisOffscreenSampleCount>()
	{
		return ENoesisOffscreenSampleCount_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENoesisOffscreenSampleCount(ENoesisOffscreenSampleCount_StaticEnum, TEXT("/Script/NoesisRuntime"), TEXT("ENoesisOffscreenSampleCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NoesisRuntime_ENoesisOffscreenSampleCount_Hash() { return 2070698810U; }
	UEnum* Z_Construct_UEnum_NoesisRuntime_ENoesisOffscreenSampleCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NoesisRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENoesisOffscreenSampleCount"), 0, Get_Z_Construct_UEnum_NoesisRuntime_ENoesisOffscreenSampleCount_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENoesisOffscreenSampleCount::One", (int64)ENoesisOffscreenSampleCount::One },
				{ "ENoesisOffscreenSampleCount::Two", (int64)ENoesisOffscreenSampleCount::Two },
				{ "ENoesisOffscreenSampleCount::Four", (int64)ENoesisOffscreenSampleCount::Four },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Four.DisplayName", "4x" },
				{ "Four.Name", "ENoesisOffscreenSampleCount::Four" },
				{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
				{ "One.DisplayName", "1x" },
				{ "One.Name", "ENoesisOffscreenSampleCount::One" },
				{ "Two.DisplayName", "2x" },
				{ "Two.Name", "ENoesisOffscreenSampleCount::Two" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NoesisRuntime,
				nullptr,
				"ENoesisOffscreenSampleCount",
				"ENoesisOffscreenSampleCount",
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
	void UNoesisSettings::StaticRegisterNativesUNoesisSettings()
	{
	}
	UClass* Z_Construct_UClass_UNoesisSettings_NoRegister()
	{
		return UNoesisSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNoesisSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LicenseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LicenseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LicenseKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LicenseKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationResources_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationResources;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFonts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFonts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultFonts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadPlatformFonts_MetaData[];
#endif
		static void NewProp_LoadPlatformFonts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadPlatformFonts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFontSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFontSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFontWeight_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFontWeight_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultFontWeight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFontStretch_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFontStretch_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultFontStretch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFontStyle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFontStyle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultFontStyle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GlyphTextureSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlyphTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GlyphTextureSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OffscreenTextureSampleCount_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffscreenTextureSampleCount_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OffscreenTextureSampleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffscreenInitSurfaces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffscreenInitSurfaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffscreenMaxSurfaces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffscreenMaxSurfaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffscreenTextureWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffscreenTextureWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffscreenTextureHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffscreenTextureHeight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GeneralLogLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneralLogLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GeneralLogLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BindingLogLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingLogLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingLogLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PremultiplyAlpha_MetaData[];
#endif
		static void NewProp_PremultiplyAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PremultiplyAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoesisSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NoesisRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoesisSettings.h" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseName_MetaData[] = {
		{ "Category", "License" },
		{ "Comment", "/** Fill with the Name value your were given when purchasing your Noesis license or get a trial from https://www.noesisengine.com/trial */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Fill with the Name value your were given when purchasing your Noesis license or get a trial from https://www.noesisengine.com/trial" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseName = { "LicenseName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, LicenseName), METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseKey_MetaData[] = {
		{ "Category", "License" },
		{ "Comment", "/** Fill with the Key value your were given when purchasing your Noesis license or get a trial from https://www.noesisengine.com/trial */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Fill with the Key value your were given when purchasing your Noesis license or get a trial from https://www.noesisengine.com/trial" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseKey = { "LicenseKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, LicenseKey), METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_ApplicationResources_MetaData[] = {
		{ "AllowedClasses", "NoesisXaml" },
		{ "Category", "XAML" },
		{ "Comment", "/** Sets a collection of application-scope resources, such as styles and brushes. Provides a simple way to support a consistent theme across your application */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Sets a collection of application-scope resources, such as styles and brushes. Provides a simple way to support a consistent theme across your application" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_ApplicationResources = { "ApplicationResources", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, ApplicationResources), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_ApplicationResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_ApplicationResources_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFonts_Inner = { "DefaultFonts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFonts_MetaData[] = {
		{ "AllowedClasses", "FontFace" },
		{ "Category", "XAML" },
		{ "Comment", "/** Default value for FontFamily when it is not specified in a control or text element */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Default value for FontFamily when it is not specified in a control or text element" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFonts = { "DefaultFonts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, DefaultFonts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFonts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFonts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LoadPlatformFonts_MetaData[] = {
		{ "Category", "XAML" },
		{ "Comment", "/** Loads platform specific font fallbacks to be able to render a wide range of unicode characters like chinese, korean, japanese or emojis */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Loads platform specific font fallbacks to be able to render a wide range of unicode characters like chinese, korean, japanese or emojis" },
	};
#endif
	void Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LoadPlatformFonts_SetBit(void* Obj)
	{
		((UNoesisSettings*)Obj)->LoadPlatformFonts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LoadPlatformFonts = { "LoadPlatformFonts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNoesisSettings), &Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LoadPlatformFonts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LoadPlatformFonts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LoadPlatformFonts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontSize_MetaData[] = {
		{ "Category", "XAML" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default value for FontSize when it is not specified in a control or text element */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Default value for FontSize when it is not specified in a control or text element" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontSize = { "DefaultFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, DefaultFontSize), METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontWeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontWeight_MetaData[] = {
		{ "Category", "XAML" },
		{ "Comment", "/** Default value for FontWeight when it is not specified in a control or text element */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Default value for FontWeight when it is not specified in a control or text element" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontWeight = { "DefaultFontWeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, DefaultFontWeight), Z_Construct_UEnum_NoesisRuntime_ENoesisFontWeight, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontWeight_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStretch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStretch_MetaData[] = {
		{ "Category", "XAML" },
		{ "Comment", "/** Default value for FontStretch when it is not specified in a control or text element */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Default value for FontStretch when it is not specified in a control or text element" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStretch = { "DefaultFontStretch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, DefaultFontStretch), Z_Construct_UEnum_NoesisRuntime_ENoesisFontStretch, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStretch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStyle_MetaData[] = {
		{ "Category", "XAML" },
		{ "Comment", "/** Default value for FontStyle when it is not specified in a control or text element */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Default value for FontStyle when it is not specified in a control or text element" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStyle = { "DefaultFontStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, DefaultFontStyle), Z_Construct_UEnum_NoesisRuntime_ENoesisFontStyle, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStyle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GlyphTextureSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GlyphTextureSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Dimensions of texture used to cache glyphs */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Dimensions of texture used to cache glyphs" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GlyphTextureSize = { "GlyphTextureSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, GlyphTextureSize), Z_Construct_UEnum_NoesisRuntime_ENoesisGlyphCacheDimensions, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GlyphTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GlyphTextureSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureSampleCount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureSampleCount_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Multisampling of offscreen textures */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Offscreen Sample Count" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Multisampling of offscreen textures" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureSampleCount = { "OffscreenTextureSampleCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, OffscreenTextureSampleCount), Z_Construct_UEnum_NoesisRuntime_ENoesisOffscreenSampleCount, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureSampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureSampleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenInitSurfaces_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of offscreen textures created at startup */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Number of offscreen textures created at startup" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenInitSurfaces = { "OffscreenInitSurfaces", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, OffscreenInitSurfaces), METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenInitSurfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenInitSurfaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenMaxSurfaces_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum number of offscreen textures (0 = unlimited) */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Maximum number of offscreen textures (0 = unlimited)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenMaxSurfaces = { "OffscreenMaxSurfaces", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, OffscreenMaxSurfaces), METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenMaxSurfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenMaxSurfaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureWidth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Width of offscreen textures (0 = automatic) */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Width of offscreen textures (0 = automatic)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureWidth = { "OffscreenTextureWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, OffscreenTextureWidth), METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureHeight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Height of offscreen textures (0 = automatic) */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Height of offscreen textures (0 = automatic)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureHeight = { "OffscreenTextureHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, OffscreenTextureHeight), METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureHeight_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GeneralLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GeneralLogLevel_MetaData[] = {
		{ "Category", "Editor Settings" },
		{ "Comment", "/** Sets the logging level for general messages */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Sets the logging level for general messages" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GeneralLogLevel = { "GeneralLogLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, GeneralLogLevel), Z_Construct_UEnum_NoesisRuntime_ENoesisLoggingSettings, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GeneralLogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GeneralLogLevel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_BindingLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_BindingLogLevel_MetaData[] = {
		{ "Category", "Editor Settings" },
		{ "Comment", "/** Sets the logging level for data binding */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Sets the logging level for data binding" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_BindingLogLevel = { "BindingLogLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoesisSettings, BindingLogLevel), Z_Construct_UEnum_NoesisRuntime_ENoesisLoggingSettings, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_BindingLogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_BindingLogLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoesisSettings_Statics::NewProp_PremultiplyAlpha_MetaData[] = {
		{ "Category", "Editor Settings" },
		{ "Comment", "/** Premultiplies the color channels of UI textures with the value of the alpha channel */" },
		{ "ModuleRelativePath", "Classes/NoesisSettings.h" },
		{ "ToolTip", "Premultiplies the color channels of UI textures with the value of the alpha channel" },
	};
#endif
	void Z_Construct_UClass_UNoesisSettings_Statics::NewProp_PremultiplyAlpha_SetBit(void* Obj)
	{
		((UNoesisSettings*)Obj)->PremultiplyAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNoesisSettings_Statics::NewProp_PremultiplyAlpha = { "PremultiplyAlpha", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNoesisSettings), &Z_Construct_UClass_UNoesisSettings_Statics::NewProp_PremultiplyAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_PremultiplyAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::NewProp_PremultiplyAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoesisSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LicenseKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_ApplicationResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFonts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFonts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_LoadPlatformFonts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontWeight_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStretch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_DefaultFontStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GlyphTextureSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GlyphTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureSampleCount_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureSampleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenInitSurfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenMaxSurfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_OffscreenTextureHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GeneralLogLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_GeneralLogLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_BindingLogLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_BindingLogLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoesisSettings_Statics::NewProp_PremultiplyAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoesisSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoesisSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoesisSettings_Statics::ClassParams = {
		&UNoesisSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNoesisSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNoesisSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoesisSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoesisSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoesisSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoesisSettings, 3335151553);
	template<> NOESISRUNTIME_API UClass* StaticClass<UNoesisSettings>()
	{
		return UNoesisSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoesisSettings(Z_Construct_UClass_UNoesisSettings, &UNoesisSettings::StaticClass, TEXT("/Script/NoesisRuntime"), TEXT("UNoesisSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoesisSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
