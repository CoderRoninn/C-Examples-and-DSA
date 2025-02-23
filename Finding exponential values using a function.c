#include <stdio.h>

float control(float a, float b);

int main(){
    
    float x, y;
    printf("Enter the base of the number: \n");
    scanf("%f", &x);
    printf("Enter the exponent of the number: \n");
    scanf("%f", &y);

    float result = control(x, y);

    printf("The result is: %f \n", result);

return 0;}

float control(float a, float b){
   
   int i;
   float result = 1.0;

   for(i=0; i<b; i++)
      {
       result *= a;
      }

return result;}