// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fish.h"
#include "Bluegill.generated.h"

/**
 * 
 */
UCLASS()
class CS370_FINAL_API ABluegill : public AFish
{
	GENERATED_BODY()
	
public:
	ABluegill() {
		size = 1;
		value = 20;
		catchDifficulty = 1;
		type = "Bluegill";
	}
};
