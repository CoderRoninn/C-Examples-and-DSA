#include <stdio.h>

int main(){
    
    int i, j, number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    for(i=number; i>0; i--)
       {
        for(j=0; j<i; j++)
           {
            printf("%d", number-i+1);
           }
        printf("\n");  
       }

return 0;}