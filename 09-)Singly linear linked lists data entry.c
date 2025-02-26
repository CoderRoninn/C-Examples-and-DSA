#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

int main(){
    
    Node* newNode1 = (Node*) malloc(sizeof(Node));
    Node* newNode2 = (Node*) malloc(sizeof(Node));
    Node* newNode3 = (Node*) malloc(sizeof(Node));

    if(newNode1 == NULL || newNode2 == NULL || newNode3 == NULL)
      {
       printf("Memory allocation error. \n");
       return 1;
      }

    newNode1->data = 11;
    newNode1->next = newNode2;

    newNode2->data = 22;
    newNode2->next = newNode3;

    newNode3->data = 33;
    newNode3->next = NULL;

    printf("%d %d %d", newNode1->data, newNode2->data, newNode3->data);

    free(newNode1);
    free(newNode2);
    free(newNode3);

return 0;}
