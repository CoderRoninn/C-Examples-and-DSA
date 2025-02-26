#include <stdio.h>
#include <string.h>

int control(char x[]);

int main(){
    
    char word[100];
    printf("Enter a word: \n");
    scanf("%s", word);

    int result = control(word);

    if(result)
      {
       printf("The word you entered is a palindrome. \n");
      }

    else
    {
     printf("The word you entered isn't a palindrome. \n");
    }  

return 0;}

int control(char x[]){
    
    int i = 0;
    int j = strlen(x)-1;

    while(j > i)
    {
     if(x[i] != x[j])
       {
        return 0;
       }
     i++;
     j--;  
    }

return 1;}