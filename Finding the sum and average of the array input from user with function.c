#include <stdio.h>
int control( int x[] , int size );
float control2( int x[] , int size );

int main(){

    int i , n;
    printf("Enter the size of array: \n");
    scanf("%d" , &n);

    int array[n];

    for(i=0; i<n; i++)
       {
        printf("Enter the %d. element of array: \n" , i+1);
        scanf("%d" , &array[i]);
       }

    printf("The sum of array is:%d \n" , control( array , n ));
    printf("The average of array is:%f" , control2( array , n ));   

return 0;}
int control( int x[] , int size ){

    int i , sum=0;

    for(i=0; i<size; i++)
       { 
        sum += x[i];
       }

return sum;}

float control2( int x[] , int size ){

    float average = (float) control( x , size ) / size;

return average;}