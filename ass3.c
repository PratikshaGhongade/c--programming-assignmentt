#include<stdio.h>
int main(){
   float F,C,K;

   printf("Enter tempertures is Fahrenheit");
   scanf("%f",&F);

    printf("Enter tempertures is Celsius");
   scanf("%f",&C);

    printf("Enter tempertures is Kelvin");
   scanf("%f",&K);

   C = 5 / 9 *(F - 32);
   K = C + 273.15;

   printf("tempertures is Celsius: %.2f\n",C);
    printf("tempertures is Kelvin: %.2f\n",K);

    return 0;

}