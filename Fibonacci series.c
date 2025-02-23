#include <stdio.h>

int main(){
    
    int i, n, t1 = 0, t2 = 1, next;
    printf("How many elements will there be? \n");
    scanf("%d", &n);

    if(n == 1)
      {
       printf("Fibonacci series: %d \n", t1);
       printf("\nThe last element is: %d \n", t1);
      }

    else if(n == 2)
    {
     printf("Fibonacci series: %d %d \n", t1, t2);
     printf("\nThe last element is: %d \n", t2);
    } 

    else
    {
     printf("Fibonacci series: %d %d \n", t1, t2); 
     for(i=2; i<n; i++)
        { 
         next = t1 + t2;
         printf("%d ", next);
         t1 = t2;
         t2 = next;
        }
     printf("\nThe last element is: %d \n", next);   
    }   

return 0;}