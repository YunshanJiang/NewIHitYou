// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NewIHitYouGameMode.h"
#include "NewIHitYouCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANewIHitYouGameMode::ANewIHitYouGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
