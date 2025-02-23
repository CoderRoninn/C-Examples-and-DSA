#include <stdio.h>

int main(){
    
    int i , n , sum=0;
    float average = 0.0;

    printf("Enter the size of array: \n");
    scanf("%d" , &n);

    int x[n];

    for(i=0; i<n; i++)
       {
        printf("Enter the %d. element of array: \n" , i+1);
        scanf("%d" , &x[i]);
        sum += x[i];
       }

    average = (float) sum / n;

    printf("The sum of array is:%d \n" , sum);
    printf("The average of array is:%f" , average);   

return 0;}