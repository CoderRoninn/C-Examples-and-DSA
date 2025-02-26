#include <stdio.h>

int control(int x[], int n, int number);

int main(){
    
    int array[] = {17, 28 , 93, 78, 28, 48};
    int size = sizeof(array) / sizeof(array[0]);

    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    int result = control(array, size, number);

    if(result == -1)
      {
       printf("The number you are looking for isn't in the arrray. \n");
      }
    
    else
    {
     printf("The number you are looking for is at index %d.", result);
    }

return 0;}

int control(int x[], int n, int number){
    
    int i;

    for(i=0; i<n; i++)
       {
        if(number == x[i])
          {
           return i;
          }
       }

return -1;}