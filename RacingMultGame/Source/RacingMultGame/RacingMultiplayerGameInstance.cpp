// Fill out your copyright notice in the Description page of Project Settings.


#include "RacingMultiplayerGameInstance.h"
#include "Blueprint/UserWidget.h"

#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "OnlineSessionInterface.h"


URacingMultiplayerGameInstance::URacingMultiplayerGameInstance(const FObjectInitializer & ObjectIntializer) 
{
	ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/Widget/WBP_MainMenu"));
	if (ensure(MenuBPClass.Class == nullptr)) return;

	MenuClass = MenuBPClass.Class;
	
}

void URacingMultiplayerGameInstance::Init()
{
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Found System %s"), *Subsystem->GetSubsystemName().ToString());
	

	}
}

void URacingMultiplayerGameInstance::LoadMenu()
{
	if (ensure(MenuClass == nullptr)) return;

	UUserWidget* Menu = CreateWidget<UUserWidget>(this, MenuClass);
	
	if (ensure(Menu == nullptr)) return;

	Menu->AddToViewport();

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (ensure(PlayerController == nullptr)) return;

	FInputModeUIOnly InputModeUIOnly;
	InputModeUIOnly.SetWidgetToFocus(Menu->TakeWidget());
	InputModeUIOnly.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	PlayerController->SetInputMode(InputModeUIOnly);

	PlayerController->bShowMouseCursor = true;
}


void URacingMultiplayerGameInstance::Host()
{
	UEngine* Engine = GetEngine();
	if (ensure(Engine == nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));

	UWorld* World = GetWorld();
	if (ensure(World == nullptr)) return;
	
	World->ServerTravel("/Game/Maps/VehicleExampleMap");
}

void URacingMultiplayerGameInstance::Join(const FString & Address)
{
	UEngine* Engine = GetEngine();
	if (ensure(Engine == nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Joining %s"),*Address);

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (ensure(PlayerController == nullptr)) return;

	PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
}




