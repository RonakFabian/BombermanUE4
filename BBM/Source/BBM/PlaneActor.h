// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlaneActor.generated.h"

UCLASS()
class BBM_API APlaneActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlaneActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere)
	int x;
	
	UPROPERTY(VisibleAnywhere)
	int y;
};
