// program for calculating the factorial of a number
//heading
#include<stdio.h>
//function heading
void main(){

    //variable declaration
    int i,sum=0,number;
    float avg;
    //output prompt
    printf("Enter a number: ");
    //input statement
    scanf("%d",&number);
    //for loop
        for(i=1;i<=number;i++){
        sum=sum+i;
        avg=sum/number;

  }
  //output statement
    printf("sum of %d is: %d \n",number,sum);
    printf("average of first %d numbers is %f` \n",number,avg);

}

