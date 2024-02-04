#include <stdio.h>
#define ARRAY_SIZE 5
void main()
{
    int i, n, sum = 0, avg, arr[ARRAY_SIZE];

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("array[%d]:", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum is :%d", sum);
    avg = sum / ARRAY_SIZE;
    printf("avg is : %d \n", avg);
}