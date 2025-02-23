#include <stdio.h>

int main(){
    
    int i, j, number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    for(i=0; i<number; i++)
       {
        for(j=0; j<number-1-i; j++)
           {
            printf(" ");
           }
        for(j=0; j<=i; j++)
           {
            printf("* ");
           } 
        printf("\n");
       }
       
return 0;}