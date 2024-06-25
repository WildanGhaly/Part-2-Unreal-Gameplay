// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "RuneAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class UNREALGAMEPLAY_API URuneAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	URuneAttributeSet();
		
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Health
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Health);

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	// Mana
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Mana);

	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldStamina);

	// Stamina
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Stamina);

	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);

	// Vigor
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Vigor;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Vigor);

	UFUNCTION()
	virtual void OnRep_Vigor(const FGameplayAttributeData& OldVigor);

	// Mind
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Mind;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Mind);

	UFUNCTION()
	virtual void OnRep_Mind(const FGameplayAttributeData& OldMind);

	// Endurance
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Endurance;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Endurance);

	UFUNCTION()
	virtual void OnRep_Endurance(const FGameplayAttributeData& OldEndurance);

	// Strength
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Strength;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Strength);

	UFUNCTION()
	virtual void OnRep_Strength(const FGameplayAttributeData& OldStrength);

	// Dexterity
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Dexterity;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Dexterity);

	UFUNCTION()
	virtual void OnRep_Dexterity(const FGameplayAttributeData& OldDexterity);

	// Intelligence
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Intelligence;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Intelligence);

	UFUNCTION()
	virtual void OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence);

	// Faith
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Faith;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Faith);

	UFUNCTION()
	virtual void OnRep_Faith(const FGameplayAttributeData& OldFaith);

	// Luck
	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Luck;
	ATTRIBUTE_ACCESSORS(URuneAttributeSet, Luck);

	UFUNCTION()
	virtual void OnRep_Luck(const FGameplayAttributeData& OldLuck);
};
