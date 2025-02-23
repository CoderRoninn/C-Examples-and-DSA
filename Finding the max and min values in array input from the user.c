#include <stdio.h>

int main(){
    
    int i , n , max , min;
    printf("Enter the size of array: \n");
    scanf("%d" , &n);

    int array[n];

    for(i=0; i<n; i++)
       {
        printf("Enter the %d. element of array: \n" , i+1);
        scanf("%d" , &array[i]);
       }

    max = min = array[0];

    for(i=1; i<n; i++)
       {
        if( max < array[i] )
          {
           max = array[i];
          }
        if( min > array[i] )
          {
           min = array[i];
          }  
       }

    printf("The max value of array is:%d \n" , max);
    printf("The min value of array is:%d" , min);  

return 0;}