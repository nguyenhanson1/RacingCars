// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GoKart.generated.h"

USTRUCT()
struct FGoKartMove
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY()
		float Throttle;
	UPROPERTY()
		float SteeringThrow;
	UPROPERTY()
		float DeltaTime;
	UPROPERTY()
		float Time;
};

USTRUCT()
struct FGoKartState
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY()
	FTransform Transform;
	UPROPERTY()
	FVector Velocity;
	UPROPERTY()
	FGoKartMove LastMove;

};


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

	void SimulateMove(FGoKartMove Move);

	FVector GetAirResistance();
	FVector GetRollingResistance();

	// The masss of the car (kg).
	UPROPERTY(EditAnywhere)
	float Mass = 1000;

	// The force applied to the car when the throttle is down (N).
	UPROPERTY(EditAnywhere)
	float MaxDrivingForce = 10000;

	// Minimum Radius of the car turning circle at full lock (m).
	UPROPERTY(EditAnywhere)
	float MinTurningRadius = 10;

	// Higher means more drag
	UPROPERTY(EditAnywhere)
	float DragCoefficient = 16;

	// Higher means more rolling resistance
	UPROPERTY(EditAnywhere)
	float RollingResistanceCoefficient = 0.015;
	
	void ApplyRotation(float DeltaTime, float Steering);

	void UpdateLocationFromVelocity(float DeltaTime);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SendMove(FGoKartMove Move);
	
	void MoveForward(float value);
	void MoveRight(float value);


	UFUNCTION()
	void OnRep_ServerState();

	UPROPERTY(Replicated)
	FVector Velocity;

	float Throttle;
	float SteeringThrow;

	UPROPERTY(ReplicatedUsing =OnRep_ServerState)
	FGoKartState ServerState;
};



