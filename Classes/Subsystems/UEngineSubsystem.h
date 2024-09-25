#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"

#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class U@{TPL_CLASS_NAME}
 */
UCLASS(BlueprintType)
class @{TPL_MODULE_API} U@{TPL_CLASS_NAME} : public UEngineSubsystem
{
	GENERATED_BODY()

public:
	// Begin USubsystem Interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	// End USubsystem Interface
};
