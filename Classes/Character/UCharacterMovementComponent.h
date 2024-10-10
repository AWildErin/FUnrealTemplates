#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class U@{TPL_CLASS_NAME}
 */
UCLASS()
class @{TPL_MODULE_API} U@{TPL_CLASS_NAME} : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:

	// Begin UMovementComponent Interface
	virtual float GetMaxSpeed() const override;
	// End UMovementComponent Interface
};
