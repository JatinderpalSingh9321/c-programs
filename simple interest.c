// heading
#include<stdio.h>
//main function
int main(){
// variable declaration
int p,r,t,simple_interest;
printf("enter the principle amount\n");
scanf("%d",&p);
printf("enter the rate of increment\n");
scanf("%d",&r);
printf("enter the duration of the investment\n");
scanf("%d,&t");
simple_interest=p*r*t/100;
printf("the simple interest is : %d",simple_interest);
return 0;
}
