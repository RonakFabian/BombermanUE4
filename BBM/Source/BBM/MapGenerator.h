// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "MapGenerator.generated.h"

UCLASS()
class BBM_API AMapGenerator : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMapGenerator();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> PlaneActor;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> CubeActor;


	UPROPERTY(EditAnywhere)
	int NumberOfTilesX;

	UPROPERTY(EditAnywhere)
	int NumberOfTilesY;

	UPROPERTY(EditAnywhere)
	int LengthBetweenTiles;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> Grid;


	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FVector GetTilePosition(const int&  x, const  int & y);
private:
	void GenerateMap();
	FName MapFolderPath;
};
