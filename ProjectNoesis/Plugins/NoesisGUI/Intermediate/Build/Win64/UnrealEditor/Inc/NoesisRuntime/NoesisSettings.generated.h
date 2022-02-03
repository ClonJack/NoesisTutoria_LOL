// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOESISRUNTIME_NoesisSettings_generated_h
#error "NoesisSettings.generated.h already included, missing '#pragma once' in NoesisSettings.h"
#endif
#define NOESISRUNTIME_NoesisSettings_generated_h

#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_SPARSE_DATA
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_RPC_WRAPPERS
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoesisSettings(); \
	friend struct Z_Construct_UClass_UNoesisSettings_Statics; \
public: \
	DECLARE_CLASS(UNoesisSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoesisRuntime"), NO_API) \
	DECLARE_SERIALIZER(UNoesisSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUNoesisSettings(); \
	friend struct Z_Construct_UClass_UNoesisSettings_Statics; \
public: \
	DECLARE_CLASS(UNoesisSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoesisRuntime"), NO_API) \
	DECLARE_SERIALIZER(UNoesisSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoesisSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoesisSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoesisSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoesisSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoesisSettings(UNoesisSettings&&); \
	NO_API UNoesisSettings(const UNoesisSettings&); \
public:


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoesisSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoesisSettings(UNoesisSettings&&); \
	NO_API UNoesisSettings(const UNoesisSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoesisSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoesisSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoesisSettings)


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_PRIVATE_PROPERTY_OFFSET
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_48_PROLOG
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_PRIVATE_PROPERTY_OFFSET \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_SPARSE_DATA \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_RPC_WRAPPERS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_INCLASS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_PRIVATE_PROPERTY_OFFSET \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_SPARSE_DATA \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_INCLASS_NO_PURE_DECLS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h_51_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NoesisSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOESISRUNTIME_API UClass* StaticClass<class UNoesisSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisSettings_h


#define FOREACH_ENUM_ENOESISLOGGINGSETTINGS(op) \
	op(ENoesisLoggingSettings::Off) \
	op(ENoesisLoggingSettings::Error) \
	op(ENoesisLoggingSettings::Warning) \
	op(ENoesisLoggingSettings::Information) \
	op(ENoesisLoggingSettings::Debug) 

enum class ENoesisLoggingSettings : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisLoggingSettings>();

#define FOREACH_ENUM_ENOESISGLYPHCACHEDIMENSIONS(op) \
	op(ENoesisGlyphCacheDimensions::x256) \
	op(ENoesisGlyphCacheDimensions::x512) \
	op(ENoesisGlyphCacheDimensions::x1024) \
	op(ENoesisGlyphCacheDimensions::x2048) \
	op(ENoesisGlyphCacheDimensions::x4096) 

enum class ENoesisGlyphCacheDimensions : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisGlyphCacheDimensions>();

#define FOREACH_ENUM_ENOESISOFFSCREENSAMPLECOUNT(op) \
	op(ENoesisOffscreenSampleCount::One) \
	op(ENoesisOffscreenSampleCount::Two) \
	op(ENoesisOffscreenSampleCount::Four) 

enum class ENoesisOffscreenSampleCount : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisOffscreenSampleCount>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
