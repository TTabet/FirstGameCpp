// Fill out your copyright notice in the Description page of Project Settings.


#include "SpherePlayer.h"

#include <filesystem>

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ASpherePlayer::ASpherePlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it
	PrimaryActorTick.bCanEverTick = false;

	// Create Components - Before this step they won't exist on our Actor, they've only been defined
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	// Set the Root Component to be the Actor Mesh
	RootComponent = Mesh;
	// Attach the SpringArm to the Mesh, SpringArm will now follow the Mesh transform
	SpringArm->SetupAttachment(Mesh);
	// Attach the Camera to the SpringArm, Camera will now follow the SpringArm transform
	Camera->SetupAttachment(SpringArm);

	// Set Physics to True
	Mesh->SetSimulatePhysics(true);

}

// Called when the game starts or when spawned
void ASpherePlayer::BeginPlay()
{
	Super::BeginPlay();

	// Account for mass in MoveForce
	MoveForce *= Mesh->GetMass();
	JumpImpulse *= Mesh->GetMass();

	Mesh->OnComponentHit.AddDynamic(this, &ASpherePlayer::OnHit);
	
}

// Called to bind functionality to input
void ASpherePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Custom Input Axis Bindings
	InputComponent->BindAxis("MoveForward", this, &ASpherePlayer::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ASpherePlayer::MoveRight);
	// Custom Action Bindings
	InputComponent->BindAction("Jump", IE_Pressed, this, &ASpherePlayer::Jump);
}

void ASpherePlayer::MoveRight(float Value)
{
	// Get the Right vector of the camera as it doesn't rotate and move the player in this direction based on the input and MoveForce
	const FVector Right = Camera->GetRightVector() * MoveForce * Value;
	Mesh->AddForce(Right);
}

void ASpherePlayer::MoveForward(float Value)
{
	// Get the Forward vector of the camera as it doesn't rotate and move the player in this direction based on the input and MoveForce
	const FVector Forward = Camera->GetForwardVector() * MoveForce * Value;
	Mesh->AddForce(Forward);
}

void ASpherePlayer::Jump()
{
	// Cap the number of jumps the player can make
	if(JumpCount >= MaxJumpCount) {return;}
	// Apply an impulse to the Mesh on the Z Axis
	Mesh->AddImpulse(FVector(0, 0, JumpImpulse));
	// Track how many times the player has jumped
	JumpCount++;
}

void ASpherePlayer::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{	
	
	// Get Direction the player hit the surface on the Z axis
	const float HitDirection = Hit.Normal.Z;
	
	// DEBUGGING //
	// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Orange, FString::Printf(TEXT("Z Normal: %f"), HitDirection));
	// DEBUGGING //
	
	// If it is more than 0, then player has hit something below. 1 is flat, anything between is a slope
	if (HitDirection > 0)
		JumpCount = 0;
}

