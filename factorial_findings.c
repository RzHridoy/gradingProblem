#include<stdio.h>

/*int main()
{
    int initialize = 1;
    int n = 0;

    for (int i = initialize; i <= n; i++)
    {
        initialize *= i;
    }
    printf("The factorial is: %d \n", initialize);

    return 0;
}*/


int main()
{
    int initialize = 1, n = 5;
    int i = initialize;
    while (i <= n)
    {
        initialize *= i;
        i++;
    }
    printf("The factorial of %d is: %d \n", n, initialize);
    
    return 0;
}