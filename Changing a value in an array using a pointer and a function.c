#include <stdio.h>

void control(int* p);

int main(){
    
    int array[5]={1,4,7,8,9};
    int* px;
    px = array;

    control(px);
    
    printf("%d \n", array[0]);
    printf("%d", array[1]);
   
return 0;}

void control(int* p){

    *p = 25;
    
    p++;
    *p += 35;

}