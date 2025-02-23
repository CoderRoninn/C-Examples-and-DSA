#include <stdio.h>

int main(){
    
    int number, sum_digit = 0;
    printf("Enter a number. \n");
    scanf("%d", &number);

    while(number > 0) 
    {
     sum_digit += number % 10;
     number = number / 10;
    }

    printf("The sum of the digits of the number is: %d \n", sum_digit);

return 0;}