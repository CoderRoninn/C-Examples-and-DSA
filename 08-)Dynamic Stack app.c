#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
    int data;
    struct Stack* next;
}Node;

Node* temp = NULL;
Node* top = NULL;

void push(int number);
void pop();
void display();
void peek();

int main(){

    int choice, number;

    while(1)
    {
     printf("1.Push. \n");
     printf("2.Pop. \n");
     printf("3.Display. \n");
     printf("4.Peek. \n");
     printf("5.Exit. \n");
     
     scanf("%d", &choice);

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
      peek();
      break;

      case 5:
      printf("Checking Out. \n");
      exit(0);
      break;

      default:
      printf("Invalid choice. Enter valid choice. \n");
      break; 
     }
     
    }


return 0;}

void push(int number){

    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = number;

    if(top == NULL)
      {
       newNode->next = NULL;
       top = newNode;
      }
    
    else
    {
     newNode->next = top;
     top = newNode;
    }

}

void pop(){

    if(top == NULL)
      {
       printf("The stack is empty so you can't remove an element from stack. \n");
      }

    else
    {
     temp = top->next;
     printf("The number you removed from stack is : %d \n", top->data);
     free(top);
     top = temp;
    }  

}

void display(){
    
    if(top == NULL)
      {
       printf("There are no elements to show. \n");
      }

    else
    {
     temp = top;

     printf("The elements sorted by stack are: \n");

     while(temp != NULL)
     {
      printf("%d \n", temp->data);
      temp = temp->next;
     }
    }  

}

void peek(){

    if(top == NULL)
      {
       printf("There is no top element to show. \n");
      }

    else
    {
     printf("The top element of stack is: %d \n", top->data);
    }  

}