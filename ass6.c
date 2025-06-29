#include<stdio.h>
int main(){

    float l,b,h,SA,v;

    printf("Enter length , breadth and height of a cuboid\n");
    scanf("%f%f%f",&l,&b,&h);

    SA = 2*(l * b + 1 * h + b*h);

    v = l * b * h;

    printf("Surface area: %f\n",SA);
    printf("volume: %f\n",v);

    return 0;
}