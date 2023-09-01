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

    printf("Average = %f\n", moyenne(sum, size));

    bubble_sort(arr, size);

    printf("Mean = %f\n", mediane(arr, size));

    printf("Range = %f \n", arr[size - 1] - arr [0]);


    float q1 = ft_q1(arr, size);

    float q3 = ft_q3(arr, size);

    printf("Q1 = %f\n", q1);

    printf("Q3 = %f\n", q3);

    printf("IQR = %f\n", q3 - q1);

    return 0;
}