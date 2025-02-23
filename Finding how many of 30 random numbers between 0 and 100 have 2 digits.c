#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int i , count=0;
    int array[30]={0};

    srand(time(NULL));

    for(i=0; i<30 ;i++)
       {
        array[i] = rand() % 100;
        if( array[i] > 9 && array[i] < 100 )
          {
           count ++;
           printf("The random value of %d. index in the array is:%d \n" , i+1 , array[i]);
          }
       }

    printf("There are %d numbers between 10 and 99: \n" , count); 

return 0;}