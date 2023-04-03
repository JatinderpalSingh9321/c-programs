#include<stdio.h>
int main(){
    int n,r=0,t;
    printf("Enter a number:- \n");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        r=r*10;
        r=r+t%10;
        t=t/10;
    }
    if(n==r){
        printf("It is a palindrome number");}
    else{
        printf("It is not a palindrome number");
    }
    return 0;
}