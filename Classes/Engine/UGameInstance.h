#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"

#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class U@{TPL_CLASS_NAME}
 */
UCLASS()
class @{TPL_MODULE_API} U@{TPL_CLASS_NAME} : public UGameInstance
{
	GENERATED_BODY()

public:
    U@{TPL_CLASS_NAME}(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	// Begin UGameInstance Interface
	virtual void Init() override;
	virtual void Shutdown() override;
	// End UGameInstance Interface
};
