// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GoKartMovementComponent.h"
#include "GoKart.generated.h"






UCLASS()
class RACINGMULTGAME_API AGoKart : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGoKart();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	void ClearAcknowledgeMoves(FGoKartMove LastMove);
	
	void MoveForward(float value);
	void MoveRight(float value);

	UPROPERTY(EditAnywhere)
	UGoKartMovementComponent* MovementComp;

	UFUNCTION()
	void OnRep_ServerState();

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SendMove(FGoKartMove Move);

	UPROPERTY(ReplicatedUsing =OnRep_ServerState)
	FGoKartState ServerState;

	TArray<FGoKartMove> UnacknowlegedMoves;
};



