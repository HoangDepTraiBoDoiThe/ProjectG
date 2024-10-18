// Neveleenin Studio copyright notice


#include "BasePlayerController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ProjectG/Character/Player/BasePlayerCharacter.h"


void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	Subsystem->AddMappingContext(DefaultMappingContext, 0);
	
	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::Look);
}

void ABasePlayerController::Move(const FInputActionValue& InputActionValue)
{
	FVector Vector = InputActionValue.Get<FVector>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	GetBasePlayerCharacter()->AddMovementInput(ForwardDirection, Vector.Y);
	GetBasePlayerCharacter()->AddMovementInput(RightDirection, Vector.X);
}

void ABasePlayerController::Look(const FInputActionValue& InputActionValue)
{
	const FVector2d LookVector = InputActionValue.Get<FVector2d>();
	GetBasePlayerCharacter()->AddControllerYawInput(LookVector.X);
	GetBasePlayerCharacter()->AddControllerPitchInput(LookVector.Y);
}

ABaseCharacter* ABasePlayerController::GetBasePlayerCharacter()
{
	if (!IsValid(BasePlayerCharacter))
	{
		BasePlayerCharacter = Cast<ABasePlayerCharacter>(GetPawn());
	}
	return BasePlayerCharacter;
}
