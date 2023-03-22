// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Timer.generated.h"
#include "Cpp_Sortings.generated.h"


/**
 * 
 */
UCLASS()
class BP_SORTING_API UCpp_Sortings : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Sort")
	static FString BubbleSort(FString Array, int Size);

	UFUNCTION(BlueprintCallable, Category = "Sort")
	static FString ShakerSort(FString Array, int Size);
	
	UFUNCTION(BlueprintCallable, Category = "Sort")
	static FString InsertionSort(FString Array, int Size);

	UFUNCTION(BlueprintCallable, Category = "Sort")
	static FString SelectionSort(FString Array, int Size);
	
};
