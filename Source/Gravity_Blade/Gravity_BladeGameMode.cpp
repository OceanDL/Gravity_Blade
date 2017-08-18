// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Gravity_BladeGameMode.h"
#include "Gravity_BladeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGravity_BladeGameMode::AGravity_BladeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
