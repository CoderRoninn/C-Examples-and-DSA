#include <stdio.h>
#include <string.h>

void control(char* x, int size);

int main(){
    
    char word[100];
    printf("Enter a word. \n");
    scanf("%s", word);

    int n = strlen(word);

    control(word, n);

return 0;}

void control(char* x, int size){

    int i, j;

    for(i=0; i<size; i++)
       {
        for(j=i; j<size; j++)
           {
            printf("%c", *(x+j));
           }
        for(j=0; j<i; j++)
           {
            printf("%c", *(x+j));
           }
        printf("\n");    
       }
       
}