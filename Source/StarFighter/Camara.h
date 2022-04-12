// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camara.generated.h"

UCLASS()
class STARFIGHTER_API ACamara : public AActor
{
	GENERATED_BODY()
private:
	float Velocidad;
	float Ubicacioniniciox;
	float Ubicacioninicioy;

public:	
	// Sets default values for this actor's properties
	ACamara();
	float Ubicacionx;
	float Ubicaciony;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
