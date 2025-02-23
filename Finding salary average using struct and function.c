#include <stdio.h>

struct personal{
   int number;
   char city[20];
};

struct employee{
   char name[20];
   char surname[20];
   int age;
   float wage;
};

float a(struct employee x[],int size);

int main(){
      
    int i;
    struct employee array[3];
    for(i=0; i<3; i++)
        {
         printf("Input the wage of %d. employee:\n",i+1);scanf("%f",&array[i].wage);
        } 
        
    printf("The avarage of wages is:%.2f",a(array,3));  

return 0;}

float a(struct employee x[],int size){
    
    int i;
    float sum=0.0;

    for(i=0; i<size; i++)
       {
        sum=sum+x[i].wage;
       }

    float avarage=sum/size;

return avarage;}