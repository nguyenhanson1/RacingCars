// Fill out your copyright notice in the Description page of Project Settings.


#include "RacingMultiplayerGameInstance.h"
#include "Blueprint/UserWidget.h"

#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"


URacingMultiplayerGameInstance::URacingMultiplayerGameInstance(const FObjectInitializer & ObjectIntializer) 
{
	ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/Widget/WBP_MainMenu"));
	if (!ensure(MenuBPClass.Class != nullptr)) return;

	MenuClass = MenuBPClass.Class;
	
}

void URacingMultiplayerGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Found Class %s"), *MenuClass->GetName());
}

void URacingMultiplayerGameInstance::LoadMenu()
{
	if (!ensure(MenuClass != nullptr)) return;

	UUserWidget* Menu = CreateWidget<UUserWidget>(this, MenuClass);
	
	if (!ensure(Menu != nullptr)) return;

	Menu->AddToViewport();
}


void URacingMultiplayerGameInstance::Host()
{
	UEngine* Engine = GetEngine();

}

void URacingMultiplayerGameInstance::Join(const FString & Address)
{
}
