#include<stdio.h>
#define pi 3.14
void main(){
    int length,width, perimeter, area;
    printf("enter the length and width of the rectangle \n");
    scanf("%d%d",&length,&width);
    area=length*width;
    printf("the area of rectangle is %d \n",area);
    perimeter=2*(length+width);
    printf("the perimeter of rectangle is %d \n",perimeter);

}
