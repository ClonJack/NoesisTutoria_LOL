////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

// Core includes
#include "CoreMinimal.h"

// Noesis includes
#include "NoesisSDK.h"

NOESISRUNTIME_API void NoesisInitTypeTables();

NOESISRUNTIME_API Noesis::TypeClass* NoesisCreateTypeClassForUClass(class UClass*);
NOESISRUNTIME_API Noesis::TypeClass* NoesisCreateTypeClassForUStruct(class UScriptStruct*);
NOESISRUNTIME_API Noesis::TypeEnum* NoesisCreateTypeEnumForUEnum(class UEnum*);
#if WITH_EDITOR
NOESISRUNTIME_API void NoesisDestroyTypeClassForBlueprint(class UBlueprint*);
NOESISRUNTIME_API void NoesisDestroyTypeClassForStruct(class UUserDefinedStruct*);
NOESISRUNTIME_API void NoesisDestroyTypeClassForEnum(class UEnum*);
NOESISRUNTIME_API void NoesisDestroyTypeClassForMaterial(class UMaterialInterface*);
NOESISRUNTIME_API void NoesisAssetRenamed(UObject * Object, FString OldPath);
#endif
NOESISRUNTIME_API Noesis::Ptr<Noesis::BaseComponent> NoesisFindComponentForUObject(UObject* Object);
NOESISRUNTIME_API Noesis::Ptr<Noesis::BaseComponent> NoesisCreateComponentForUStruct(class UScriptStruct*, void*);
NOESISRUNTIME_API Noesis::Ptr<Noesis::BaseComponent> NoesisCreateComponentForUEnum(class UEnum*, int64);
NOESISRUNTIME_API Noesis::Ptr<Noesis::BaseComponent> NoesisCreateComponentForUObject(class UObject*);
NOESISRUNTIME_API class UObject* NoesisCreateUObjectForComponent(Noesis::BaseComponent*);
NOESISRUNTIME_API void NoesisCopyUStructFromComponent(class UScriptStruct*, Noesis::BaseComponent*, void*);

template<class StructType>
Noesis::Ptr<Noesis::BaseComponent> NoesisCreateComponentForUStruct(StructType* Struct)
{
	return NoesisCreateComponentForUStruct(StructType::StaticStruct(), Struct);
}

template<class StructType>
StructType NoesisGetUStructFromComponent(Noesis::BaseComponent* Component)
{
	StructType Result;
	NoesisCopyUStructFromComponent(StructType::StaticStruct(), Component, &Result);
	return Result;
}


NOESISRUNTIME_API void NoesisNotifyPropertyChanged(class UObject*, FName);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyChanged(class UObject*, FName);
NOESISRUNTIME_API void NoesisNotifyCanExecuteFunctionChanged(class UObject*, FName);
NOESISRUNTIME_API void NoesisNotifyCanExecuteFunctionChanged(class UObject*, class UFunction*);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPostAdd(void*);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPostChanged(void*);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPreAppend(void*);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPostAppend(void*);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPostInsert(void*, int32);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPreRemove(void*, int32);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPostRemove(void*, int32);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPostClear(void*);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPreSet(void*, int32);
NOESISRUNTIME_API void NoesisNotifyArrayPropertyPostSet(void*, int32);
NOESISRUNTIME_API void NoesisGarbageCollected();
NOESISRUNTIME_API void NoesisNotifyMapPropertyPostAdd(void*, const FString& Key);
NOESISRUNTIME_API void NoesisNotifyMapPropertyPostChanged(void*);
NOESISRUNTIME_API void NoesisNotifyMapPropertyPreRemove(void*, const FString& Key);
NOESISRUNTIME_API void NoesisNotifyMapPropertyPostRemove(void*, const FString& Key);
void NoesisReflectionRegistryCallback(Noesis::Symbol TypeId);
void NoesisRegisterTypes();
void NoesisCultureChanged();
