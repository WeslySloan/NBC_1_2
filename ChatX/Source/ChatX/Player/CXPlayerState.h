// CXPlayerState.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CXPlayerState.generated.h"

/**
 *
 */
UCLASS()
class CHATX_API ACXPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	FString PlayerNameString;

};
