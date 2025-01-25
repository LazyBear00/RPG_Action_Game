// Fill out your copyright notice in the Description page of Project Settings.

/*
#include "StatAssignmentCPP.h"
#include "RPG_Action_GameCharacter.h"
#include "Components/EditableTextBox.h"

void UStatAssignmentCPP::NativeConstruct()
{
	Super::NativeConstruct();

	LastValidStrength = "1234";
}


void UStatAssignmentCPP::BindCharacter(ARPG_Action_GameCharacter* InCharacter)
{
	if (InCharacter == nullptr)
	{
		UE_LOG(LogTemp, Fatal, TEXT("Missed to plug InCharacter input parameter"));
	}
	if (CharacterRef != nullptr)
	{
		return;
	}
	CharacterRef = InCharacter;
}


void UStatAssignmentCPP::OnStrengthTextChanged(const FText& Text)
{
	FString TextString = Text.ToString();

	if (IsNumeric(TextString) || TextIsEmpty(Text))
	{
		LastValidStrength = TextString;
	}
	else
	{
		StrengthTexBox->SetText(FText::FromString(LastValidStrength));
	}
}

void UStatAssignmentCPP::OnStrengthTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	FString TextString = Text.ToString();

	if (IsNumeric(TextString))
	{
		int32 TextValue = FCString::Atoi(*TextString);

		int32 UpgradePoints = CharacterRef->UpgradePoints;
		int32 StrengthValue = CharacterRef->StrengthValue;

		int32 AdditionThem = StrengthValue + UpgradePoints;

		if (TextValue > StrengthValue)
		{
			int32 IncreaseAll = AdditionThem - TextValue;

			if (IncreaseAll >= 0)
			{
				CharacterRef->UpgradePoints = IncreaseAll;
				CharacterRef->StrengthValue = TextValue;

				UE_LOG(LogTemp, Warning, TEXT("UpgradePoints = %f"), CharacterRef->UpgradePoints);
				UE_LOG(LogTemp, Warning, TEXT("StrengthValue = %f"), CharacterRef->StrengthValue);

				StrengthTexBox->SetText(FText::AsNumber(TextValue));

				LastValidStrength.Empty();
			}
		}
	}
}

bool UStatAssignmentCPP::IsNumeric(const FString& Input) const
{
	return Input.IsNumeric();
}

bool UStatAssignmentCPP::TextIsEmpty(const FText& Input) const
{
	return Input.IsEmpty();
}

*/