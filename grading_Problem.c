#include<stdio.h>

int main()
{
    int mark1, mark2, mark3;
    printf("Enter mark1: \n");
    scanf("%d", &mark1);
    printf("Enter mark2: \n");
    scanf("%d", &mark2);
    printf("Enter mark3: \n");
    scanf("%d", &mark3);

    printf("The marks are: %d, %d, %d \n", mark1, mark2, mark3);

    if(mark1 < 40 || mark2 < 40 || mark3 < 40)
    {
        printf("Student is failed due to less passing mark!!! \n");
    }
    else if((mark1 + mark2 + mark3) / 3 < 50)
    {
        printf("Student is failed due to less passing percentage!!! \n");
    }
    else
    {
        printf("Student is passed!!! \n");
    }

    return 0;
}