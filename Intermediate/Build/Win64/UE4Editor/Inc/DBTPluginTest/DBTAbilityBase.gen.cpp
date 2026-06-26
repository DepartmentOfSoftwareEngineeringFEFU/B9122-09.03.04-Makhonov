// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBTPluginTest/Public/DBTAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBTAbilityBase() {}
// Cross Module References
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UDBTAbilityBase_NoRegister();
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UDBTAbilityBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_DBTPluginTest();
	DBTPLUGINTEST_API UEnum* Z_Construct_UEnum_DBTPluginTest_EAbilityCategory();
// End Cross Module References
	DEFINE_FUNCTION(UDBTAbilityBase::execIncrementUsageCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementUsageCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTAbilityBase::execGetActionCategoryString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActionCategoryString();
		P_NATIVE_END;
	}
	void UDBTAbilityBase::StaticRegisterNativesUDBTAbilityBase()
	{
		UClass* Class = UDBTAbilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionCategoryString", &UDBTAbilityBase::execGetActionCategoryString },
			{ "IncrementUsageCount", &UDBTAbilityBase::execIncrementUsageCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics
	{
		struct DBTAbilityBase_eventGetActionCategoryString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBTAbilityBase_eventGetActionCategoryString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior" },
		{ "ModuleRelativePath", "Public/DBTAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTAbilityBase, nullptr, "GetActionCategoryString", nullptr, nullptr, sizeof(DBTAbilityBase_eventGetActionCategoryString_Parms), Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTAbilityBase_IncrementUsageCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTAbilityBase_IncrementUsageCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Behavior" },
		{ "ModuleRelativePath", "Public/DBTAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTAbilityBase_IncrementUsageCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTAbilityBase, nullptr, "IncrementUsageCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTAbilityBase_IncrementUsageCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTAbilityBase_IncrementUsageCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTAbilityBase_IncrementUsageCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBTAbilityBase_IncrementUsageCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBTAbilityBase_NoRegister()
	{
		return UDBTAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UDBTAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsageCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UsageCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBTAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_DBTPluginTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBTAbilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBTAbilityBase_GetActionCategoryString, "GetActionCategoryString" }, // 22810815
		{ &Z_Construct_UFunction_UDBTAbilityBase_IncrementUsageCount, "IncrementUsageCount" }, // 2322035045
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTAbilityBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBTAbilityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBTAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_ActionCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_ActionCategory_MetaData[] = {
		{ "Category", "Dynamic Behavior" },
		{ "ModuleRelativePath", "Public/DBTAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_ActionCategory = { "ActionCategory", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBTAbilityBase, ActionCategory), Z_Construct_UEnum_DBTPluginTest_EAbilityCategory, METADATA_PARAMS(Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_ActionCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_ActionCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_UsageCount_MetaData[] = {
		{ "Category", "Ability Counter" },
		{ "ModuleRelativePath", "Public/DBTAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_UsageCount = { "UsageCount", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBTAbilityBase, UsageCount), METADATA_PARAMS(Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_UsageCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_UsageCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBTAbilityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_ActionCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_ActionCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBTAbilityBase_Statics::NewProp_UsageCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBTAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBTAbilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBTAbilityBase_Statics::ClassParams = {
		&UDBTAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBTAbilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBTAbilityBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDBTAbilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTAbilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBTAbilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBTAbilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBTAbilityBase, 428986459);
	template<> DBTPLUGINTEST_API UClass* StaticClass<UDBTAbilityBase>()
	{
		return UDBTAbilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBTAbilityBase(Z_Construct_UClass_UDBTAbilityBase, &UDBTAbilityBase::StaticClass, TEXT("/Script/DBTPluginTest"), TEXT("UDBTAbilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBTAbilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
