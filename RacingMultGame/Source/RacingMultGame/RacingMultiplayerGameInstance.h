// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "RacingMultiplayerGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class RACINGMULTGAME_API URacingMultiplayerGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	
	URacingMultiplayerGameInstance(const FObjectInitializer &  ObjectInitializer);

	virtual void Init();

	UFUNCTION(BlueprintCallable)
	void LoadMenu();

	UFUNCTION(Exec)
	void Host();

	UFUNCTION(Exec)
	void Join(const FString& Address);

private:
	TSubclassOf<class UUserWidget> MenuClass;

};
