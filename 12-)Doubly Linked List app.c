#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
}Node;

Node* add_node_front(Node* head, int number);
Node* add_node_end(Node*head, int number);
Node* delete_node_front(Node* head);
Node* delete_node_end(Node* head);
int count(Node* head);
int sum(Node* head);
void print(Node* head);


int main(){
    
    Node* head = NULL;

    while(1)
    {
     int choice, number;

     printf("\n\t NENU \n");
     printf("1---->Add an element at the beginning. \n");
     printf("2---->Add an element at the end. \n");
     printf("3---->Delete an element at the beginning. \n");
     printf("4---->Delete an element at the end. \n");
     printf("5---->Show number of elements. \n");
     printf("6---->Show sum of elements. \n");
     printf("7---->print all elements. \n");
     scanf("%d", &choice);

     switch(choice)
     {
      case 1:
      printf("Enter a number: \n");
      scanf("%d", &number);
      head = add_node_front(head, number);
      break;

      case 2:
      printf("Enter a number: \n");
      scanf("%d", &number);
      head = add_node_end(head, number);
      break;

      case 3:
      delete_node_front(head);
      break;

      case 4:
      delete_node_end(head);
      break;

      case 5:
      count(head);
      break;

      case 6:
      sum(head);
      break;

      case 7:
      print(head);
      break;

      default:
      printf("Invalid choice. Enter a valid choice. \n");

     }
    }

return 0;}

Node* add_node_front(Node* head, int number){

    Node* newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL)
      {
       printf("New node could not be created. \n");
       return head;
      }

    newNode->data = number;
    newNode->prev = NULL;

    if(head == NULL)
      {
       newNode->next = NULL;
       return newNode;
      }  
    
    newNode->next = head;
    head->prev = newNode;

return newNode;}

Node* add_node_end(Node*head, int number){
    
    Node* newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL)
      {
       printf("New node could not be created. \n");
       return head;
      }

    newNode->data = number;
    newNode->next = NULL;

    if(head == NULL)
      {
       newNode->prev = NULL;
       return newNode;
      }

    Node* temp = head;

    while(temp->next != NULL)
    {
     temp = temp->next;
    }  

    temp->next = newNode;
    newNode->prev = temp;

return head;}

Node* delete_node_front(Node* head){

    if(head == NULL)
      {
       printf("There is no element to delete. \n");
       return NULL;
      }

    if(head->next == NULL)
      {
       free(head);
       return NULL;
      }  

    Node* temp = head->next;
    free(head);
    temp->prev = NULL;

return temp;}

Node* delete_node_end(Node* head){

    if(head == NULL)
      {
       printf("There is no element to delete. \n");
       return NULL;
      }

    if(head->next == NULL)
      {
       free(head);
       return NULL;
      }

    Node* temp = head;

    while(temp->next->next != NULL)
    {
     temp = temp->next;
    }  

    free(temp->next);
    temp->next = NULL;

return head;}

int count(Node* head){

    int x = 0;

    Node* temp = head;

    while(temp != NULL)
    {
     x += temp->data;
     temp = temp->next;
    }

return x;}

int sum(Node* head){

    int b = 0;
    Node* temp = head;

    while(temp != NULL)
    {
     b++;
     temp = temp->next;
    }

return b;}

void print(Node* head){

    if(head == NULL)
      {
       printf("The list is empty. \n");
       return;
      }

    Node* temp = head;

    while(temp != NULL)
    {
     printf("%d<->", temp->data);
     temp = temp->next;
    }
    printf("NULL");

}






