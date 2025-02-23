#include <stdio.h>
int control( int *px , int size );

int main(){

    int array[]={ 14 , 25 , 36 , 48 , 96 , 12 , 101 , 100 };
    int size = sizeof(array) / sizeof(array[0]);

    printf("The max value in the array is:%d" , control( array , size ));
 
return 0;}
int control( int *px , int size ){

    int i , max;
    max = *px;        //or px[0]

    for(i=1; i<size; i++)
       {
        if( max < *(px+i) )     //or px[i]
          {
           max = *(px+i); 
          }
       }

return max;}