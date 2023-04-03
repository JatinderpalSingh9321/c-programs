// WAP to check wheather a number is Prime is not using While loop.
// Header Files
#include<stdio.h>
#include<math.h>
// main Function
int main(){
    int n,count=0,i; //Assignment statement
    printf("Enter any number \n");//output statement (prompt)
    scanf("%d", &n);//input statemnet
    i=1;
    while (i<=n) //while loop
    {
        if (n%i==0)
        {
            count++;}
        i++;
    }
    if (count==2)
        printf("The number is prime");
        else
        printf("The number is not prime");
    return 0;
}