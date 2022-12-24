// Fill out your copyright notice in the Description page of Project Settings.


#include "Walker.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
AWalker::AWalker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	RootComponent = Collider;
	Head = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));
	//RootComponent = Body;
	Head->SetupAttachment(Collider);
	//FTransform transform = Head->GetRelativeTransform();;
	//transform.SetLocation(FVector(100.0, 100.0, 100.0));
	

}

// Called when the game starts or when spawned
void AWalker::BeginPlay()
{
	Super::BeginPlay();

	FRotator rotator;
	//rotator.Add(-1.0, 0.0, 0.0);
	//rotator.Add(0.0, 1.0, 0.0);
	rotator.Add(0.0, 1.0, 0.0);
	Collider->AddLocalRotation(rotator);
	//Head->AddLocalOffset(FVector(100, 100, 100));
	//Head->SetRelativeLocation(FVector(100.0, 110.0, 0.0));
	
}

// Called every frame
void AWalker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator rotator;
	//rotator.Add(-1.0, 0.0, 0.0);
	//rotator.Add(0.0, 1.0, 0.0);
	rotator.Add(0.0, 1.0, 0.0);
	Collider->AddLocalRotation(rotator);

	/*FRotator rotator2;
	rotator2.Add(0.0, 1.0, 0.0);
	Collider->AddLocalRotation(rotator2);*/

}

