// program for calculating the factorial of a number
//heading
#include<stdio.h>
//function heading
void main(){

    //variable declaration
    int i,factorial=1,number;
    //output prompt
    printf("Enter a number: ");
    //input statement
    scanf("%d",&number);
    //for loop
        for(i=1;i<=number;i++){
        factorial=factorial*i;
  }
  //output statement
    printf("Factorial of %d is: %d",number,factorial);

}

