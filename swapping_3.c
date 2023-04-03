// swapping of two numbers using + and - operator
// heading
#include<stdio.h>
//function heading
void main(){
    // variable declaration
    int a=4,b=2;
    printf("the value of a and b before swapping is %d,%d\n",a,b);
    //assignment statement
    a=4+2;
    b=a-b;
    a=a-b;
    printf("the value of a and b after swapping is %d,%d\n",a,b);
}
