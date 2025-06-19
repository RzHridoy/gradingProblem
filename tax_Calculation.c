#include<stdio.h>

int main()
{
    float earnings, tax = 0;
    printf("Enter earnings amount: \n");
    scanf("%f", &earnings);

    if(earnings <= 250000)
    {
        tax = 0;
    }

    else if(earnings > 250000 && earnings <= 500000)
    {
        tax = 0.05 * (earnings - 250000);
    }

    else if(earnings > 500000 && earnings <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (earnings - 500000);
    }

    else
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (earnings - 1000000);
    }

    printf("The total amount of tax to pay is: %.2f", tax);
}