// Fill out your copyright notice in the Description page of Project Settings.


#include "CannonballComponent.h"

// Sets default values for this component's properties
UCannonballComponent::UCannonballComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCannonballComponent::BeginPlay()
{
	Super::BeginPlay();


}


// Called every frame
void UCannonballComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCannonballComponent::Launch(FVector force)
{
	UStaticMeshComponent* sphereMesh = GetOwner()->GetComponentByClass<UStaticMeshComponent>();
	sphereMesh->AddForce(force);
}
