#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int control(char* x);

int main(){

    char card_number[17];
    printf("Enter your card number");
    scanf("%s", card_number);

    int result = control(card_number);

    if(result)
      {
       printf("Your card is valid. \n");
      }

    else
    {
     printf("Your card is invalid. \n");
    }  

return 0;}

int control(char* x){
    
    int i, sum_even = 0, sum_odd = 0, number;
    int length = strlen(x);
    bool check = false;

    if(length != 16)
      {
       return 0;
      }

    for(i=length-1; i>=0; i--)
       {
        number = x[i] - '0';

        if(check)
          {
           number *=2;

           if(number > 9)
             {
              number -=9;
             }
           sum_even += number;  
          }

        else
        {
         sum_odd += number;
        } 
        
        check = !check;
       }

       if((sum_odd + sum_even) % 10 != 0)
         {
          return 0;
         }

return 1;}