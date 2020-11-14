// Copyright Epic Games, Inc. All Rights Reserved.

#include "cpp_projGameMode.h"
#include "cpp_projCharacter.h"
#include "UObject/ConstructorHelpers.h"

Acpp_projGameMode::Acpp_projGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
