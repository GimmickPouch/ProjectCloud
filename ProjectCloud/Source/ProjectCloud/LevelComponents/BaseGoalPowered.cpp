// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGoalPowered.h"


ABaseGoalPowered::ABaseGoalPowered()
{
    PrimaryActorTick.bCanEverTick = true;

    _goalPowerNeeded = 1;
}

void ABaseGoalPowered::BeginPlay()
{
    Super::BeginPlay();
    
    _isFullyPowered = false;
}

void ABaseGoalPowered::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ABaseGoalPowered::ReactToGoal(FGoalPowerData goalData)
{
    if (goalData.ActivationStatus)
    {
        _currentGoalPower += goalData.GoalPowerIntensity;
    }

    if (_currentGoalPower >= _goalPowerNeeded)
    {
        _isFullyPowered = true;
    }
}

void ABaseGoalPowered::OnFullyPowered()
{

}
