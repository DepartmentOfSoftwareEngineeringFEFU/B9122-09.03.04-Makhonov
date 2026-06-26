// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBTPluginTest/Public/MaxPropertiesAdjusterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaxPropertiesAdjusterComponent() {}
// Cross Module References
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UMaxPropertiesAdjusterComponent_NoRegister();
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UMaxPropertiesAdjusterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBTPluginTest();
// End Cross Module References
	DEFINE_FUNCTION(UMaxPropertiesAdjusterComponent::execExecuteAdjustmentLogic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAdjustmentLogic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaxPropertiesAdjusterComponent::execExecuteAdjustment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAdjustment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaxPropertiesAdjusterComponent::execStartAdjustmentTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAdjustmentTimer();
		P_NATIVE_END;
	}
	void UMaxPropertiesAdjusterComponent::StaticRegisterNativesUMaxPropertiesAdjusterComponent()
	{
		UClass* Class = UMaxPropertiesAdjusterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteAdjustment", &UMaxPropertiesAdjusterComponent::execExecuteAdjustment },
			{ "ExecuteAdjustmentLogic", &UMaxPropertiesAdjusterComponent::execExecuteAdjustmentLogic },
			{ "StartAdjustmentTimer", &UMaxPropertiesAdjusterComponent::execStartAdjustmentTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaxPropertiesAdjusterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaxPropertiesAdjusterComponent, nullptr, "ExecuteAdjustment", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustmentLogic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustmentLogic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaxPropertiesAdjusterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustmentLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaxPropertiesAdjusterComponent, nullptr, "ExecuteAdjustmentLogic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustmentLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustmentLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustmentLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustmentLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_StartAdjustmentTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_StartAdjustmentTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Max Properties" },
		{ "ModuleRelativePath", "Public/MaxPropertiesAdjusterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_StartAdjustmentTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaxPropertiesAdjusterComponent, nullptr, "StartAdjustmentTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_StartAdjustmentTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_StartAdjustmentTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_StartAdjustmentTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_StartAdjustmentTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaxPropertiesAdjusterComponent_NoRegister()
	{
		return UMaxPropertiesAdjusterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMaxPropertiesAdjusterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaxPropertiesAdjusterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBTPluginTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaxPropertiesAdjusterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustment, "ExecuteAdjustment" }, // 221719456
		{ &Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_ExecuteAdjustmentLogic, "ExecuteAdjustmentLogic" }, // 4223562833
		{ &Z_Construct_UFunction_UMaxPropertiesAdjusterComponent_StartAdjustmentTimer, "StartAdjustmentTimer" }, // 138973389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaxPropertiesAdjusterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MaxPropertiesAdjusterComponent.h" },
		{ "ModuleRelativePath", "Public/MaxPropertiesAdjusterComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaxPropertiesAdjusterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaxPropertiesAdjusterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaxPropertiesAdjusterComponent_Statics::ClassParams = {
		&UMaxPropertiesAdjusterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaxPropertiesAdjusterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaxPropertiesAdjusterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaxPropertiesAdjusterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaxPropertiesAdjusterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaxPropertiesAdjusterComponent, 47083280);
	template<> DBTPLUGINTEST_API UClass* StaticClass<UMaxPropertiesAdjusterComponent>()
	{
		return UMaxPropertiesAdjusterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaxPropertiesAdjusterComponent(Z_Construct_UClass_UMaxPropertiesAdjusterComponent, &UMaxPropertiesAdjusterComponent::StaticClass, TEXT("/Script/DBTPluginTest"), TEXT("UMaxPropertiesAdjusterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaxPropertiesAdjusterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
