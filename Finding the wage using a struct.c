#include <stdio.h>

struct Employee{
    int number;
    float wage;
    int age;
};

struct Communication{
    char name[50];
    char surname[50];
    char city[50];
    struct Employee knowledge;
};

int main(){
    
    struct Communication array[3];

    struct Communication a1 = {"DOGUKAN", "SUME", "MERSIN", {100, 27.450, 24}};
    array[0] = a1;

    array[1] = (struct Communication) {"EMIR", "SUME", "ANKARA", {101, 30.000, 17}};

    array[2] = (struct Communication) {"TOFAN", "SUME", "ISTANBUL", {102, 35.000, 29}};

    int i;

    for(i=0; i<3; i++)
       {
        if(array[i].knowledge.wage >= 29.000)
          {
           printf("Name: %s  Surname: %s  City: %s  Age: %d \n", array[i].name, array[i].surname, array[i].city, array[i].knowledge.age);
          }
       }

return 0;}