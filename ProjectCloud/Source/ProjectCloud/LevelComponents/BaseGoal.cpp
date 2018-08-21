// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGoal.h"
#include "ProjectCloudProjectile.h"
#include "LevelComponents/BaseGoalPowered.h"


ABaseGoal::ABaseGoal()
{
    PrimaryActorTick.bCanEverTick = true;

    _powerIntensity = 1;
}

void ABaseGoal::BeginPlay()
{
    Super::BeginPlay();
    
    _isActivated = false;
}

void ABaseGoal::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ABaseGoal::HitByProjectile(const AActor* projectile)
{
    if (projectile && projectile->IsA(AProjectCloudProjectile::StaticClass()))
    {
        AttemptActivation();
    }
}

void ABaseGoal::AttemptActivation()
{
    _isActivated = true;
    NotifyLinkedComponents(_isActivated);
}

void ABaseGoal::NotifyLinkedComponents(bool poweredStatus)
{
    if (_linkedComponents.Num() > 0)
    {
        for (int i = 0; i < _linkedComponents.Num(); i++)
        {
            if (_linkedComponents[i] != nullptr)
            {
                _linkedComponents[i]->ReactToGoal(FGoalPowerData(poweredStatus, _powerIntensity));
            }
        }
    }
}