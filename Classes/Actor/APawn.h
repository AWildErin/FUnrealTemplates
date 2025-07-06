#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class A@{TPL_CLASS_NAME}
 */
UCLASS()
class @{TPL_MODULE_API} A@{TPL_CLASS_NAME} : public APawn
{
	GENERATED_BODY()

public:
	A@{TPL_CLASS_NAME}();

	// Begin AActor Interface
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	// End AActor Interface

protected:
	// Begin APawn Interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End APawn Interface
};
