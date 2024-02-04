#include <stdio.h>
void main()
{
    int arr[3][3], r, c;
    printf("Enter a matrix number:");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Enter number for row[%d]colum[%d]:%d \n", r, c, arr[r][c]);
        }
    }
}