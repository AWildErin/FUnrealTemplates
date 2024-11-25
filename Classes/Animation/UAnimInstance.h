#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"

#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class U@{TPL_CLASS_NAME}
 */
UCLASS()
class @{TPL_MODULE_API} U@{TPL_CLASS_NAME} : public UAnimInstance
{
	GENERATED_BODY()
public:

	// Begin UAnimInstaance Interface
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	// End UAnimInstaance Interface
};
