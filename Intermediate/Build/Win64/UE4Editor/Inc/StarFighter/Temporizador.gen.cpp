// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Temporizador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemporizador() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ATemporizador_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ATemporizador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void ATemporizador::StaticRegisterNativesATemporizador()
	{
	}
	UClass* Z_Construct_UClass_ATemporizador_NoRegister()
	{
		return ATemporizador::StaticClass();
	}
	struct Z_Construct_UClass_ATemporizador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATemporizador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemporizador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Temporizador.h" },
		{ "ModuleRelativePath", "Temporizador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATemporizador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemporizador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATemporizador_Statics::ClassParams = {
		&ATemporizador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATemporizador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATemporizador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATemporizador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATemporizador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATemporizador, 946019253);
	template<> STARFIGHTER_API UClass* StaticClass<ATemporizador>()
	{
		return ATemporizador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATemporizador(Z_Construct_UClass_ATemporizador, &ATemporizador::StaticClass, TEXT("/Script/StarFighter"), TEXT("ATemporizador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATemporizador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
