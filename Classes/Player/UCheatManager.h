#pragma once

#include "GameFramework/CheatManager.h"

#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class U@{TPL_CLASS_NAME}
 */
UCLASS(config = Game, Within = PlayerController, MinimalAPI)
class @{TPL_MODULE_API} U@{TPL_CLASS_NAME} : public UCheatManager
{
	GENERATED_BODY()
};