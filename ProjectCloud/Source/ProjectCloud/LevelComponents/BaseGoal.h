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

    virtual void HitByProjectile(AActor& projectile);

    virtual void AttemptActivation();

    // Variables
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Link")
        TArray<AActor*> _linkedComponents;

    bool _bIsActivated;
    
};
