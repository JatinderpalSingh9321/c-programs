#include<stdio.h> 
int main(){    
    int i, num, n, large=0;
    printf("How many numbers?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number",i+1);
        scanf("%d",&num);
        if(num>=large)
        large=num;
        }
        printf("largest is %d\n",large);
  return 0;  
 }   