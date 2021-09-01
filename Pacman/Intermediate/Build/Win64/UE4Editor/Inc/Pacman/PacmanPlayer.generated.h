// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PACMAN_PacmanPlayer_generated_h
#error "PacmanPlayer.generated.h already included, missing '#pragma once' in PacmanPlayer.h"
#endif
#define PACMAN_PacmanPlayer_generated_h

#define Pacman_Source_Pacman_PacmanPlayer_h_12_SPARSE_DATA
#define Pacman_Source_Pacman_PacmanPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPacmanBeginOverlay);


#define Pacman_Source_Pacman_PacmanPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPacmanBeginOverlay);


#define Pacman_Source_Pacman_PacmanPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacmanPlayer(); \
	friend struct Z_Construct_UClass_APacmanPlayer_Statics; \
public: \
	DECLARE_CLASS(APacmanPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APacmanPlayer)


#define Pacman_Source_Pacman_PacmanPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPacmanPlayer(); \
	friend struct Z_Construct_UClass_APacmanPlayer_Statics; \
public: \
	DECLARE_CLASS(APacmanPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APacmanPlayer)


#define Pacman_Source_Pacman_PacmanPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacmanPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacmanPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanPlayer(APacmanPlayer&&); \
	NO_API APacmanPlayer(const APacmanPlayer&); \
public:


#define Pacman_Source_Pacman_PacmanPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanPlayer(APacmanPlayer&&); \
	NO_API APacmanPlayer(const APacmanPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacmanPlayer)


#define Pacman_Source_Pacman_PacmanPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define Pacman_Source_Pacman_PacmanPlayer_h_9_PROLOG
#define Pacman_Source_Pacman_PacmanPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Source_Pacman_PacmanPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	Pacman_Source_Pacman_PacmanPlayer_h_12_SPARSE_DATA \
	Pacman_Source_Pacman_PacmanPlayer_h_12_RPC_WRAPPERS \
	Pacman_Source_Pacman_PacmanPlayer_h_12_INCLASS \
	Pacman_Source_Pacman_PacmanPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Source_Pacman_PacmanPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Source_Pacman_PacmanPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	Pacman_Source_Pacman_PacmanPlayer_h_12_SPARSE_DATA \
	Pacman_Source_Pacman_PacmanPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Source_Pacman_PacmanPlayer_h_12_INCLASS_NO_PURE_DECLS \
	Pacman_Source_Pacman_PacmanPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class APacmanPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Source_Pacman_PacmanPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
