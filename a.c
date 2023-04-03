#include<stdio.h>
int main(){
    float wt,ht,bmi;
    printf("Enter the Weight in Kg \n");
    scanf("%f" ,&wt);
    printf("Enter the Height in metres \n");
    scanf("%f" ,&ht);
    bmi=wt/(ht*ht);
    printf("The bmi index is : %f \n",bmi);
    if(bmi<=18.5){
        printf("The person is underweight. \n");
    }
    else if(bmi<=24.9){
        printf("The person is Normal. \n");
    }
    else if(bmi>=25){
        printf("The person is over weight. \n");
    }
    else if(bmi<=29.9){
        printf("The person is over weight. \n");
    }
    else{
        printf("Person is obese. \n");
    }
    return 0;
}