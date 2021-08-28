// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Pacdot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacdot() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacdot_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacdot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void APacdot::StaticRegisterNativesAPacdot()
	{
	}
	UClass* Z_Construct_UClass_APacdot_NoRegister()
	{
		return APacdot::StaticClass();
	}
	struct Z_Construct_UClass_APacdot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacdotDisplayMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacdotDisplayMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacdotCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacdotCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSuperPacdot_MetaData[];
#endif
		static void NewProp_bIsSuperPacdot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSuperPacdot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacdot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacdot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pacdot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Pacdot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh_MetaData[] = {
		{ "Category", "Pacdot" },
		{ "Comment", "//??(??\xca\xbe????\xd7\xb2????)\n//\xca\xb3????\xca\xbe??????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pacdot.h" },
		{ "ToolTip", "??(??\xca\xbe????\xd7\xb2????)\n\xca\xb3????\xca\xbe??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh = { "PacdotDisplayMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacdot, PacdotDisplayMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollection_MetaData[] = {
		{ "Category", "Pacdot" },
		{ "Comment", "//\xca\xb3????\xd7\xb2????????\xd7\xb4??\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pacdot.h" },
		{ "ToolTip", "\xca\xb3????\xd7\xb2????????\xd7\xb4??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollection = { "PacdotCollection", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacdot, PacdotCollection), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacdot_Statics::NewProp_bIsSuperPacdot_MetaData[] = {
		{ "Category", "Pacdot" },
		{ "Comment", "//bool???\xcd\xa3??\xd0\xb6??\xc7\xb7?\xce\xaa????\xca\xb3??\n" },
		{ "ModuleRelativePath", "Pacdot.h" },
		{ "ToolTip", "bool???\xcd\xa3??\xd0\xb6??\xc7\xb7?\xce\xaa????\xca\xb3??" },
	};
#endif
	void Z_Construct_UClass_APacdot_Statics::NewProp_bIsSuperPacdot_SetBit(void* Obj)
	{
		((APacdot*)Obj)->bIsSuperPacdot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APacdot_Statics::NewProp_bIsSuperPacdot = { "bIsSuperPacdot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APacdot), &Z_Construct_UClass_APacdot_Statics::NewProp_bIsSuperPacdot_SetBit, METADATA_PARAMS(Z_Construct_UClass_APacdot_Statics::NewProp_bIsSuperPacdot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacdot_Statics::NewProp_bIsSuperPacdot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacdot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacdot_Statics::NewProp_PacdotDisplayMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacdot_Statics::NewProp_PacdotCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacdot_Statics::NewProp_bIsSuperPacdot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacdot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacdot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacdot_Statics::ClassParams = {
		&APacdot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APacdot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APacdot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacdot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacdot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacdot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacdot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacdot, 250683147);
	template<> PACMAN_API UClass* StaticClass<APacdot>()
	{
		return APacdot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacdot(Z_Construct_UClass_APacdot, &APacdot::StaticClass, TEXT("/Script/Pacman"), TEXT("APacdot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacdot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
