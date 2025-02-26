#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* add_node_front(Node* head, int number);
Node* add_node_end(Node* head, int number);
Node* add_node_middle(Node* head, int number,int x);
Node* delete_node_front(Node* head);
Node* delete_node_end(Node* head);
Node* delete_node_middle(Node* head, int x);
void print(Node* head);


int main(){
    
    Node* head = NULL;

    while(1)
    {
     int number, choice, x;

     printf("\n\t NENU \n");
     printf("1---->Add an element at the beginning. \n");
     printf("2---->Add an element at the end. \n");
     printf("3---->Add an element in between. \n");
     printf("4---->Delete an element at the beginning. \n");
     printf("5---->Delete an element at the end. \n");
     printf("6---->Delete an element in the between. \n");
     printf("7---->Print the elements. \n");
     printf("8---->Exit. \n");
     scanf("%d", &choice);

     switch(choice)
     {
      case 1:
      printf("Enter a number: \n");
      scanf("%d", &number);
      head = add_node_front(head,number);
      break;

      case 2:
      printf("Enter a number: \n");
      scanf("%d", &number);
      head = add_node_end(head,number);
      break;

      case 3:
      printf("Enter a number: \n");
      scanf("%d", &number);
      printf("Before which data. \n");
      scanf("%d", &x);
      head = add_node_middle(head, number, x);
      break;

      case 4:
      delete_node_front(head);
      break;

      case 5:
      delete_node_end(head);
      break;

      case 6:
      printf("Enter the number to delete node. \n");
      scanf("%d", &x);
      delete_node_middle(head, x);
      break;

      case 7:
      print(head);
      break;

      case 8:
      printf("Checking Out...\n");
      exit(0);
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

    if(head == NULL)
      {
       newNode->next = newNode;
       return newNode;
      } 

    Node* temp = head;

    while(temp->next != head)
    {
     temp = temp->next;
    }   

    newNode->next = head;
    temp->next = newNode;

return newNode;}        

Node* add_node_end(Node* head, int number){

    Node* newNode = (Node*) malloc(sizeof(Node));

    if(newNode == NULL)
      {
       printf("New node could not be created. \n");
       return head;
      }

    newNode->data = number;  

    if(head == NULL)
      {
       newNode->next = newNode;
       return newNode;
      }  

    Node* temp = head;

    while(temp->next != head)
    {
     temp = temp->next;
    } 

    newNode->next = head;
    temp->next = newNode;

return head;}

Node* add_node_middle(Node* head, int number,int x){

    Node* newNode = (Node*) malloc(sizeof(Node));

    if(newNode == NULL)
      {
       printf("New node could not be created. \n");
       return head;
      }

    newNode->data = number;

    if(head == NULL)
      {
       printf("Node with %d not found. \n", x);
       free(newNode);
       return NULL;
      }  

    Node* temp = head;

    while((temp->next != head) && (temp->next->data != x))
    {
     temp = temp->next;
    }    

    if((temp->next == head) &&(temp->next->data != x))
      {
       printf("Node with %d not found. \n", x);
       free(newNode);
       return head;
      }

    Node* temp2 = temp->next;
    temp->next = newNode; 
    newNode->next = temp2; 

return head;}

Node* delete_node_front(Node* head){
    
    if(head == NULL)
      {
       printf("There is no node to delete. \n");
       return NULL;
      }

    if(head->next == head)
      {
       free(head);
       return NULL;
      }  

    Node* temp = head;

    while(temp->next != head)
    {
     temp = temp->next;
    } 

    Node* temp2 = head->next;
    free(head);
    temp->next = temp2; 

return temp2;}

Node* delete_node_end(Node* head){

    if(head == NULL)
      {
       printf("There is no node to delete. \n");
       return NULL;
      }

    if(head->next == head)
      {
       free(head);
       return NULL;
      }  

    Node* temp = head;

    while(temp->next->next != head)
    {
     temp = temp->next;
    } 
    
    Node* temp2 = temp->next;
    temp->next = head;
    free(temp2);

return head;}

Node* delete_node_middle(Node* head, int x){

    if(head == NULL)
      {
       printf("There is no node to delete. \n");
       return NULL;
      }

    if(head->next == head)
      {
       free(head);
       return NULL;
      } 

    Node* temp = head;

    while((temp->next != head) &&(temp->next->data != x))
    {
     temp = temp->next;
    }  

    if((temp->next == head) &&(temp->next->data != x))
      {
       printf("Node with %d not found. \n", x);
       return head;
      } 

    Node* temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);

return head;}

void print(Node* head){

    if(head == NULL)
      {
       printf("The list is empty. \n");
       return;
      }

    Node* temp = head;

    while(1)
    {
     printf("%d ->",temp->data);
     temp = temp->next;

     if(temp == head)
       {
        break;
       }
    }
    printf("(HEAD) \n");  
}