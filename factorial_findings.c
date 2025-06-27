#include<stdio.h>

int main()
{
    int initialize = 1;
    int n = 5;

    for (int i = initialize; i <= n; i++)
    {
        initialize *= i;
    }
    printf("The factorial is: %d \n", initialize);

    return 0;
}