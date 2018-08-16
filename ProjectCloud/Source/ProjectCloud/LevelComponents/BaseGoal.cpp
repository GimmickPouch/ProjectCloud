// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGoal.h"


ABaseGoal::ABaseGoal()
{
    PrimaryActorTick.bCanEverTick = true;

}

void ABaseGoal::BeginPlay()
{
    Super::BeginPlay();
    
    _bIsActivated = false;
}

void ABaseGoal::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ABaseGoal::HitByProjectile(AActor& projectile)
{

}

void ABaseGoal::AttemptActivation()
{
    _bIsActivated = true;
}