#include <stdio.h>
#include <stdlib.h>
#define n 10

typedef struct Stack{
     int array[n];
     int top;
}Stack;

int isFull();
int isEmpty();
void push(int number);
void pop();
void display();

Stack x;

int main(){
    
    x.top = -1;

    int choice, number;

    while(1)
    {
     printf("Enter a choice:  1.Adding  2.Removing  3.Printing  4.Exit \n");
     scanf("%d" , &choice);

     switch(choice)
     {
      case 1:
      printf("Enter a number to add to stack: \n");
      scanf("%d", &number);
      push(number);
      break;

      case 2:
      pop();
      break;

      case 3:
      display();
      break;

      case 4:
      printf("Checking Out. \n");
      exit(0);
      break;

      default:
      printf("Invalid choice. Enter a valid choice. \n");
      break;
     }

    }

return 0;}

int isFull(){

return x.top == n-1;}

int isEmpty(){

return x.top == -1;}

void push(int number){

    if(isFull())
      {
       printf("The stack is full so you can't add an element. \n");
      }

    else
    {
     x.top++;
     x.array[x.top] = number;
    }  

}

void pop(){

    if(isEmpty())
      {
       printf("The stack is empty so you can't remove an element from stack. \n");
      }

    else
    {
     printf("The number you removed from stack is: %d \n", x.array[x.top]);
     x.top--;
    }  

}

void display(){

    if(isEmpty())
      {
       printf("The stack is empty. \n");
      }

    else
    {
     int i;

     printf("The elements sorted by stack are: \n");

     for(i=x.top; i>-1; i--)
        {
         printf("%d \n", x.array[i]);
        }
        
    }  

}
