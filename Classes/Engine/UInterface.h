#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "@{TPL_CLASS_NAME}.generated.h"

/**
 * @class U@{TPL_CLASS_NAME}
 */
UINTERFACE(MinimalAPI)
class @{TPL_MODULE_API} U@{TPL_CLASS_NAME} : public UInterface
{
	GENERATED_BODY()
};

/**
 * @interface I@{TPL_CLASS_NAME}
 */
class I@{TPL_CLASS_NAME}
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
};
