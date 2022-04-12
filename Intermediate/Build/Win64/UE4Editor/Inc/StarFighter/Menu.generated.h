// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_Menu_generated_h
#error "Menu.generated.h already included, missing '#pragma once' in Menu.h"
#endif
#define STARFIGHTER_Menu_generated_h

#define StarFighter_Source_StarFighter_Menu_h_12_SPARSE_DATA
#define StarFighter_Source_StarFighter_Menu_h_12_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_Menu_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_Menu_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMenu(); \
	friend struct Z_Construct_UClass_AMenu_Statics; \
public: \
	DECLARE_CLASS(AMenu, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AMenu)


#define StarFighter_Source_StarFighter_Menu_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMenu(); \
	friend struct Z_Construct_UClass_AMenu_Statics; \
public: \
	DECLARE_CLASS(AMenu, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AMenu)


#define StarFighter_Source_StarFighter_Menu_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMenu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMenu(AMenu&&); \
	NO_API AMenu(const AMenu&); \
public:


#define StarFighter_Source_StarFighter_Menu_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMenu(AMenu&&); \
	NO_API AMenu(const AMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMenu)


#define StarFighter_Source_StarFighter_Menu_h_12_PRIVATE_PROPERTY_OFFSET
#define StarFighter_Source_StarFighter_Menu_h_9_PROLOG
#define StarFighter_Source_StarFighter_Menu_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Menu_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Menu_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_Menu_h_12_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_Menu_h_12_INCLASS \
	StarFighter_Source_StarFighter_Menu_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Menu_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Menu_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Menu_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_Menu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Menu_h_12_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Menu_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class AMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_Menu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
