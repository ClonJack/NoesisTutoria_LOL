// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOESISRUNTIME_NoesisBlueprint_generated_h
#error "NoesisBlueprint.generated.h already included, missing '#pragma once' in NoesisBlueprint.h"
#endif
#define NOESISRUNTIME_NoesisBlueprint_generated_h

#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_SPARSE_DATA
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_RPC_WRAPPERS
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoesisBlueprint(); \
	friend struct Z_Construct_UClass_UNoesisBlueprint_Statics; \
public: \
	DECLARE_CLASS(UNoesisBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoesisRuntime"), NO_API) \
	DECLARE_SERIALIZER(UNoesisBlueprint)


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUNoesisBlueprint(); \
	friend struct Z_Construct_UClass_UNoesisBlueprint_Statics; \
public: \
	DECLARE_CLASS(UNoesisBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoesisRuntime"), NO_API) \
	DECLARE_SERIALIZER(UNoesisBlueprint)


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoesisBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoesisBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoesisBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoesisBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoesisBlueprint(UNoesisBlueprint&&); \
	NO_API UNoesisBlueprint(const UNoesisBlueprint&); \
public:


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoesisBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoesisBlueprint(UNoesisBlueprint&&); \
	NO_API UNoesisBlueprint(const UNoesisBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoesisBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoesisBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoesisBlueprint)


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_PRIVATE_PROPERTY_OFFSET
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_25_PROLOG
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_SPARSE_DATA \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_RPC_WRAPPERS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_INCLASS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_PRIVATE_PROPERTY_OFFSET \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_SPARSE_DATA \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_INCLASS_NO_PURE_DECLS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NoesisBlueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOESISRUNTIME_API UClass* StaticClass<class UNoesisBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisBlueprint_h


#define FOREACH_ENUM_ENOESISTESSELLATIONQUALITY(op) \
	op(ENoesisTessellationQuality::Low) \
	op(ENoesisTessellationQuality::Medium) \
	op(ENoesisTessellationQuality::High) 

enum class ENoesisTessellationQuality : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisTessellationQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
