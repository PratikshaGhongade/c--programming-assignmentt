#include<stdio.h>

int main(){

    float a,b,am ,hm;

    printf("Enter two number");
    scanf("%f %f",&a,&b);

    am = (a + b) / 2;

    hm = a * b / (a + b);

    printf("Arithmetic mean = 2%f\n",am);
     printf("Harmonic mean = 2%f\n",hm);

     return 0;


}