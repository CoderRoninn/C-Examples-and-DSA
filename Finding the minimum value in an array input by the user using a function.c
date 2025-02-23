#include <stdio.h>

int control(int x[], int size);

int main(){
    
    int i, n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);

    int array[n];

    for(i=0; i<n; i++)
       {
        printf("Enter element %d of the array: \n", i+1);
        scanf("%d", &array[i]);
       }

    int result = control(array, n);

    printf("The minimum value of the array is: %d \n", result);   

return 0;}

int control(int x[], int size){

    int i, min_value;
    min_value = x[0];

    for(i=1; i<size; i++)
       {
        if(min_value > x[i])
          {
           min_value = x[i];
          }
       }

return min_value;}