// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Potenciador.generated.h"

UCLASS()
class STARFIGHTER_API APotenciador : public AActor
{
	GENERATED_BODY()
private:
	float Tamano;
	float Ubicacioniniciox;
	float Ubicacioninicioy;

public:	
	// Sets default values for this actor's properties
	APotenciador();
	float Ubicacionx;
	float Ubicaciony;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};