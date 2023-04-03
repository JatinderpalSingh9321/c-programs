#include<stdio.h>
void main(){
     int options;
     float km,kg,mile,foot,cm,inches,pound,meters;
     printf("Choose what you want to do? \n");
     printf("Enter 1 to convert km into miles\n");
     printf("Enter 2 to convert inches into foot\n");
     printf("Enter 3 to convert cm into inches\n");
     printf("Enter 4 to convert pound into kgs\n");
     printf("Enter 5 to convert inches into meters\n");
     scanf("%d",&options);
     switch(options)
     {
     case 1:
        printf("Enter the numbers\n");
        scanf("%f", &km);
        mile=km*0.621;
        printf("The Miles are %f" , mile);
        break;
     case 2:
        printf("Enter the numbers\n");
        scanf("%f", &inches);
        foot=inches*0.0833;
        printf("The foot are %f" , foot);
        break;
     case 3:
        printf("Enter the numbers\n");
        scanf("%f", &cm);
        inches=cm*0.3937;
        printf("The inches are %f" , inches);
        break;
     case 4:
        printf("Enter the numbers\n");
        scanf("%f", &pound);
        kg=pound*0.453;
        printf("The kg are %f" , kg);
        break;
     case 5:
        printf("Enter the numbers\n");
        scanf("%f", &inches);
        meters=inches*39.37;
        printf("The meters are %f" , meters);
        break;
     default:
     printf("Wrong characters");
        break;
     }
}