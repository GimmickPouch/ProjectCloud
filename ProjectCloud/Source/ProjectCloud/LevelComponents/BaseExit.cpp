// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseExit.h"


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

void ABaseExit::ReactToLink(bool activated)
{

}