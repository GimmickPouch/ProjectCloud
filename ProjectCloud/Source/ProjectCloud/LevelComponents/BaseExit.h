// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/PoweredByLinks.h"
#include "BaseGoalPowered.h"
#include "BaseExit.generated.h"

UCLASS()
class PROJECTCLOUD_API ABaseExit : public ABaseGoalPowered
{
    GENERATED_BODY()
    
public:	
    ABaseExit();

protected:
    virtual void BeginPlay() override;

public:	
    virtual void Tick(float DeltaTime) override;

    virtual void ReactToGoal(FGoalPowerData goalData) override;

    virtual void OnFullyPowered() override;
};
