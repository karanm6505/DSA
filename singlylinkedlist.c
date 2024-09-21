#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}Node;
Node* createNode(int data)
{
    Node* newnode = malloc(sizeof(Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

int main()
{
    Node* head = malloc(sizeof(Node));
    head = NULL;
}