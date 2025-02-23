#include <stdio.h>

int control(int number);

int main(){
    
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    printf("The factorial of the number you entered is: %d \n", control(number));

return 0;}

int control(int number){
    
    int i, result = 1;

    for(i=1; i<=number; i++)
       {
        result *= i;
       }

return result;}