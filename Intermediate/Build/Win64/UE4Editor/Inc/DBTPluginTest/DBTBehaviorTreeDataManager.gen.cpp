// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBTPluginTest/Public/DBTBehaviorTreeDataManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBTBehaviorTreeDataManager() {}
// Cross Module References
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UDBTBehaviorTreeDataManager_NoRegister();
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UDBTBehaviorTreeDataManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBTPluginTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execClearAllData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execIsAnyAIControllerDynamicBehaviorEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnyAIControllerDynamicBehaviorEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execGetGlobalAdjustmentDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGlobalAdjustmentDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execSetGlobalAdjustmentDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlobalAdjustmentDelay(Z_Param_DelaySeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execGetAIControllerTimeLimit)
	{
		P_GET_OBJECT(UObject,Z_Param_AIController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAIControllerTimeLimit(Z_Param_AIController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execSetAIControllerTimeLimit)
	{
		P_GET_OBJECT(UObject,Z_Param_AIController);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAIControllerTimeLimit(Z_Param_AIController,Z_Param_TimeLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execGetAIControllerDynamicBehaviorFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_AIController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAIControllerDynamicBehaviorFlag(Z_Param_AIController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execSetAIControllerDynamicBehaviorFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_AIController);
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAIControllerDynamicBehaviorFlag(Z_Param_AIController,Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execGetTaskNodeCategory)
	{
		P_GET_OBJECT(UObject,Z_Param_TaskNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTaskNodeCategory(Z_Param_TaskNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execGetTaskNodeIsDynamic)
	{
		P_GET_OBJECT(UObject,Z_Param_TaskNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTaskNodeIsDynamic(Z_Param_TaskNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execSetTaskNodeDynamicData)
	{
		P_GET_OBJECT(UObject,Z_Param_TaskNode);
		P_GET_UBOOL(Z_Param_bIsDynamic);
		P_GET_PROPERTY(FStrProperty,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTaskNodeDynamicData(Z_Param_TaskNode,Z_Param_bIsDynamic,Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execHasLimitChangeForNode)
	{
		P_GET_OBJECT(UObject,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasLimitChangeForNode(Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execGetLimitChangeForNode)
	{
		P_GET_OBJECT(UObject,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLimitChangeForNode(Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTBehaviorTreeDataManager::execSetLimitChangeForNode)
	{
		P_GET_OBJECT(UObject,Z_Param_Node);
		P_GET_PROPERTY(FIntProperty,Z_Param_LimitChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLimitChangeForNode(Z_Param_Node,Z_Param_LimitChange);
		P_NATIVE_END;
	}
	void UDBTBehaviorTreeDataManager::StaticRegisterNativesUDBTBehaviorTreeDataManager()
	{
		UClass* Class = UDBTBehaviorTreeDataManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllData", &UDBTBehaviorTreeDataManager::execClearAllData },
			{ "GetAIControllerDynamicBehaviorFlag", &UDBTBehaviorTreeDataManager::execGetAIControllerDynamicBehaviorFlag },
			{ "GetAIControllerTimeLimit", &UDBTBehaviorTreeDataManager::execGetAIControllerTimeLimit },
			{ "GetGlobalAdjustmentDelay", &UDBTBehaviorTreeDataManager::execGetGlobalAdjustmentDelay },
			{ "GetLimitChangeForNode", &UDBTBehaviorTreeDataManager::execGetLimitChangeForNode },
			{ "GetTaskNodeCategory", &UDBTBehaviorTreeDataManager::execGetTaskNodeCategory },
			{ "GetTaskNodeIsDynamic", &UDBTBehaviorTreeDataManager::execGetTaskNodeIsDynamic },
			{ "HasLimitChangeForNode", &UDBTBehaviorTreeDataManager::execHasLimitChangeForNode },
			{ "IsAnyAIControllerDynamicBehaviorEnabled", &UDBTBehaviorTreeDataManager::execIsAnyAIControllerDynamicBehaviorEnabled },
			{ "SetAIControllerDynamicBehaviorFlag", &UDBTBehaviorTreeDataManager::execSetAIControllerDynamicBehaviorFlag },
			{ "SetAIControllerTimeLimit", &UDBTBehaviorTreeDataManager::execSetAIControllerTimeLimit },
			{ "SetGlobalAdjustmentDelay", &UDBTBehaviorTreeDataManager::execSetGlobalAdjustmentDelay },
			{ "SetLimitChangeForNode", &UDBTBehaviorTreeDataManager::execSetLimitChangeForNode },
			{ "SetTaskNodeDynamicData", &UDBTBehaviorTreeDataManager::execSetTaskNodeDynamicData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_ClearAllData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_ClearAllData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_ClearAllData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "ClearAllData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_ClearAllData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_ClearAllData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_ClearAllData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_ClearAllData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics
	{
		struct DBTBehaviorTreeDataManager_eventGetAIControllerDynamicBehaviorFlag_Parms
		{
			UObject* AIController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventGetAIControllerDynamicBehaviorFlag_Parms, AIController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBTBehaviorTreeDataManager_eventGetAIControllerDynamicBehaviorFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBTBehaviorTreeDataManager_eventGetAIControllerDynamicBehaviorFlag_Parms), &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "GetAIControllerDynamicBehaviorFlag", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventGetAIControllerDynamicBehaviorFlag_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics
	{
		struct DBTBehaviorTreeDataManager_eventGetAIControllerTimeLimit_Parms
		{
			UObject* AIController;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventGetAIControllerTimeLimit_Parms, AIController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventGetAIControllerTimeLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "GetAIControllerTimeLimit", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventGetAIControllerTimeLimit_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics
	{
		struct DBTBehaviorTreeDataManager_eventGetGlobalAdjustmentDelay_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventGetGlobalAdjustmentDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "GetGlobalAdjustmentDelay", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventGetGlobalAdjustmentDelay_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics
	{
		struct DBTBehaviorTreeDataManager_eventGetLimitChangeForNode_Parms
		{
			UObject* Node;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventGetLimitChangeForNode_Parms, Node), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventGetLimitChangeForNode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "GetLimitChangeForNode", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventGetLimitChangeForNode_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics
	{
		struct DBTBehaviorTreeDataManager_eventGetTaskNodeCategory_Parms
		{
			UObject* TaskNode;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskNode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::NewProp_TaskNode = { "TaskNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventGetTaskNodeCategory_Parms, TaskNode), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventGetTaskNodeCategory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::NewProp_TaskNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "GetTaskNodeCategory", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventGetTaskNodeCategory_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics
	{
		struct DBTBehaviorTreeDataManager_eventGetTaskNodeIsDynamic_Parms
		{
			UObject* TaskNode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::NewProp_TaskNode = { "TaskNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventGetTaskNodeIsDynamic_Parms, TaskNode), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBTBehaviorTreeDataManager_eventGetTaskNodeIsDynamic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBTBehaviorTreeDataManager_eventGetTaskNodeIsDynamic_Parms), &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::NewProp_TaskNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "GetTaskNodeIsDynamic", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventGetTaskNodeIsDynamic_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics
	{
		struct DBTBehaviorTreeDataManager_eventHasLimitChangeForNode_Parms
		{
			UObject* Node;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventHasLimitChangeForNode_Parms, Node), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBTBehaviorTreeDataManager_eventHasLimitChangeForNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBTBehaviorTreeDataManager_eventHasLimitChangeForNode_Parms), &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "HasLimitChangeForNode", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventHasLimitChangeForNode_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics
	{
		struct DBTBehaviorTreeDataManager_eventIsAnyAIControllerDynamicBehaviorEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBTBehaviorTreeDataManager_eventIsAnyAIControllerDynamicBehaviorEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBTBehaviorTreeDataManager_eventIsAnyAIControllerDynamicBehaviorEnabled_Parms), &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "IsAnyAIControllerDynamicBehaviorEnabled", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventIsAnyAIControllerDynamicBehaviorEnabled_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics
	{
		struct DBTBehaviorTreeDataManager_eventSetAIControllerDynamicBehaviorFlag_Parms
		{
			UObject* AIController;
			bool bFlag;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventSetAIControllerDynamicBehaviorFlag_Parms, AIController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((DBTBehaviorTreeDataManager_eventSetAIControllerDynamicBehaviorFlag_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBTBehaviorTreeDataManager_eventSetAIControllerDynamicBehaviorFlag_Parms), &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "SetAIControllerDynamicBehaviorFlag", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventSetAIControllerDynamicBehaviorFlag_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics
	{
		struct DBTBehaviorTreeDataManager_eventSetAIControllerTimeLimit_Parms
		{
			UObject* AIController;
			int32 TimeLimit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventSetAIControllerTimeLimit_Parms, AIController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventSetAIControllerTimeLimit_Parms, TimeLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::NewProp_TimeLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "SetAIControllerTimeLimit", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventSetAIControllerTimeLimit_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics
	{
		struct DBTBehaviorTreeDataManager_eventSetGlobalAdjustmentDelay_Parms
		{
			float DelaySeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventSetGlobalAdjustmentDelay_Parms, DelaySeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::NewProp_DelaySeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "SetGlobalAdjustmentDelay", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventSetGlobalAdjustmentDelay_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics
	{
		struct DBTBehaviorTreeDataManager_eventSetLimitChangeForNode_Parms
		{
			UObject* Node;
			int32 LimitChange;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LimitChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventSetLimitChangeForNode_Parms, Node), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::NewProp_LimitChange = { "LimitChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventSetLimitChangeForNode_Parms, LimitChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::NewProp_LimitChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "SetLimitChangeForNode", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventSetLimitChangeForNode_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics
	{
		struct DBTBehaviorTreeDataManager_eventSetTaskNodeDynamicData_Parms
		{
			UObject* TaskNode;
			bool bIsDynamic;
			FString Category;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskNode;
		static void NewProp_bIsDynamic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_TaskNode = { "TaskNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventSetTaskNodeDynamicData_Parms, TaskNode), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_bIsDynamic_SetBit(void* Obj)
	{
		((DBTBehaviorTreeDataManager_eventSetTaskNodeDynamicData_Parms*)Obj)->bIsDynamic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_bIsDynamic = { "bIsDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBTBehaviorTreeDataManager_eventSetTaskNodeDynamicData_Parms), &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_bIsDynamic_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTBehaviorTreeDataManager_eventSetTaskNodeDynamicData_Parms, Category), METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_TaskNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_bIsDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior Tree" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTBehaviorTreeDataManager, nullptr, "SetTaskNodeDynamicData", nullptr, nullptr, sizeof(DBTBehaviorTreeDataManager_eventSetTaskNodeDynamicData_Parms), Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBTBehaviorTreeDataManager_NoRegister()
	{
		return UDBTBehaviorTreeDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeDataMap_ValueProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_NodeDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeDataMap;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TaskNodeDynamicFlagsMap_ValueProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TaskNodeDynamicFlagsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskNodeDynamicFlagsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TaskNodeDynamicFlagsMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskNodeCategoriesMap_ValueProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TaskNodeCategoriesMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskNodeCategoriesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TaskNodeCategoriesMap;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AIControllerDynamicBehaviorFlags_ValueProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AIControllerDynamicBehaviorFlags_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIControllerDynamicBehaviorFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AIControllerDynamicBehaviorFlags;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AIControllerTimeLimits_ValueProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AIControllerTimeLimits_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIControllerTimeLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AIControllerTimeLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalAdjustmentDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalAdjustmentDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBTPluginTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_ClearAllData, "ClearAllData" }, // 3449097054
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerDynamicBehaviorFlag, "GetAIControllerDynamicBehaviorFlag" }, // 3801316714
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetAIControllerTimeLimit, "GetAIControllerTimeLimit" }, // 777116769
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetGlobalAdjustmentDelay, "GetGlobalAdjustmentDelay" }, // 3029621960
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetLimitChangeForNode, "GetLimitChangeForNode" }, // 3113663316
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeCategory, "GetTaskNodeCategory" }, // 3755193571
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_GetTaskNodeIsDynamic, "GetTaskNodeIsDynamic" }, // 1794205823
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_HasLimitChangeForNode, "HasLimitChangeForNode" }, // 277696457
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_IsAnyAIControllerDynamicBehaviorEnabled, "IsAnyAIControllerDynamicBehaviorEnabled" }, // 16587619
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerDynamicBehaviorFlag, "SetAIControllerDynamicBehaviorFlag" }, // 2993526365
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetAIControllerTimeLimit, "SetAIControllerTimeLimit" }, // 1007328351
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetGlobalAdjustmentDelay, "SetGlobalAdjustmentDelay" }, // 1898394944
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetLimitChangeForNode, "SetLimitChangeForNode" }, // 1860155100
		{ &Z_Construct_UFunction_UDBTBehaviorTreeDataManager_SetTaskNodeDynamicData, "SetTaskNodeDynamicData" }, // 1622932906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBTBehaviorTreeDataManager.h" },
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_NodeDataMap_ValueProp = { "NodeDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_NodeDataMap_Key_KeyProp = { "NodeDataMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_NodeDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_NodeDataMap = { "NodeDataMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBTBehaviorTreeDataManager, NodeDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_NodeDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_NodeDataMap_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeDynamicFlagsMap_ValueProp = { "TaskNodeDynamicFlagsMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeDynamicFlagsMap_Key_KeyProp = { "TaskNodeDynamicFlagsMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeDynamicFlagsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeDynamicFlagsMap = { "TaskNodeDynamicFlagsMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBTBehaviorTreeDataManager, TaskNodeDynamicFlagsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeDynamicFlagsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeDynamicFlagsMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeCategoriesMap_ValueProp = { "TaskNodeCategoriesMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeCategoriesMap_Key_KeyProp = { "TaskNodeCategoriesMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeCategoriesMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeCategoriesMap = { "TaskNodeCategoriesMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBTBehaviorTreeDataManager, TaskNodeCategoriesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeCategoriesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeCategoriesMap_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerDynamicBehaviorFlags_ValueProp = { "AIControllerDynamicBehaviorFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerDynamicBehaviorFlags_Key_KeyProp = { "AIControllerDynamicBehaviorFlags_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerDynamicBehaviorFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerDynamicBehaviorFlags = { "AIControllerDynamicBehaviorFlags", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBTBehaviorTreeDataManager, AIControllerDynamicBehaviorFlags), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerDynamicBehaviorFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerDynamicBehaviorFlags_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerTimeLimits_ValueProp = { "AIControllerTimeLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerTimeLimits_Key_KeyProp = { "AIControllerTimeLimits_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerTimeLimits_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerTimeLimits = { "AIControllerTimeLimits", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBTBehaviorTreeDataManager, AIControllerTimeLimits), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerTimeLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerTimeLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_GlobalAdjustmentDelay_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBTBehaviorTreeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_GlobalAdjustmentDelay = { "GlobalAdjustmentDelay", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBTBehaviorTreeDataManager, GlobalAdjustmentDelay), METADATA_PARAMS(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_GlobalAdjustmentDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_GlobalAdjustmentDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_NodeDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_NodeDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_NodeDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeDynamicFlagsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeDynamicFlagsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeDynamicFlagsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeCategoriesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeCategoriesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_TaskNodeCategoriesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerDynamicBehaviorFlags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerDynamicBehaviorFlags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerDynamicBehaviorFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerTimeLimits_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerTimeLimits_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_AIControllerTimeLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::NewProp_GlobalAdjustmentDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBTBehaviorTreeDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::ClassParams = {
		&UDBTBehaviorTreeDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBTBehaviorTreeDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBTBehaviorTreeDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBTBehaviorTreeDataManager, 2370188757);
	template<> DBTPLUGINTEST_API UClass* StaticClass<UDBTBehaviorTreeDataManager>()
	{
		return UDBTBehaviorTreeDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBTBehaviorTreeDataManager(Z_Construct_UClass_UDBTBehaviorTreeDataManager, &UDBTBehaviorTreeDataManager::StaticClass, TEXT("/Script/DBTPluginTest"), TEXT("UDBTBehaviorTreeDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBTBehaviorTreeDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
