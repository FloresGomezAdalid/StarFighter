// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Menu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenu() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AMenu_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMenu();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AMenu::StaticRegisterNativesAMenu()
	{
	}
	UClass* Z_Construct_UClass_AMenu_NoRegister()
	{
		return AMenu::StaticClass();
	}
	struct Z_Construct_UClass_AMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Menu.h" },
		{ "ModuleRelativePath", "Menu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMenu_Statics::ClassParams = {
		&AMenu::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMenu, 1527190839);
	template<> STARFIGHTER_API UClass* StaticClass<AMenu>()
	{
		return AMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenu(Z_Construct_UClass_AMenu, &AMenu::StaticClass, TEXT("/Script/StarFighter"), TEXT("AMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
