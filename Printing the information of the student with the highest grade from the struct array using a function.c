#include <stdio.h>

struct Student{
    char name[50];
    char surname[50];
    int number;
    float grade;
};

void control(struct Student a[], int size);

int main(){
    
    int i, n;
    printf("How many students there will be? \n");
    scanf("%d", &n);
    
    struct Student x[n];

    for(i=0; i<n; i++)
       {
        printf("Enter the information for student number %d.  1.Name  2.Surname  3.Number  4.Grade", i+1);
        scanf("%s%s%d%f", x[i].name, x[i].surname, &x[i].number, &x[i].grade);
       }

    control(x, n);  

return 0;}

void control(struct Student a[], int size){
    
    int i, index = 0;
    float highGrade = a[0].grade;

    for(i=1; i<size; i++)
       {
        if(highGrade < a[i].grade)
          {
           highGrade = a[i].grade;
           index = i;
          }
       }

    printf("Name:%s  Surname:%s  Number:%d  Grade:%f", a[index].name, a[index].surname, a[index].number, a[index].grade); 

}