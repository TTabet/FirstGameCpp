// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstCppGameModeBase.h"
#include "FirstCppUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "FirstCpp/Items/ItemBase.h"

void AFirstCppGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> Items;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AItemBase::StaticClass(), Items);
	ItemsInLevel = Items.Num();

	if (GameWidgetClass)
	{
		GameWidget = Cast<UFirstCppUserWidget>(CreateWidget(GetWorld(), GameWidgetClass));

		if (GameWidget)
		{
			GameWidget->AddToViewport();
			UpdateItemText();
		}
	}
}

void AFirstCppGameModeBase::UpdateItemText()
{
	GameWidget->SetItemText(ItemsCollected, ItemsInLevel);
}

void AFirstCppGameModeBase::ItemCollected()
{
	ItemsCollected++;
	UpdateItemText();
}
