// Fill out your copyright notice in the Description page of Project Settings.

#include "DungeonOfSeconds.h"
#include "MySaveGame.h"




void UMySaveGame::CopperCoinsSetter(int32 Coins)
{
	CopperCoins = Coins;
	return;
}


int32 UMySaveGame::CopperCoinsGetter()
{
	return CopperCoins;
}