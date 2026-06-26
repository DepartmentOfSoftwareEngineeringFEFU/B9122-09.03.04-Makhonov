// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBTPLUGINTEST_DBTAbilityBase_generated_h
#error "DBTAbilityBase.generated.h already included, missing '#pragma once' in DBTAbilityBase.h"
#endif
#define DBTPLUGINTEST_DBTAbilityBase_generated_h

#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_SPARSE_DATA
#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncrementUsageCount); \
	DECLARE_FUNCTION(execGetActionCategoryString);


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncrementUsageCount); \
	DECLARE_FUNCTION(execGetActionCategoryString);


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBTAbilityBase(); \
	friend struct Z_Construct_UClass_UDBTAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UDBTAbilityBase, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBTPluginTest"), NO_API) \
	DECLARE_SERIALIZER(UDBTAbilityBase)


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUDBTAbilityBase(); \
	friend struct Z_Construct_UClass_UDBTAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UDBTAbilityBase, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBTPluginTest"), NO_API) \
	DECLARE_SERIALIZER(UDBTAbilityBase)


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBTAbilityBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBTAbilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBTAbilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBTAbilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBTAbilityBase(UDBTAbilityBase&&); \
	NO_API UDBTAbilityBase(const UDBTAbilityBase&); \
public:


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBTAbilityBase(UDBTAbilityBase&&); \
	NO_API UDBTAbilityBase(const UDBTAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBTAbilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBTAbilityBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDBTAbilityBase)


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UsageCount() { return STRUCT_OFFSET(UDBTAbilityBase, UsageCount); }


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_30_PROLOG
#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_PRIVATE_PROPERTY_OFFSET \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_SPARSE_DATA \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_RPC_WRAPPERS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_INCLASS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_PRIVATE_PROPERTY_OFFSET \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_SPARSE_DATA \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_INCLASS_NO_PURE_DECLS \
	DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBTPLUGINTEST_API UClass* StaticClass<class UDBTAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DBTPluginProject_Plugins_DBTPluginTest_Source_DBTPluginTest_Public_DBTAbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
