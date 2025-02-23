#include <stdio.h>
#include <string.h>

int main(){
    
    int i , length;
    char word[100] , temp;

    printf("Enter a word: \n");
    scanf("%s" , word);
    length = strlen(word);

    for(i=0;i<length/2;i++)
       {
        temp = word[i];
        word[i] = word[length-i-1];
        word[length-i-1] = temp;
       }

    printf("The reverse of the word you entered is:%s" , word);   

return 0;}
