// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef DBTPLUGINTEST_DBTBehaviorTreeDataManager_generated_h
#error "DBTBehaviorTreeDataManager.generated.h already included, missing '#pragma once' in DBTBehaviorTreeDataManager.h"
#endif
#define DBTPLUGINTEST_DBTBehaviorTreeDataManager_generated_h

#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_SPARSE_DATA
#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearAllData); \
	DECLARE_FUNCTION(execIsAnyAIControllerDynamicBehaviorEnabled); \
	DECLARE_FUNCTION(execGetGlobalAdjustmentDelay); \
	DECLARE_FUNCTION(execSetGlobalAdjustmentDelay); \
	DECLARE_FUNCTION(execGetAIControllerTimeLimit); \
	DECLARE_FUNCTION(execSetAIControllerTimeLimit); \
	DECLARE_FUNCTION(execGetAIControllerDynamicBehaviorFlag); \
	DECLARE_FUNCTION(execSetAIControllerDynamicBehaviorFlag); \
	DECLARE_FUNCTION(execGetTaskNodeCategory); \
	DECLARE_FUNCTION(execGetTaskNodeIsDynamic); \
	DECLARE_FUNCTION(execSetTaskNodeDynamicData); \
	DECLARE_FUNCTION(execHasLimitChangeForNode); \
	DECLARE_FUNCTION(execGetLimitChangeForNode); \
	DECLARE_FUNCTION(execSetLimitChangeForNode);


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearAllData); \
	DECLARE_FUNCTION(execIsAnyAIControllerDynamicBehaviorEnabled); \
	DECLARE_FUNCTION(execGetGlobalAdjustmentDelay); \
	DECLARE_FUNCTION(execSetGlobalAdjustmentDelay); \
	DECLARE_FUNCTION(execGetAIControllerTimeLimit); \
	DECLARE_FUNCTION(execSetAIControllerTimeLimit); \
	DECLARE_FUNCTION(execGetAIControllerDynamicBehaviorFlag); \
	DECLARE_FUNCTION(execSetAIControllerDynamicBehaviorFlag); \
	DECLARE_FUNCTION(execGetTaskNodeCategory); \
	DECLARE_FUNCTION(execGetTaskNodeIsDynamic); \
	DECLARE_FUNCTION(execSetTaskNodeDynamicData); \
	DECLARE_FUNCTION(execHasLimitChangeForNode); \
	DECLARE_FUNCTION(execGetLimitChangeForNode); \
	DECLARE_FUNCTION(execSetLimitChangeForNode);


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBTBehaviorTreeDataManager(); \
	friend struct Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics; \
public: \
	DECLARE_CLASS(UDBTBehaviorTreeDataManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBTPluginTest"), NO_API) \
	DECLARE_SERIALIZER(UDBTBehaviorTreeDataManager)


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDBTBehaviorTreeDataManager(); \
	friend struct Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics; \
public: \
	DECLARE_CLASS(UDBTBehaviorTreeDataManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBTPluginTest"), NO_API) \
	DECLARE_SERIALIZER(UDBTBehaviorTreeDataManager)


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBTBehaviorTreeDataManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBTBehaviorTreeDataManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBTBehaviorTreeDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBTBehaviorTreeDataManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBTBehaviorTreeDataManager(UDBTBehaviorTreeDataManager&&); \
	NO_API UDBTBehaviorTreeDataManager(const UDBTBehaviorTreeDataManager&); \
public:


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBTBehaviorTreeDataManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBTBehaviorTreeDataManager(UDBTBehaviorTreeDataManager&&); \
	NO_API UDBTBehaviorTreeDataManager(const UDBTBehaviorTreeDataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBTBehaviorTreeDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBTBehaviorTreeDataManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBTBehaviorTreeDataManager)


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NodeDataMap() { return STRUCT_OFFSET(UDBTBehaviorTreeDataManager, NodeDataMap); } \
	FORCEINLINE static uint32 __PPO__TaskNodeDynamicFlagsMap() { return STRUCT_OFFSET(UDBTBehaviorTreeDataManager, TaskNodeDynamicFlagsMap); } \
	FORCEINLINE static uint32 __PPO__TaskNodeCategoriesMap() { return STRUCT_OFFSET(UDBTBehaviorTreeDataManager, TaskNodeCategoriesMap); } \
	FORCEINLINE static uint32 __PPO__AIControllerDynamicBehaviorFlags() { return STRUCT_OFFSET(UDBTBehaviorTreeDataManager, AIControllerDynamicBehaviorFlags); } \
	FORCEINLINE static uint32 __PPO__AIControllerTimeLimits() { return STRUCT_OFFSET(UDBTBehaviorTreeDataManager, AIControllerTimeLimits); } \
	FORCEINLINE static uint32 __PPO__GlobalAdjustmentDelay() { return STRUCT_OFFSET(UDBTBehaviorTreeDataManager, GlobalAdjustmentDelay); }


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_9_PROLOG
#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_PRIVATE_PROPERTY_OFFSET \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_SPARSE_DATA \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_RPC_WRAPPERS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_INCLASS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_PRIVATE_PROPERTY_OFFSET \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_SPARSE_DATA \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_INCLASS_NO_PURE_DECLS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBTPLUGINTEST_API UClass* StaticClass<class UDBTBehaviorTreeDataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTBehaviorTreeDataManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
