#include <stdio.h>
void main() {
    int num, remainder , sum=0;
    printf("Enter number\n");
    scanf("%d",&num);
    while(num>0){
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
    }
    printf("The sum of numbers is :%d",sum);
    return 0;
}