#include <stdio.h>
#include <string.h>

int main(){
    
    char word[100];
    int ascii[256] = {0};

    printf("Enter a word: \n");
    scanf("%s", word);
    
    int i;
    int length = strlen(word);

    for(i=0; i<length; i++)
       {
        ascii[word[i]]++;
       }

    for(i=0; i<256; i++)
       {
        if(ascii[i] > 0)
          {
           printf("The letter %c repeats %d times. \n",i, ascii[i]);
          }
       }  
       
return 0;}