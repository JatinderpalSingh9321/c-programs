// write a program to calculate compound interest
//heading
#include<stdio.h>
#include<math.h>
//main function
void main(){
//variable declaration
int amount,principle,rate,t,compound_interest;
printf("enter the principle\n");
scanf("%d",&principle);
printf("enter the rate\n");
scanf("%d",&rate);
printf("enter the duration of the investment\n");
scanf("%d",&t);
amount=principle*(pow((1+rate/100),t));
compound_interest=amount-principle;
printf("the compound interest is :%d",compound_interest);
}

