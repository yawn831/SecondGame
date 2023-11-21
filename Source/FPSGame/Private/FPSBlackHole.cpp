 // Fill out your copyright notice in the Description page of Project Settings.


#include "FPSBlackHole.h"

// Sets default values
AFPSBlackHole::AFPSBlackHole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshCompnt->CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshCompnt"));
	MeshCompnt->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent=MeshCompnt;

}



// Called every frame
void AFPSBlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

