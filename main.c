#include <stdio.h>
#include "stat_functions.h"

int main()
{
	float arr[] = {45, 40, 29, 67, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    float sum = 0;

    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }

    printf("Moyenne: %f\n", moyenne(sum, size));

    bubble_sort(arr, size);

    printf("Mediane: %f\n", mediane(arr, size));

    return 0;
}