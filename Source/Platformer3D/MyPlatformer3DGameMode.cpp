// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlatformer3DGameMode.h"

AMyPlatformer3DGameModeBase::AMyPlatformer3DGameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/3dcontroller/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
