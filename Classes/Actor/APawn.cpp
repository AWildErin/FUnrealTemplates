#include "@{TPL_CLASS_RELPATH}@{TPL_CLASS_NAME}.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(@{TPL_CLASS_NAME})

A@{TPL_CLASS_NAME}::A@{TPL_CLASS_NAME}()
{
	PrimaryActorTick.bCanEverTick = true;
}

void A@{TPL_CLASS_NAME}::BeginPlay()
{
	Super::BeginPlay();
}

void A@{TPL_CLASS_NAME}::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void A@{TPL_CLASS_NAME}::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

