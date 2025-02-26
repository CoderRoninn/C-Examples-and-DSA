#include <stdio.h>

void bubble_sort(int array[], int size);

int main(){
    
    int array[] = {14, 17, 19, 89, 101, 104, 109};
    int size = sizeof(array) / sizeof(array[0]);

    bubble_sort(array, size);


return 0;}

void bubble_sort(int array[], int size){
     
     int i, j, temp;

     for(i=0; i<size-1; i++)
        {
         for(j=0; j<size-1-i; j++)
            {
             if(array[j] > array[j+1])
               {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
               }
            }
        }
    printf("The elements sorted from small to large are:");

    for(i=0; i<size; i++)
       {
        printf("%d ", array[i]);
       }
}