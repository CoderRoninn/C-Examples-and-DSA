#include <stdio.h>

int control(int number);

int main(){
    
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    int result = control(number);

    if(result)
      {
       printf("The number you entered is a prime number. \n");
      }

    else
    {
     printf("The number you entered isn't a prime number. \n");
    }  

return 0;}

int control(int number){
   
   int i;

   if(number < 2)
     {
      return 0;
     }

   for(i=2; i<=number/2; i++)
      {
       if((number % i) == 0)
         {
          return 0;
         }
      }  

return 1;}