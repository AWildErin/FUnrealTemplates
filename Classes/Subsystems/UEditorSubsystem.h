#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"

#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class U@{TPL_CLASS_NAME}
 */
UCLASS(BlueprintType)
class @{TPL_MODULE_API} U@{TPL_CLASS_NAME} : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	// Begin USubsystem Interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	// End USubsystem Interface
};
