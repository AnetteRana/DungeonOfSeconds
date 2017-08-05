// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class DUNGEONOFSECONDS_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
	
private:
	int32 CopperCoins = 0;
	int32 Seconds = 30;

public:
	void CopperCoinsSetter(int32 Coins);
	int32 CopperCoinsGetter();
	
	
};
