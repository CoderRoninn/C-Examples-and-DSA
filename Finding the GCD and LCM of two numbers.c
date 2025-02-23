#include <stdio.h>

int main(){
    
    int x, y, i, GCD = 0, LCM;

    printf("Enter first number: \n");
    scanf("%d", &x);
    printf("Enter second number: \n");
    scanf("%d", &y);

    int a = (x > y) ? y : x;

    for(i=2; i<=a; i++)
       {
        if((x % i == 0) && (y % i == 0))
          {
           GCD = i;
          }
       }

    if(GCD == 0)
      {
       printf("There is no common divisior. \n");
       LCM = x * y;
       printf("LCM is %d \n", LCM);
      } 

    else
    {
     printf("GCD is %d \n", GCD);
     LCM = (x * y) / GCD;
     printf("LCM is %d \n", LCM);
    }  

return 0;}