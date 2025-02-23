#include <stdio.h>
#include <string.h>

int main(){
    
    char word[100];
    int ascii[256] = {0};
    int repeated_number = 0;
    char repeated_letter = ' ';

    printf("Enter a word: \n");
    scanf("%s",word);

    int i, length = strlen(word);

    for(i=0; i<length; i++)
       {
        ascii[word[i]]++;
        if(ascii[word[i]] > repeated_number)
          {
           repeated_number = ascii[word[i]];
           repeated_letter = word[i];
          }
       }

     printf("The most repeated word is %c and it repeates %d times",repeated_letter, repeated_number); 

return 0;}