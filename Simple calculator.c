#include <stdio.h>

int main(){
    
    float number1, number2;
    int choice;

    do{
       printf("Enter a choice  1.+  2.-  3.*  4./  5.Exit \n");
       scanf("%d", &choice);

       if(choice == 5)
         {
          printf("Checking Out. \n");
          break;
         }

       else
       {
        printf("Enter first number. \n");
        scanf("%f", &number1);
        printf("Enter second number. \n");
        scanf("%f", &number2);

        switch(choice)
        {
            case 1:
            printf("The result is: %f \n", (number1 + number2));
            break;

            case 2:
            printf("The result is: %f \n", (number1 - number2));
            break;

            case 3:
            printf("The result is: %f \n", (number1 * number2));
            break;

            case 4:
            while(1)
            {
             if(number2 == 0)
               {
                printf("You can't divide by zero. Enter a valid number. \n");
                scanf("%f", &number2);
                continue;
               }
                printf("The result is: %f \n", (number1 / number2));
                break;  
            } 
            break; 

        }
       }  
    }while (choice != 5);

return 0;}