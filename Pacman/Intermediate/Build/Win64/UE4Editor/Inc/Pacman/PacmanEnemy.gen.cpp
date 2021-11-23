// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/PacmanEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanEnemy() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacmanEnemy_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacmanEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APacmanEnemy::StaticRegisterNativesAPacmanEnemy()
	{
	}
	UClass* Z_Construct_UClass_APacmanEnemy_NoRegister()
	{
		return APacmanEnemy::StaticClass();
	}
	struct Z_Construct_UClass_APacmanEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyDisplayMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyDisplayMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PacmanEnemy.h" },
		{ "ModuleRelativePath", "PacmanEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanEnemy_Statics::NewProp_EnemyDisplayMesh_MetaData[] = {
		{ "Category", "PacmanEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PacmanEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanEnemy_Statics::NewProp_EnemyDisplayMesh = { "EnemyDisplayMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanEnemy, EnemyDisplayMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanEnemy_Statics::NewProp_EnemyDisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanEnemy_Statics::NewProp_EnemyDisplayMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacmanEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanEnemy_Statics::NewProp_EnemyDisplayMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacmanEnemy_Statics::ClassParams = {
		&APacmanEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APacmanEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APacmanEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacmanEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacmanEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacmanEnemy, 768401725);
	template<> PACMAN_API UClass* StaticClass<APacmanEnemy>()
	{
		return APacmanEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacmanEnemy(Z_Construct_UClass_APacmanEnemy, &APacmanEnemy::StaticClass, TEXT("/Script/Pacman"), TEXT("APacmanEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
