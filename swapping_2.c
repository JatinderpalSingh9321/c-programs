//swapping of two using multiplication and division operator
// heading
#include<stdio.h>
// function heading
void main(){
    //variable declaration
    int a=5,b=3;
    printf("the value of a and b before swapping is %d,%d\n",a,b);
    //assignment statement
    a=a*b;
    b=a/b;
    a=a/b;
    printf("the value of a and b after swapping is %d,%d\n",a,b);

}
