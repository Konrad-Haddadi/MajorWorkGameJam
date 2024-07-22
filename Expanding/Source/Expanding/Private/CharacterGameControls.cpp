// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/InputComponent.h"
#include "CharacterGameControls.h"

// Sets default values
ACharacterGameControls::ACharacterGameControls()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterGameControls::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterGameControls::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterGameControls::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}



