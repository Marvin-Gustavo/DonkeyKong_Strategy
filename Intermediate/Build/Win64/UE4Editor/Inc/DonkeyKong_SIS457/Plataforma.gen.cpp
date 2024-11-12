// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Plataforma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataforma() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APlataforma_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APlataforma();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void APlataforma::StaticRegisterNativesAPlataforma()
	{
	}
	UClass* Z_Construct_UClass_APlataforma_NoRegister()
	{
		return APlataforma::StaticClass();
	}
	struct Z_Construct_UClass_APlataforma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteIzquierdo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteIzquierdo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteDerecho_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteDerecho;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlataforma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataforma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Plataforma.h" },
		{ "ModuleRelativePath", "Plataforma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataforma_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Velocidad de la plataforma\n" },
		{ "ModuleRelativePath", "Plataforma.h" },
		{ "ToolTip", "Velocidad de la plataforma" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlataforma_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlataforma, Velocidad), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlataforma_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlataforma_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteIzquierdo_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// L?mites de movimiento\n" },
		{ "ModuleRelativePath", "Plataforma.h" },
		{ "ToolTip", "L?mites de movimiento" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteIzquierdo = { "LimiteIzquierdo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlataforma, LimiteIzquierdo), METADATA_PARAMS(Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteIzquierdo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteIzquierdo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteDerecho_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "Plataforma.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteDerecho = { "LimiteDerecho", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlataforma, LimiteDerecho), METADATA_PARAMS(Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteDerecho_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteDerecho_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlataforma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataforma_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteIzquierdo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlataforma_Statics::NewProp_LimiteDerecho,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlataforma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataforma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlataforma_Statics::ClassParams = {
		&APlataforma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlataforma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlataforma_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlataforma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlataforma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlataforma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlataforma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlataforma, 3187582770);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<APlataforma>()
	{
		return APlataforma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlataforma(Z_Construct_UClass_APlataforma, &APlataforma::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("APlataforma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlataforma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
