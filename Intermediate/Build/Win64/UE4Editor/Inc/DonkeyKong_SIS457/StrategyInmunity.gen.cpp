// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/StrategyInmunity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyInmunity() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AStrategyInmunity_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AStrategyInmunity();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_UIStrategy_NoRegister();
// End Cross Module References
	void AStrategyInmunity::StaticRegisterNativesAStrategyInmunity()
	{
	}
	UClass* Z_Construct_UClass_AStrategyInmunity_NoRegister()
	{
		return AStrategyInmunity::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyInmunity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyInmunity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyInmunity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyInmunity.h" },
		{ "ModuleRelativePath", "StrategyInmunity.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyInmunity_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStrategy_NoRegister, (int32)VTABLE_OFFSET(AStrategyInmunity, IIStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyInmunity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyInmunity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyInmunity_Statics::ClassParams = {
		&AStrategyInmunity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrategyInmunity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyInmunity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyInmunity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyInmunity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyInmunity, 2350762183);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AStrategyInmunity>()
	{
		return AStrategyInmunity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyInmunity(Z_Construct_UClass_AStrategyInmunity, &AStrategyInmunity::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AStrategyInmunity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyInmunity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
