// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/StrategyRun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyRun() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AStrategyRun_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AStrategyRun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_UIStrategy_NoRegister();
// End Cross Module References
	void AStrategyRun::StaticRegisterNativesAStrategyRun()
	{
	}
	UClass* Z_Construct_UClass_AStrategyRun_NoRegister()
	{
		return AStrategyRun::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyRun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyRun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyRun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyRun.h" },
		{ "ModuleRelativePath", "StrategyRun.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyRun_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStrategy_NoRegister, (int32)VTABLE_OFFSET(AStrategyRun, IIStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyRun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyRun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyRun_Statics::ClassParams = {
		&AStrategyRun::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStrategyRun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyRun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyRun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyRun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyRun, 845375935);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AStrategyRun>()
	{
		return AStrategyRun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyRun(Z_Construct_UClass_AStrategyRun, &AStrategyRun::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AStrategyRun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyRun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
