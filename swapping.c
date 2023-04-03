// SWAPPING OF TWO NUMBERS USING TEMP
// heading
#include<stdio.h>
// function heading
void main(){
    // variable declaration
    int x=2, y=3, temp;
    // assignment statement
    printf("given value of x and y is %d,%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("the value of x and y after swapping is %d,%d\n",x,y);

}
