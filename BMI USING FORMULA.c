#include<stdio.h>
int main(){
    int wt,ht,bmi;
    printf("Enter the Weight \n");
    scanf("%d" ,&wt);
    printf("Enter the Height \n");
    scanf("%d" ,&ht);
    bmi=wt/(ht*ht);
    if(bmi<=18.5){
        printf("The person is underweight \n");
    }
    else if(bmi<=24.9){
        printf("The person is Normal \n");
    }
    else if(bmi>=25){
        printf("The person is over weight \n");
    }
    else if(bmi<=29.9){
        printf("The person is over weight \n");
    }
    else{
        printf("Person is obese \n");
    }
    return 0;
}