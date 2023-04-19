// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fish.h"
#include "Salmon.generated.h"

/**
 * 
 */
UCLASS()
class CS370_FINAL_API ASalmon : public AFish
{
	GENERATED_BODY()
	
public:
	ASalmon() {
		size = 3;
		value = 80;
		catchDifficulty = 3;
		type = "Salmon";
	}
};
