#include <stdio.h>

int main(){
    
    int i, j, number;
    printf("Enter a number: \n");
    scanf("%d",&number);

    for(i=number; i>0; i--)
       {
        for(j=0; j<number-i; j++)
           {
            printf(" ");
           }
        for(j=0; j<i; j++)
           {
            printf("* ");
           } 
        printf("\n");
       }

return 0;}