#include <stdio.h>
#include <string.h>

struct Employee{
    int age;
    char city[50];
};

struct Communication{
    char name[50];
    float wage;
    int number;
    struct Employee knowledge;
};

int main(){
    
    struct Communication array[2];

    struct Communication Employee1 = { "MAX" , 28.560 , 100 , { 25 , "LONDON" } };
    struct Communication Employee2 = { "LUCİAN" , 35.000 , 101 , { 29 , "AMSTERDAM" } };

    array[0] = Employee1;
    array[1] = Employee2; 

    int i;

    for(i=0; i<2; i++)
       {
        if( strcmp( "LONDON" , array[i].knowledge.city ) == 0 )
          {
           printf("Name:%s  Number:%d  Age:%d \n" , array[i].name , array[i].number , array[i].knowledge.age);
          }
       }

return 0;}
