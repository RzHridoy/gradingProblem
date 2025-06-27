#include<stdio.h>

/*// WHILE LOOP
int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        // printf("%d \n", i);
        // i++;
        printf("number is: %d \n", i);
        sum += i;
        i++;
        printf("sum is: %d \n", sum);
    }
    printf("The sum of first ten natural numbers is: %d \n", sum);
    
    return 0;
}


// DO WHILE LOOP
int main()
{
    int i = 1;
    int sum = 0;
    do{
        // printf("%d \n", i);
        // i++;
        printf("number is: %d \n", i);
        sum += i;
        i++;
        printf("sum is: %d \n", sum);
    }
    while (i <= 10);
        printf("The sum of first ten natural numbers is: %d \n", sum);
    
    return 0;
}*/


// FOR LOOP
int main()
{
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("number is: %d \n", i);
        sum += i;
        printf("sum is: %d \n", sum);
    }
    printf("The sum of first ten natural numbers is: %d \n", sum);
    
    return 0;
}