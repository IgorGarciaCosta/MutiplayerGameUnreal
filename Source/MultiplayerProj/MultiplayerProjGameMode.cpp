// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerProjGameMode.h"
#include "MultiplayerProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerProjGameMode::AMultiplayerProjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AMultiplayerProjGameMode::HostLANGame()
{
	GetWorld()->ServerTravel("Game/ThirdPerson/Maps/ThirdPersonMap?listen"); 
}

void AMultiplayerProjGameMode::JoinLANGame()
{
	APlayerController *PC =GetGameInstance()->GetFirstLocalPlayerController();
	if (PC) {
		PC->ClientTravel("192.168.15.86", TRAVEL_Absolute);
	}

}
