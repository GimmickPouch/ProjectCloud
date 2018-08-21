// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseExit.h"
#include "Engine.h" // REMOVE after debug removed


ABaseExit::ABaseExit()
{
    PrimaryActorTick.bCanEverTick = true;

}

void ABaseExit::BeginPlay()
{
    Super::BeginPlay();
    
}

void ABaseExit::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ABaseExit::ReactToGoal(FGoalPowerData goalData)
{
    Super::ReactToGoal(goalData);
}

void ABaseExit::OnFullyPowered()
{
    Super::OnFullyPowered();

    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("EXIT GATE HAS BEEN POWERED"));
}