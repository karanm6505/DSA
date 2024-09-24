#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}Node;
typedef struct cll
{
    Node* tail;
}CircularSLL;
void init(CircularSLL* List)
{
    List->tail = NULL;
}
Node* createNode(int data)
{
    Node* newnode = (CircularSLL*)(malloc(sizeof(CircularSLL)));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insertEnd(CircularSLL* List,int data)
{
    Node* newnode = createNode(data);
    if(List->tail == NULL)
    {
        List->tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        newnode->next = List->tail->next;
        List->tail->next = newnode;
        List->tail = newnode;
    }
}
void insertFront(CircularSLL* List, int data)
{
    Node* newnode = createNode(data);
    if(List->tail == NULL)
    {
        List->tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        newnode->next=List->tail->next;
        List->tail->next = newnode;
    }
}
void insertPos(CircularSLL* List,int data,int pos)
{
    
}