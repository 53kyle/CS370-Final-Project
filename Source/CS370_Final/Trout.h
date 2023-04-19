// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fish.h"
#include "Trout.generated.h"

/**
 * 
 */
UCLASS()
class CS370_FINAL_API ATrout : public AFish
{
	GENERATED_BODY()

public:
	ATrout() {
		size = 2;
		value = 40;
		catchDifficulty = 2;
		type = "Trout";
	}
	
};
