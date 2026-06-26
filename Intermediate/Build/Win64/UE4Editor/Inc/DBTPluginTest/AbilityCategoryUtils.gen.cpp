// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBTPluginTest/Public/AbilityCategoryUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityCategoryUtils() {}
// Cross Module References
	DBTPLUGINTEST_API UEnum* Z_Construct_UEnum_DBTPluginTest_EAbilityCategory();
	UPackage* Z_Construct_UPackage__Script_DBTPluginTest();
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UAbilityCategoryUtils_NoRegister();
	DBTPLUGINTEST_API UClass* Z_Construct_UClass_UAbilityCategoryUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EAbilityCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBTPluginTest_EAbilityCategory, Z_Construct_UPackage__Script_DBTPluginTest(), TEXT("EAbilityCategory"));
		}
		return Singleton;
	}
	template<> DBTPLUGINTEST_API UEnum* StaticEnum<EAbilityCategory>()
	{
		return EAbilityCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbilityCategory(EAbilityCategory_StaticEnum, TEXT("/Script/DBTPluginTest"), TEXT("EAbilityCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBTPluginTest_EAbilityCategory_Hash() { return 3496281738U; }
	UEnum* Z_Construct_UEnum_DBTPluginTest_EAbilityCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBTPluginTest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbilityCategory"), 0, Get_Z_Construct_UEnum_DBTPluginTest_EAbilityCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbilityCategory::OffensiveAction", (int64)EAbilityCategory::OffensiveAction },
				{ "EAbilityCategory::DefensiveAction", (int64)EAbilityCategory::DefensiveAction },
				{ "EAbilityCategory::SupportingAction", (int64)EAbilityCategory::SupportingAction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DefensiveAction.DisplayName", "Defensive Action" },
				{ "DefensiveAction.Name", "EAbilityCategory::DefensiveAction" },
				{ "ModuleRelativePath", "Public/AbilityCategoryUtils.h" },
				{ "OffensiveAction.DisplayName", "Offensive Action" },
				{ "OffensiveAction.Name", "EAbilityCategory::OffensiveAction" },
				{ "SupportingAction.DisplayName", "Supporting Action" },
				{ "SupportingAction.Name", "EAbilityCategory::SupportingAction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBTPluginTest,
				nullptr,
				"EAbilityCategory",
				"EAbilityCategory",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UAbilityCategoryUtils::execGetAllCategoryOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=UAbilityCategoryUtils::GetAllCategoryOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCategoryUtils::execTextToCategory)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_CategoryText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAbilityCategory*)Z_Param__Result=UAbilityCategoryUtils::TextToCategory(Z_Param_Out_CategoryText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCategoryUtils::execCategoryToText)
	{
		P_GET_ENUM(EAbilityCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAbilityCategoryUtils::CategoryToText(EAbilityCategory(Z_Param_Category));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCategoryUtils::execGetOppositeCategory)
	{
		P_GET_ENUM(EAbilityCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAbilityCategory*)Z_Param__Result=UAbilityCategoryUtils::GetOppositeCategory(EAbilityCategory(Z_Param_Category));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityCategoryUtils::execGetOppositeCategoryText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_CategoryText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAbilityCategoryUtils::GetOppositeCategoryText(Z_Param_Out_CategoryText);
		P_NATIVE_END;
	}
	void UAbilityCategoryUtils::StaticRegisterNativesUAbilityCategoryUtils()
	{
		UClass* Class = UAbilityCategoryUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CategoryToText", &UAbilityCategoryUtils::execCategoryToText },
			{ "GetAllCategoryOptions", &UAbilityCategoryUtils::execGetAllCategoryOptions },
			{ "GetOppositeCategory", &UAbilityCategoryUtils::execGetOppositeCategory },
			{ "GetOppositeCategoryText", &UAbilityCategoryUtils::execGetOppositeCategoryText },
			{ "TextToCategory", &UAbilityCategoryUtils::execTextToCategory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics
	{
		struct AbilityCategoryUtils_eventCategoryToText_Parms
		{
			EAbilityCategory Category;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCategoryUtils_eventCategoryToText_Parms, Category), Z_Construct_UEnum_DBTPluginTest_EAbilityCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCategoryUtils_eventCategoryToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Category" },
		{ "ModuleRelativePath", "Public/AbilityCategoryUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCategoryUtils, nullptr, "CategoryToText", nullptr, nullptr, sizeof(AbilityCategoryUtils_eventCategoryToText_Parms), Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics
	{
		struct AbilityCategoryUtils_eventGetAllCategoryOptions_Parms
		{
			TArray<FText> ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCategoryUtils_eventGetAllCategoryOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Category" },
		{ "ModuleRelativePath", "Public/AbilityCategoryUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCategoryUtils, nullptr, "GetAllCategoryOptions", nullptr, nullptr, sizeof(AbilityCategoryUtils_eventGetAllCategoryOptions_Parms), Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics
	{
		struct AbilityCategoryUtils_eventGetOppositeCategory_Parms
		{
			EAbilityCategory Category;
			EAbilityCategory ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCategoryUtils_eventGetOppositeCategory_Parms, Category), Z_Construct_UEnum_DBTPluginTest_EAbilityCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCategoryUtils_eventGetOppositeCategory_Parms, ReturnValue), Z_Construct_UEnum_DBTPluginTest_EAbilityCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Category" },
		{ "DisplayName", "Get Opposite Category (Enum)" },
		{ "ModuleRelativePath", "Public/AbilityCategoryUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCategoryUtils, nullptr, "GetOppositeCategory", nullptr, nullptr, sizeof(AbilityCategoryUtils_eventGetOppositeCategory_Parms), Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics
	{
		struct AbilityCategoryUtils_eventGetOppositeCategoryText_Parms
		{
			FText CategoryText;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CategoryText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::NewProp_CategoryText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::NewProp_CategoryText = { "CategoryText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCategoryUtils_eventGetOppositeCategoryText_Parms, CategoryText), METADATA_PARAMS(Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::NewProp_CategoryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::NewProp_CategoryText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCategoryUtils_eventGetOppositeCategoryText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::NewProp_CategoryText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Category" },
		{ "DisplayName", "Get Opposite Category (Text)" },
		{ "ModuleRelativePath", "Public/AbilityCategoryUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCategoryUtils, nullptr, "GetOppositeCategoryText", nullptr, nullptr, sizeof(AbilityCategoryUtils_eventGetOppositeCategoryText_Parms), Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics
	{
		struct AbilityCategoryUtils_eventTextToCategory_Parms
		{
			FText CategoryText;
			EAbilityCategory ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CategoryText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::NewProp_CategoryText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::NewProp_CategoryText = { "CategoryText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCategoryUtils_eventTextToCategory_Parms, CategoryText), METADATA_PARAMS(Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::NewProp_CategoryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::NewProp_CategoryText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityCategoryUtils_eventTextToCategory_Parms, ReturnValue), Z_Construct_UEnum_DBTPluginTest_EAbilityCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::NewProp_CategoryText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Category" },
		{ "ModuleRelativePath", "Public/AbilityCategoryUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityCategoryUtils, nullptr, "TextToCategory", nullptr, nullptr, sizeof(AbilityCategoryUtils_eventTextToCategory_Parms), Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilityCategoryUtils_NoRegister()
	{
		return UAbilityCategoryUtils::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityCategoryUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityCategoryUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBTPluginTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityCategoryUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityCategoryUtils_CategoryToText, "CategoryToText" }, // 3458839568
		{ &Z_Construct_UFunction_UAbilityCategoryUtils_GetAllCategoryOptions, "GetAllCategoryOptions" }, // 3451203580
		{ &Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategory, "GetOppositeCategory" }, // 441163339
		{ &Z_Construct_UFunction_UAbilityCategoryUtils_GetOppositeCategoryText, "GetOppositeCategoryText" }, // 2935814135
		{ &Z_Construct_UFunction_UAbilityCategoryUtils_TextToCategory, "TextToCategory" }, // 2800175671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityCategoryUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityCategoryUtils.h" },
		{ "ModuleRelativePath", "Public/AbilityCategoryUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityCategoryUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityCategoryUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilityCategoryUtils_Statics::ClassParams = {
		&UAbilityCategoryUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityCategoryUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityCategoryUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityCategoryUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilityCategoryUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilityCategoryUtils, 2691480846);
	template<> DBTPLUGINTEST_API UClass* StaticClass<UAbilityCategoryUtils>()
	{
		return UAbilityCategoryUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilityCategoryUtils(Z_Construct_UClass_UAbilityCategoryUtils, &UAbilityCategoryUtils::StaticClass, TEXT("/Script/DBTPluginTest"), TEXT("UAbilityCategoryUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityCategoryUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
