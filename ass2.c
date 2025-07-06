#include<stdio.h>

int main(){
     float r,h,area,volume, Surface_area;

     printf("Enter a radius of cylinder");
     scanf("%f",&r);

     printf("Enter height of cylinder");
     scanf("%f",&h);

     Surface_area = (2 * 3.14 * r * h) + (2 * 3.14 * r * r);

     volume = (3.14 * r * r * h);

     printf("The surface area of the cylinder is equal to %f\\n",area);

     printf("The volume of the cylinder is equal to %f\\n",volume);

}