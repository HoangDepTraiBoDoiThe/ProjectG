// Neveleenin Studio copyright notice

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

class ABasePlayerCharacter;
class ABaseCharacter;
/**
 * 
 */
class UInputAction;
class UInputMappingContext;

UCLASS()
class PROJECTG_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:


protected:
	virtual void SetupInputComponent() override;
	void Move(const FInputActionValue& InputActionValue);
	void Look(const FInputActionValue& InputActionValue);
	ABaseCharacter* GetBasePlayerCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

private:
	TObjectPtr<ABasePlayerCharacter> BasePlayerCharacter;
	
};
