// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNoesisXaml;
class UObject;
 
struct FGenericStruct;
#ifdef NOESISRUNTIME_NoesisFunctionLibrary_generated_h
#error "NoesisFunctionLibrary.generated.h already included, missing '#pragma once' in NoesisFunctionLibrary.h"
#endif
#define NOESISRUNTIME_NoesisFunctionLibrary_generated_h

#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_SPARSE_DATA
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadXaml); \
	DECLARE_FUNCTION(execTrySetDataContext); \
	DECLARE_FUNCTION(execNotifyCanExecuteFunctionChanged); \
	DECLARE_FUNCTION(execNotifyArrayChanged); \
	DECLARE_FUNCTION(execNotifyChanged);


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadXaml); \
	DECLARE_FUNCTION(execTrySetDataContext); \
	DECLARE_FUNCTION(execNotifyCanExecuteFunctionChanged); \
	DECLARE_FUNCTION(execNotifyArrayChanged); \
	DECLARE_FUNCTION(execNotifyChanged);


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoesisFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNoesisFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNoesisFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoesisRuntime"), NO_API) \
	DECLARE_SERIALIZER(UNoesisFunctionLibrary)


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUNoesisFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNoesisFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNoesisFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoesisRuntime"), NO_API) \
	DECLARE_SERIALIZER(UNoesisFunctionLibrary)


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoesisFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoesisFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoesisFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoesisFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoesisFunctionLibrary(UNoesisFunctionLibrary&&); \
	NO_API UNoesisFunctionLibrary(const UNoesisFunctionLibrary&); \
public:


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoesisFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoesisFunctionLibrary(UNoesisFunctionLibrary&&); \
	NO_API UNoesisFunctionLibrary(const UNoesisFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoesisFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoesisFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoesisFunctionLibrary)


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_PRIVATE_PROPERTY_OFFSET
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_21_PROLOG
#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_SPARSE_DATA \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_RPC_WRAPPERS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_INCLASS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_SPARSE_DATA \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NoesisFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOESISRUNTIME_API UClass* StaticClass<class UNoesisFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
