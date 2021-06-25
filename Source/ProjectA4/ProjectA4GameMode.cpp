// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectA4GameMode.h"
#include "ProjectA4Character.h"
#include "UObject/ConstructorHelpers.h"

AProjectA4GameMode::AProjectA4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
