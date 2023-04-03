// program to find greatest among the n numbers.
#include<stdio.h>
void main(){
    int i, num, n, grt=0, secgrt=0;
    printf("enter how many number you want to enter:");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf(" enter the number:\n");
        scanf("%d", &num);
        if(grt<num)
            grt=num;
        else if(num<grt & num>secgrt)
            secgrt=num;
        }
        printf("\n The largest number is %d", grt);
        printf("\n the second largest number is:%d",secgrt);
}