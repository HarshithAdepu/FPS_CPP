// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPS_CPPGameModeBase.h"

void AFPS_CPPGameModeBase::StartPlay()
{
	Super::StartPlay();
	check(GEngine != nullptr);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("This is a test"));
}