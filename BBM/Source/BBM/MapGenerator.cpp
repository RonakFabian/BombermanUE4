// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGenerator.h"
#include "PlaneActor.h"


// Sets default values
AMapGenerator::AMapGenerator()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MapFolderPath = FName(TEXT("GeneratedMap"));
}

// Called when the game starts or when spawned
void AMapGenerator::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AMapGenerator"));
	GenerateMap();
}

// Called every frame
void AMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector AMapGenerator::GetTilePosition(const int& x, const int& y)
{
	FVector temp=FVector(0);
	return  temp;
}

void AMapGenerator::GenerateMap()
{
	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	FVector locationToSpawn;
	FVector currentLocation;
	currentLocation = GetActorLocation();

	for (int i = 0; i < NumberOfTilesX; i++)
	{
		for (int j = 0; j < NumberOfTilesX; j++)
		{
			locationToSpawn = FVector(currentLocation.X + i * LengthBetweenTiles,
			                          currentLocation.Y + j * LengthBetweenTiles, 0.0f);

			//Borders
			if (i == 0 || j == 0 || i == NumberOfTilesX - 1 || j == NumberOfTilesY - 1)
			{
				AActor* cubeInstance = GetWorld()->SpawnActor<AActor>(CubeActor, locationToSpawn, Rotation, SpawnInfo);
				cubeInstance->SetFolderPath(MapFolderPath);
				
			}
			//Cubes placed every even tiles to mimic the classic Bomberman level
			else if (i > 0 && j > 0 && i < NumberOfTilesX - 1 && j < NumberOfTilesY - 1 && i % 2 == 0 && j % 2 == 0)
			{
				AActor* cubeInstance = GetWorld()->SpawnActor<AActor>(CubeActor, locationToSpawn, Rotation, SpawnInfo);
				cubeInstance->SetFolderPath(MapFolderPath);

				
			}
			else
			{
				//Spawn Tiles
				AActor* planeInstance = GetWorld()->SpawnActor<AActor>(PlaneActor, locationToSpawn, Rotation, SpawnInfo);
				planeInstance->SetFolderPath(MapFolderPath);

				Cast<APlaneActor>(planeInstance)->x=i;
				Cast<APlaneActor>(planeInstance)->y=j;
				Grid.Add(planeInstance);
				
			}

			
		}
	}
}
