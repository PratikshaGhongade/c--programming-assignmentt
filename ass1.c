#include<stdio.h>

int main(){
     float radius,area,circumference,PI;

     printf("Enter of the radius of circle");
     scanf("%f",&radius);

     area = PI * radius * radius;
     circumference = 2 * PI * radius;

     printf("Area of circle: %2f\n",area);
     printf("circumference of circle: %f\n");

     return 0;
     

}