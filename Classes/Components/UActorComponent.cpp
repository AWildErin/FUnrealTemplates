#include "@{TPL_CLASS_RELPATH}@{TPL_CLASS_NAME}.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(@{TPL_CLASS_NAME})

U@{TPL_CLASS_NAME}::U@{TPL_CLASS_NAME}()
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void U@{TPL_CLASS_NAME}::BeginPlay()
{
	Super::BeginPlay();
}

void U@{TPL_CLASS_NAME}::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
