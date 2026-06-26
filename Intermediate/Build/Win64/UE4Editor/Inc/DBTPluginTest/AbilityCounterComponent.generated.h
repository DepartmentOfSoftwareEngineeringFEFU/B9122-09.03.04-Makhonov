// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UGameplayAbility;
#ifdef DBTPLUGINTEST_AbilityCounterComponent_generated_h
#error "AbilityCounterComponent.generated.h already included, missing '#pragma once' in AbilityCounterComponent.h"
#endif
#define DBTPLUGINTEST_AbilityCounterComponent_generated_h

#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_11_DELEGATE \
struct _Script_DBTPluginTest_eventOnAbilityUsedSignature_Parms \
{ \
	FString AbilityName; \
	int32 UsageCount; \
}; \
static inline void FOnAbilityUsedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityUsedSignature, const FString& AbilityName, int32 UsageCount) \
{ \
	_Script_DBTPluginTest_eventOnAbilityUsedSignature_Parms Parms; \
	Parms.AbilityName=AbilityName; \
	Parms.UsageCount=UsageCount; \
	OnAbilityUsedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_SPARSE_DATA
#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncrementAbilityCounter); \
	DECLARE_FUNCTION(execShowAbilityStats); \
	DECLARE_FUNCTION(execDisplayStatsOnScreen); \
	DECLARE_FUNCTION(execPrintStats); \
	DECLARE_FUNCTION(execResetAllCounters); \
	DECLARE_FUNCTION(execGetAllAbilityUsageStats); \
	DECLARE_FUNCTION(execGetAbilityUsageCountByName); \
	DECLARE_FUNCTION(execGetAbilityUsageCount);


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncrementAbilityCounter); \
	DECLARE_FUNCTION(execShowAbilityStats); \
	DECLARE_FUNCTION(execDisplayStatsOnScreen); \
	DECLARE_FUNCTION(execPrintStats); \
	DECLARE_FUNCTION(execResetAllCounters); \
	DECLARE_FUNCTION(execGetAllAbilityUsageStats); \
	DECLARE_FUNCTION(execGetAbilityUsageCountByName); \
	DECLARE_FUNCTION(execGetAbilityUsageCount);


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityCounterComponent(); \
	friend struct Z_Construct_UClass_UAbilityCounterComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilityCounterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBTPluginTest"), NO_API) \
	DECLARE_SERIALIZER(UAbilityCounterComponent)


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityCounterComponent(); \
	friend struct Z_Construct_UClass_UAbilityCounterComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilityCounterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBTPluginTest"), NO_API) \
	DECLARE_SERIALIZER(UAbilityCounterComponent)


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityCounterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityCounterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityCounterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityCounterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityCounterComponent(UAbilityCounterComponent&&); \
	NO_API UAbilityCounterComponent(const UAbilityCounterComponent&); \
public:


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityCounterComponent(UAbilityCounterComponent&&); \
	NO_API UAbilityCounterComponent(const UAbilityCounterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityCounterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityCounterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityCounterComponent)


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilityUsageMap() { return STRUCT_OFFSET(UAbilityCounterComponent, AbilityUsageMap); }


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_13_PROLOG
#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_SPARSE_DATA \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_RPC_WRAPPERS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_INCLASS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_SPARSE_DATA \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_INCLASS_NO_PURE_DECLS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBTPLUGINTEST_API UClass* StaticClass<class UAbilityCounterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_AbilityCounterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
