#include <stdio.h>

int binary_search(int array[], int size, int target);

int main(){
    
    int array[] = {14, 17, 24, 29, 96, 147};
    int size = sizeof(array) / sizeof(array[0]);

    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);

    int result = binary_search(array, size, x);

    if(result == -1)
      {
       printf("The number you are looking for isn't in the array");
      }
    else
    {
     printf("The number you are looking for at index %d", result);
    }  

return 0;}

int binary_search(int array[], int size, int target){

    int left = 0;
    int right = size - 1;

    while(left <= right)
    {
     int middle = left + (right - left) / 2;

     if(target == array[middle])
       {
        return middle;
       }
      else if(target > array[middle])
            {
             left = middle + 1;
            } 
      else
      {
       right = middle - 1;
      }
    }

return -1;}