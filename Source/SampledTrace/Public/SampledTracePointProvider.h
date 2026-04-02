// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SampledTracePointProvider.generated.h"

UINTERFACE()
class SAMPLEDTRACE_API USampledTracePointProvider : public UInterface
{
    GENERATED_BODY()
};

/**
 * 
 */
class SAMPLEDTRACE_API ISampledTracePointProvider
{
    GENERATED_BODY()

public:

    virtual bool OverrideSamplePoint(
        FName SocketName,
        const FTransform& BoneRelativeToRoot,
        const USkeletalMeshSocket* Socket,
        FVector& OutLocalPosition) const = 0;

};