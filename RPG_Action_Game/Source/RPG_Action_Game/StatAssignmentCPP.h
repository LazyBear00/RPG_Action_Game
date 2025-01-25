// Fill out your copyright notice in the Description page of Project Settings.
/*
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/EditableTextBox.h"
#include "StatAssignmentCPP.generated.h"

class EditableTextBox;
class ARPG_Action_GameCharacter;
/**
 * 
 
UCLASS()
class RPG_ACTION_GAME_API UStatAssignmentCPP : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

protected:
	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* StrengthTexBox;

	FString LastValidStrength;

private:
	UPROPERTY()
	ARPG_Action_GameCharacter* CharacterRef;

public:
	UFUNCTION()
	void OnStrengthTextChanged(const FText& Text);

	UFUNCTION()
	void OnStrengthTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);
	
	bool IsNumeric(const FString& Input) const;
	bool TextIsEmpty(const FText& Input)const;
	UFUNCTION(BlueprintCallable)
	void BindCharacter(ARPG_Action_GameCharacter* InCharacter);
};
*/