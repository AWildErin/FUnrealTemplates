#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"

#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class U@{TPL_CLASS_NAME}
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class @{TPL_MODULE_API} U@{TPL_CLASS_NAME} : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	U@{TPL_CLASS_NAME}();

	// Begin UActorComponent Interface
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	// End UActorComponent Interface
};
