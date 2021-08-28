// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pacdot.generated.h"

UCLASS(Blueprintable)
class PACMAN_API APacdot : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APacdot();

	//宏(显示与碰撞组件)
	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite)
		//食物显示网格体
		class UStaticMeshComponent* PacdotDisplayMesh;

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite)
		//食物碰撞组件（球状）
		class USphereComponent* PacdotCollection;

	//bool类型，判断是否为超级食物
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		bool bIsSuperPacdot = false;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
