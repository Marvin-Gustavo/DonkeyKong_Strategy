// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONKEYKONG_SIS457_IStrategy_generated_h
#error "IStrategy.generated.h already included, missing '#pragma once' in IStrategy.h"
#endif
#define DONKEYKONG_SIS457_IStrategy_generated_h

#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_SPARSE_DATA
#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_RPC_WRAPPERS
#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_SIS457_API UIStrategy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIStrategy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_SIS457_API, UIStrategy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIStrategy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_SIS457_API UIStrategy(UIStrategy&&); \
	DONKEYKONG_SIS457_API UIStrategy(const UIStrategy&); \
public:


#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_SIS457_API UIStrategy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_SIS457_API UIStrategy(UIStrategy&&); \
	DONKEYKONG_SIS457_API UIStrategy(const UIStrategy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_SIS457_API, UIStrategy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIStrategy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIStrategy)


#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIStrategy(); \
	friend struct Z_Construct_UClass_UIStrategy_Statics; \
public: \
	DECLARE_CLASS(UIStrategy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DonkeyKong_SIS457"), DONKEYKONG_SIS457_API) \
	DECLARE_SERIALIZER(UIStrategy)


#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_GENERATED_UINTERFACE_BODY() \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_GENERATED_UINTERFACE_BODY() \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIStrategy() {} \
public: \
	typedef UIStrategy UClassType; \
	typedef IIStrategy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIStrategy() {} \
public: \
	typedef UIStrategy UClassType; \
	typedef IIStrategy ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_10_PROLOG
#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_SPARSE_DATA \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_RPC_WRAPPERS \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_SPARSE_DATA \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_SIS457_API UClass* StaticClass<class UIStrategy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_SIS457_master_Source_DonkeyKong_SIS457_IStrategy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS