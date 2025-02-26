#include <stdio.h>

void control(int x[], int n);

int main(){
    
    int array[] = {14,11,9,7,29,78,36,49};
    int size = sizeof(array) / sizeof(array[0]);

    control(array, size);

return 0;}

void control(int x[], int n){
    
    int i, j, temp, min_index;

    for(i=0; i<n-1; i++)
       {
        min_index = i;
        for(j=i+1; j<n; j++)
           {
            if(x[min_index] > x[j])
              {
               min_index = j;
              }
            }
        if(min_index != i)
          {
           temp = x[i];
           x[i] = x[min_index];
           x[min_index] = temp;
          }   
       }
    printf("The numbers sorted from small to large are: ");

    for(i=0; i<n; i++)
       {
        printf("%d ",x[i]);
       }
}