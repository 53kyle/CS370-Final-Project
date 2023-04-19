// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Fish.generated.h"

UCLASS()
class CS370_FINAL_API AFish : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFish();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fish Properties")
		FString type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fish Properties")
		int value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fish Properties")
		int size;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fish Properties")
		int catchDifficulty;

	FString GetType() const { return type; }
	int GetValue() const { return value; }
	int GetSize() const { return size; }
	int GetCatchDifficulty() const { return catchDifficulty; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
