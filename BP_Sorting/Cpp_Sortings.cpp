// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_Sortings.h"

FString UCpp_Sortings::BubbleSort(FString Array, int Size)
{
    bool swapped = true;
    int j = 0;
    char tmp;
    while (swapped) {
        swapped = false;
        j++;
        for (int i = 0; i < Size - j; ++i) {
            if (Array[i] > Array[i + 1]) {
                tmp = Array[i];
                Array[i] = Array[i + 1];
                Array[i + 1] = tmp;
                swapped = true;
            }
        }
    }
	return Array;
}

FString UCpp_Sortings::ShakerSort(FString Array, int Size)
{
    bool swapped = true;
    int start = 0;
    int end = Size - 1;

    while (swapped) {
        swapped = false;

        for (int i = start; i < end; ++i) {
            if (Array[i] > Array[i + 1]) {
                Swap(Array[i], Array[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;

        swapped = false;
        --end;

        for (int i = end - 1; i >= start; --i) {
            if (Array[i] > Array[i + 1]) {
                Swap(Array[i], Array[i + 1]);
                swapped = true;
            }
        }

        ++start;
    }
    return Array;
}

FString UCpp_Sortings::InsertionSort(FString Array, int Size)
{
    for (int i = 1; i < Size; ++i) {
        int key = Array[i];
        int j = i - 1;

        while (j >= 0 && Array[j] > key) {
            Array[j + 1] = Array[j];
            j = j - 1;
        }

        Array[j + 1] = key;
    }
    return Array;
}

FString UCpp_Sortings::SelectionSort(FString Array, int Size)
{
    int i, j, min_idx;

    for (i = 0; i < Size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < Size; j++)
            if (Array[j] < Array[min_idx])
                min_idx = j;

        Swap(Array[min_idx], Array[i]);
    }
    return Array;
}
