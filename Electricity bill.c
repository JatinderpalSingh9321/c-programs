// Title of program
// WAP to calculate Electricity Bill Using if else ladder statement
// Header Files
#include<stdio.h>
// Main Function
void main(){
    // Variable Declaration
    int m,Total;
    // Output statement (Prompt)
    printf("Enter the value of m : \n");
    // Input statement
    scanf("%d",&m);
    if(m<=50){
        // Assignment Statement
        Total=m*0.50;
        // Output Statement (prompt)
        printf("Total is %d \n",Total);
    }
    else if(m<=150){
        // Assignment Statement
        Total=50+(m-100)*0.75;
        // Output Statement (prompt)
        printf("Total is %d \n",Total);
    }
    else if (m<=250){
        // Assignment Statement
        Total=100+(m-150)*1.20;
        // Output Statement (prompt)
        printf("Total is %d \n",Total);
    }
    else{
        // Assignment Statement
        Total=220+(m-150)*1.50;
        // Output Statement(prompt)
        printf("Total is %d \n",Total);
    }
    // Assignment Statement
    Total=Total*20/100+Total;
    // Output Statement (prompt)
    printf("The electricity bill is : %d",Total);
}