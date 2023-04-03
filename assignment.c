#include<stdio.h>
int main()
{
    int noOfCalls, tempNoOfCalls, charge;
    printf("Enter total unit of calls made this month: ");
    scanf("%d", &noOfCalls);
    printf("\n");
    if(noOfCalls<=200)
    {
        printf("You have not crossed the limit of 200 calls");
        printf("\nNo charge.");
    }
    else
    {
        if(noOfCalls<=500)
        {
            tempNoOfCalls = noOfCalls - 200;
            charge = tempNoOfCalls * 1;
            printf("The charge you have to paid = Rs.%d", charge);
        }
        else
        {
            tempNoOfCalls = noOfCalls - 500;
            charge = tempNoOfCalls * 2;
            charge = charge + 300;
            printf("The charge you have to paid = Rs.%d", charge);
        }
    }
    return 0;
}