// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ITimerObserver.h"
#include "DonkeyKong_SIS457Character.generated.h"

UCLASS(config=Game)
class ADonkeyKong_SIS457Character : public ACharacter, public IITimerObserver
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface


public:
	ADonkeyKong_SIS457Character();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

protected:
	virtual void BeginPlay() override;

private:
	class IIStrategy* habilidades;
	class AStrategyRun* run;
	class AStrategyFire* fire;
	class AStrategyInmunity* inmunity;

	FTimerHandle SpeedTimerHandle;
	FTimerHandle JumpTimerHandle;
	FTimerHandle InvisibilityTimerHandle;

public:
	void Habilidad1();
	void Habilidad2();
	void Habilidad3();
	void OnTimerReachedZero();   // M�todo para recibir notificaci�n desde TimerManager

	void SetPositionObjetivo(FVector NuevaPosicion); // M�todo para establecer la posici�n objetivo

public:
	void EstablecerEstrategia(AActor* _strategys);
	void ResetSpeed();
	void ResetJumpHeight();
	void ResetVisibility();
private:
	FVector PositionObjetivo;   // Posici�n objetivo para el personaje
};