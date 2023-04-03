#include<stdio.h>
# define pi 3.14
void main(){
    int area_of_circle,perimeter_of_circle,radius,side,length,width,area_of_square,area_of_rectangle,perimeter_of_square,perimeter_of_rectangle;
    printf("enter the radius of the circle\n");
    scanf("%d",&radius);
    area_of_circle=pi*radius*radius;
    printf("the area of circle is %d \n",area_of_circle);
    perimeter_of_circle=2*pi*radius;
    printf("the perimeter of circle is %d \n",perimeter_of_circle);

    // for square
    printf("\n\n");
    printf("enter the side of square\n");
    scanf("%d",&side);
    area_of_square=side*side;
    printf("the area of square is %d \n",area_of_square);
    perimeter_of_square=4*side;
    printf("the perimeter of square is %d \n",perimeter_of_square);

     // rectangle
    printf("\n\n");
    printf("enter the length and width of the rectangle\n");
    scanf("%d%d",&length,&width);
    area_of_rectangle=length*width;
    printf("the area of the rectangle is %d \n",area_of_rectangle);
    perimeter_of_rectangle=2*(length+width);
    printf("the perimeter of rectangle is %d \n",perimeter_of_rectangle);


}
