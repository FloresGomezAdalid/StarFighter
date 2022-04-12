// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Asteroide.generated.h"

UCLASS()
class STARFIGHTER_API AAsteroide : public AActor
{
	GENERATED_BODY()
private:
	float Velocidad;
	float Distanciamaxima;
	float Tamano;
	float Ubicacioniniciox;
	float Ubicacioninicioy;
	float NivelDano;

public:	
	// Sets default values for this actor's properties
	AAsteroide();
	float Ubicacionx;
	float Ubicaciony;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};