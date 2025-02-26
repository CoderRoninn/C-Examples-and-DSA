#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;
Node* temp = NULL;

void add_node_front(int number);
void add_node_end(int number);
void add_node_middle(int number, int x);
void delete_node_front();
void delete_node_end();
void delete_node_middle(int x);
int sum();
int count();
void print();
void reverse();

int main(){
    
    while(1)
    {
     int number, x, choice;

     printf("\n\t NENU \n");
     printf("1---->Add an element at the beginning. \n");
     printf("2---->Add an element at the end. \n");
     printf("3---->Add an element in between. \n");
     printf("4---->Delete an element at the beginning. \n");
     printf("5---->Delete an element at the end. \n");
     printf("6---->Delete an element in the between. \n");
     printf("7---->Display the sum of the data. \n");
     printf("8---->Display the number of elements. \n");
     printf("9---->Print the elements. \n");
     printf("10---->Reverse the elements. \n");
     printf("11---->Exit. \n");
     scanf("%d", &choice);

     switch(choice)
     {
      case 1:
      printf("Enter a number: \n");
      scanf("%d", &number);
      add_node_front(number);
      break;

      case 2:
      printf("Enter a number: \n");
      scanf("%d", &number);
      add_node_end(number);
      break;

      case 3:
      printf("Enter a number. \n");
      scanf("%d", &number);
      printf("Before which data. \n");
      scanf("%d", &x);
      add_node_middle(number, x);
      break;

      case 4:
      delete_node_front();
      break;

      case 5:
      delete_node_end();
      break;

      case 6:
      printf("Enter the data of the element to delete. \n");
      scanf("%d", &x);
      delete_node_middle(x);
      break;

      case 7:
      printf("The sum of the elements is: %d", sum());
      break;

      case 8:
      printf("There are %d elements in the list. \n", count());
      break;

      case 9:
      print();
      break;

      case 10:
      reverse();
      break;

      case 11:
      printf("Checking Out... \n");
      exit(0);
      break;

      default:
      printf("Invalid choice. Enter a valid choice. \n");
     }
     
    }

return 0;}

void add_node_front(int number){
    
   Node* newNode = (Node*) malloc(sizeof(Node));

   if(newNode == NULL)
     {
      printf("New node could not be created. \n");
      return;
     }

    newNode->data = number; 

    if(head == NULL)
      {
       newNode->next = NULL;
       head = newNode;
       return;
      } 
    
    newNode->next = head;
    head = newNode;
    
}

void add_node_end(int number){
    
   Node* newNode = (Node*) malloc(sizeof(Node));

   if(newNode == NULL)
     {
      printf("New node could not be created. \n");
      return;
     }

    newNode->data = number;
    newNode->next = NULL;

    if(head == NULL)
      {
       head = newNode;
       return;
      }  

    temp = head;

    while(temp->next != NULL)
    {
     temp = temp->next;
    }   

    temp->next = newNode;
    
}

void add_node_middle(int number, int x){
    
   Node* newNode = (Node*) malloc(sizeof(Node));

   if(newNode == NULL)
     {
      printf("New node could not be created. \n");
      return;
     }

    newNode->data = number; 

   if(head == NULL)
     {
      printf("Node with %d not found. \n", x);
      free(newNode);
      return;
     }  

   temp = head;

   while((temp->next != NULL) &&(temp->next->data != x))
   {
    temp = temp->next;
   }  

   if(temp->next == NULL)
     {
      printf("Node with %d not found. \n", x);
      free(newNode);
      return;
     }

    Node* temp2 = temp->next;
    temp->next = newNode;
    newNode->next = temp2; 

}

void delete_node_front(){
    
   if(head == NULL)
     {
      printf("There is no node to delete. \n");
      return;
     }
    
   if(head->next == NULL)
     {
      free(head);
      head = NULL;
      return;
     }  
   
   temp = head->next;
   free(head);
   head = temp;

}

void delete_node_end(){
    
   if(head == NULL)
     {
      printf("There is no node to delete. \n");
      return;
     }

   if(head->next == NULL)
     {
      free(head);
      head = NULL;
      return;
     }  

   temp = head;   

   while(temp->next->next != NULL)
   {
    temp = temp->next;
   } 

   free(temp->next);
   temp->next = NULL;

}

void delete_node_middle(int x){

   if(head == NULL)
     {
      printf("There is no node to delete. \n");
      return;
     }  

   if(head->next == NULL)
     {
      free(head);
      head = NULL;
      return;
     }

    temp = head;

    while((temp->next != NULL) && (temp->next->data != x))
    {
     temp = temp->next;
    }   

    if(temp->next == NULL)
      {
       printf("Node with %d not found. \n", x);
       return;
      }

    Node* temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);  
    
}

int sum(){
   
   int x = 0;

   temp = head;

   while(temp != NULL)
   {
    x += temp->data;
    temp = temp->next;
   }

return x;}

int count(){
   
   int b = 0;

   temp = head;

   while(temp != NULL)
   {
    b++;
    temp = temp->next;
   }

return b;}

void print(){
   
    temp = head;

    printf("The elements are: \n");

    while(temp != NULL)
    {
     printf("%d-> ", temp->data);
     temp = temp->next;
    }

    printf("NULL");

}

void reverse(){
   
    Node* temp2 = NULL;
    Node* prev = NULL;

    temp = head;

    while(temp != NULL)
    {
     temp2 = temp->next;
     temp->next = prev;
     prev = temp;
     temp = temp2;
    }

    head = prev;
    
}








