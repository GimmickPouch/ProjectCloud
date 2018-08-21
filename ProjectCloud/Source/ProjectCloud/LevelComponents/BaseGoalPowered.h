// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseGoalPowered.generated.h"

USTRUCT(BlueprintType)
struct FGoalPowerData
{
    GENERATED_USTRUCT_BODY();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Data")
        bool ActivationStatus = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Data")
        int GoalPowerIntensity = 1;

public:
    FGoalPowerData()
    {
        ActivationStatus = false;
        GoalPowerIntensity = 1;
    };

    FGoalPowerData(bool activated, int powerIntensity)
    {
        ActivationStatus = activated;
        GoalPowerIntensity = powerIntensity;
    }
};

UCLASS()
class PROJECTCLOUD_API ABaseGoalPowered : public AActor
{
    GENERATED_BODY()
    
public:	
    ABaseGoalPowered();

protected:
    virtual void BeginPlay() override;

    virtual void Tick(float DeltaTime) override;

public:
    virtual void ReactToGoal(FGoalPowerData goalData);
    
    virtual void OnFullyPowered();

    // Variables
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Activation Settings")
        int _goalPowerNeeded;

    int _currentGoalPower;

    bool _isFullyPowered;
};
