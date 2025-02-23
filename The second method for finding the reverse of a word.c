#include <stdio.h>
#include <string.h>

void control(char x[]);

int main(){
    
    char word[100];
    printf("Enter a word:\n");scanf("%s",&word);
    
    control(word);

return 0;}

void control(char x[]){

    int size = strlen(x);

    char word2[size+1];

    int i;

    for(i=0; i<size; i++)
       {
        word2[i] = x[size-1-i];
       }

    word2[size] = '\0';

    printf("The reverse of word you entered is:%s", word2);

}