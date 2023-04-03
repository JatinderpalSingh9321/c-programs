// program for combine area
// heading function
#include<stdio.h>
#define pi 3.14
// main function
void main(){
//variable declaration
int choice;
float perimeter,area,radius,side,length,width;
//output statement
printf("enter your choice\n1 for circle\n2 for square\n3 for rectangle\n");
// input statement
scanf("%d",&choice);
//conditional statement
if (choice==1){
    printf("enter the radius of the circle\n");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("the area of circle is %f \n",area);
    perimeter=2*pi*radius;
    printf("the perimeter of the circle is %f \n",perimeter);

}
else if (choice==2){
    printf("enter the side of the square\n");
    scanf("%f",&side);
    area=side*side;
    printf("the area of square is %f \n",area);
    perimeter=4*side;
    printf("the perimeter of the square is %f \n",perimeter);
}
else if (choice==3){
    printf("enter the length and width of the rectangle\n");
    scanf("%f%f",&length,&width);
    area=length*width;
    printf("the area of rectangle is %f \n",area);
    perimeter=2*(length+width);
    printf("the perimeter of rectangle is %f \n",perimeter);
}
else{
    printf("please enter a valid choice\n");
}
}
