// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseGoal.generated.h"

UCLASS()
class PROJECTCLOUD_API ABaseGoal : public AActor
{
    GENERATED_BODY()
    
public:
    ABaseGoal();

protected:
    virtual void BeginPlay() override;

public:	
    virtual void Tick(float DeltaTime) override;

    virtual void HitByProjectile(const AActor* projectile);

    virtual void AttemptActivation();

protected:
    virtual void NotifyLinkedComponents(bool poweredStatus);

    // Variables
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Settings")
        TArray<class ABaseGoalPowered*> _linkedComponents;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Settings")
        int _powerIntensity;

    bool _isActivated;
    
};
