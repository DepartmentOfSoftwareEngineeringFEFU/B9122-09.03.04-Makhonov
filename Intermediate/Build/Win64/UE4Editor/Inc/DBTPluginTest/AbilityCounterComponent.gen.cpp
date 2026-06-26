// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBTPluginTest/Public/AbilityCounterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityCounterComponent() {}
// Cross Module References
	DBTPLUGINTEST_API UFunction* Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBTPluginTest();
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UAbilityCounterComponent_NoRegister();
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UAbilityCounterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics
	{
		struct _Script_DBTPluginTest_eventOnAbilityUsedSignature_Parms
		{
			FString AbilityName;
			int32 UsageCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UsageCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::NewProp_AbilityName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBTPluginTest_eventOnAbilityUsedSignature_Parms, AbilityName), METADATA_PARAMS(Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::NewProp_AbilityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::NewProp_AbilityName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::NewProp_UsageCount = { "UsageCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBTPluginTest_eventOnAbilityUsedSignature_Parms, UsageCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::NewProp_AbilityName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::NewProp_UsageCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBTPluginTest, nullptr, "OnAbilityUsedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBTPluginTest_eventOnAbilityUsedSignature_Parms), Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAbilityCounterComponent::execIncrementAbilityCounter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AbilityName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementAbilityCounter(Z_Param_AbilityName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCounterComponent::execShowAbilityStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAbilityStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCounterComponent::execDisplayStatsOnScreen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayStatsOnScreen(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCounterComponent::execPrintStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCounterComponent::execResetAllCounters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllCounters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCounterComponent::execGetAllAbilityUsageStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,int32>*)Z_Param__Result=P_THIS->GetAllAbilityUsageStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCounterComponent::execGetAbilityUsageCountByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AbilityClassName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbilityUsageCountByName(Z_Param_AbilityClassName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCounterComponent::execGetAbilityUsageCount)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbilityUsageCount(Z_Param_AbilityClass);
		P_NATIVE_END;
	}
	void UAbilityCounterComponent::StaticRegisterNativesUAbilityCounterComponent()
	{
		UClass* Class = UAbilityCounterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayStatsOnScreen", &UAbilityCounterComponent::execDisplayStatsOnScreen },
			{ "GetAbilityUsageCount", &UAbilityCounterComponent::execGetAbilityUsageCount },
			{ "GetAbilityUsageCountByName", &UAbilityCounterComponent::execGetAbilityUsageCountByName },
			{ "GetAllAbilityUsageStats", &UAbilityCounterComponent::execGetAllAbilityUsageStats },
			{ "IncrementAbilityCounter", &UAbilityCounterComponent::execIncrementAbilityCounter },
			{ "PrintStats", &UAbilityCounterComponent::execPrintStats },
			{ "ResetAllCounters", &UAbilityCounterComponent::execResetAllCounters },
			{ "ShowAbilityStats", &UAbilityCounterComponent::execShowAbilityStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics
	{
		struct AbilityCounterComponent_eventDisplayStatsOnScreen_Parms
		{
			float Duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCounterComponent_eventDisplayStatsOnScreen_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Counter" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCounterComponent, nullptr, "DisplayStatsOnScreen", nullptr, nullptr, sizeof(AbilityCounterComponent_eventDisplayStatsOnScreen_Parms), Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics
	{
		struct AbilityCounterComponent_eventGetAbilityUsageCount_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityClass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCounterComponent_eventGetAbilityUsageCount_Parms, AbilityClass), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCounterComponent_eventGetAbilityUsageCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::NewProp_AbilityClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Counter" },
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCounterComponent, nullptr, "GetAbilityUsageCount", nullptr, nullptr, sizeof(AbilityCounterComponent_eventGetAbilityUsageCount_Parms), Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics
	{
		struct AbilityCounterComponent_eventGetAbilityUsageCountByName_Parms
		{
			FString AbilityClassName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityClassName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::NewProp_AbilityClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::NewProp_AbilityClassName = { "AbilityClassName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCounterComponent_eventGetAbilityUsageCountByName_Parms, AbilityClassName), METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::NewProp_AbilityClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::NewProp_AbilityClassName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCounterComponent_eventGetAbilityUsageCountByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::NewProp_AbilityClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Counter" },
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCounterComponent, nullptr, "GetAbilityUsageCountByName", nullptr, nullptr, sizeof(AbilityCounterComponent_eventGetAbilityUsageCountByName_Parms), Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics
	{
		struct AbilityCounterComponent_eventGetAllAbilityUsageStats_Parms
		{
			TMap<FString,int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCounterComponent_eventGetAllAbilityUsageStats_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Counter" },
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCounterComponent, nullptr, "GetAllAbilityUsageStats", nullptr, nullptr, sizeof(AbilityCounterComponent_eventGetAllAbilityUsageStats_Parms), Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics
	{
		struct AbilityCounterComponent_eventIncrementAbilityCounter_Parms
		{
			FString AbilityName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::NewProp_AbilityName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCounterComponent_eventIncrementAbilityCounter_Parms, AbilityName), METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::NewProp_AbilityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::NewProp_AbilityName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::NewProp_AbilityName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Counter" },
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCounterComponent, nullptr, "IncrementAbilityCounter", nullptr, nullptr, sizeof(AbilityCounterComponent_eventIncrementAbilityCounter_Parms), Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCounterComponent_PrintStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_PrintStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Counter" },
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCounterComponent_PrintStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCounterComponent, nullptr, "PrintStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_PrintStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_PrintStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCounterComponent_PrintStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCounterComponent_PrintStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCounterComponent_ResetAllCounters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_ResetAllCounters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Counter" },
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCounterComponent_ResetAllCounters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCounterComponent, nullptr, "ResetAllCounters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_ResetAllCounters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_ResetAllCounters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCounterComponent_ResetAllCounters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCounterComponent_ResetAllCounters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCounterComponent_ShowAbilityStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCounterComponent_ShowAbilityStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCounterComponent_ShowAbilityStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCounterComponent, nullptr, "ShowAbilityStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCounterComponent_ShowAbilityStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCounterComponent_ShowAbilityStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCounterComponent_ShowAbilityStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCounterComponent_ShowAbilityStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilityCounterComponent_NoRegister()
	{
		return UAbilityCounterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityCounterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAbilityUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityUsed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityUsageMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityUsageMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityUsageMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AbilityUsageMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityCounterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBTPluginTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityCounterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityCounterComponent_DisplayStatsOnScreen, "DisplayStatsOnScreen" }, // 1285718463
		{ &Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCount, "GetAbilityUsageCount" }, // 3205359333
		{ &Z_Construct_UFunction_UAbilityCounterComponent_GetAbilityUsageCountByName, "GetAbilityUsageCountByName" }, // 3273019410
		{ &Z_Construct_UFunction_UAbilityCounterComponent_GetAllAbilityUsageStats, "GetAllAbilityUsageStats" }, // 1607860500
		{ &Z_Construct_UFunction_UAbilityCounterComponent_IncrementAbilityCounter, "IncrementAbilityCounter" }, // 4219899199
		{ &Z_Construct_UFunction_UAbilityCounterComponent_PrintStats, "PrintStats" }, // 1039583710
		{ &Z_Construct_UFunction_UAbilityCounterComponent_ResetAllCounters, "ResetAllCounters" }, // 3073175309
		{ &Z_Construct_UFunction_UAbilityCounterComponent_ShowAbilityStats, "ShowAbilityStats" }, // 4247349613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityCounterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbilityCounterComponent.h" },
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_OnAbilityUsed_MetaData[] = {
		{ "Category", "Ability Counter" },
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_OnAbilityUsed = { "OnAbilityUsed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityCounterComponent, OnAbilityUsed), Z_Construct_UDelegateFunction_DBTPluginTest_OnAbilityUsedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_OnAbilityUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_OnAbilityUsed_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_AbilityUsageMap_ValueProp = { "AbilityUsageMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_AbilityUsageMap_Key_KeyProp = { "AbilityUsageMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_AbilityUsageMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityCounterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_AbilityUsageMap = { "AbilityUsageMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityCounterComponent, AbilityUsageMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_AbilityUsageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_AbilityUsageMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityCounterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_OnAbilityUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_AbilityUsageMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_AbilityUsageMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityCounterComponent_Statics::NewProp_AbilityUsageMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityCounterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityCounterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilityCounterComponent_Statics::ClassParams = {
		&UAbilityCounterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityCounterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityCounterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityCounterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityCounterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityCounterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilityCounterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilityCounterComponent, 4030528770);
	template<> DBTPLUGINTEST_API UClass* StaticClass<UAbilityCounterComponent>()
	{
		return UAbilityCounterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilityCounterComponent(Z_Construct_UClass_UAbilityCounterComponent, &UAbilityCounterComponent::StaticClass, TEXT("/Script/DBTPluginTest"), TEXT("UAbilityCounterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityCounterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
