// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PoweredByLinks.generated.h"

UINTERFACE()
class UPoweredByLinks : public UInterface
{
    GENERATED_BODY()
};

class IPoweredByLinks
{
    GENERATED_BODY()

public:
    UFUNCTION(Category = "Link Reaction")
        virtual void ReactToLink(bool activated) PURE_VIRTUAL(IPoweredByLinks::ReactToLink, ;);
};