#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class A@{TPL_CLASS_NAME}
 */
UCLASS()
class @{TPL_MODULE_API} A@{TPL_CLASS_NAME} : public AActor
{
	GENERATED_BODY()

public:
	A@{TPL_CLASS_NAME}();

	// Begin AActor Interface
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	// End AActor Interface
};
