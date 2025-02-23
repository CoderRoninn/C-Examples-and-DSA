#include <stdio.h>
#include <stdlib.h>
/*
Let's imagine we have a file called information_student that includes student information, such as Name, Surname, and Age.
For example:
DOGUKAN SUME 14
EMIR SUME 11
BATUHAN SUME 25
IBRAHIM SUME 29
NURSIN SUME 20

Read the file, display the student information, and find the average age of the students."
*/

int main(){
    FILE* fp = fopen("D:/information_student.txt", "r");
    
    char names[5][15];
    char surnames[5][15];
    int ages[5];

    if(fp == NULL){
        printf("Error.");
    }else{
        int i, sum = 0;
        for(i=0; i<5; i++){
            fscanf(fp, "%s", names[i]);
            fscanf(fp, "%s", surnames[i]);
            fscanf(fp, "%d", &ages[i]);
            printf("Name:%s  Surname:%s Age:%d\n", names[i], surnames[i], ages[i]);
            sum += ages[i];
            }
        printf("The average of ages is: %.2f\n", (double)sum / 5);    
    }
    fclose(fp);
            
return 0;}