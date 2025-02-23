#include <stdio.h>

int main(){

    int array[6]={ 14 , 17 , 19 , 21 , 29 , 46 };  
    
    int* p;
    p = array;
    
    printf("%d \n" , *p);   //or p[0]
    *p += 101;
    printf("%d \n" , array[0]);

    p++;
    printf("%d \n" , *p);

    p = &array[4];
    printf("%d \n" , *p);
    printf("%d \n" , p[0]);  //or *p
    printf("%d " , p[1]);

return 0;}