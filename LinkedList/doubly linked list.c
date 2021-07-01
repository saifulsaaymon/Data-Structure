//.... Doubly linked list....

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct node* next;
    struct node* prev;
};

struct Node* head=NULL;

struct Node* GetNewNode(int x)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertfirst(int x)
{
    struct Node* newNode = GetNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insertrlast(int x)
{
    struct Node* temp = head;
    struct Node* newNode = GetNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
    newNode->prev = temp;
}

struct Node* insertmiddle(int x, int index)
{
     if(index<0) return NULL;

     int currentIndex = 2;
     struct Node* currentNode = head;

     while(currentNode != NULL && index>currentIndex)
     {
         currentNode = currentNode->next;
         currentIndex++;
     }

     if(index>0 && currentNode==NULL) return NULL;

     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
     newNode->data = x;

     struct Node* temp = currentNode->next;
     currentNode->next = newNode;
     newNode->prev = currentNode;
     newNode->next = temp;
     temp->prev = newNode;
}

void deletefirst()
{
    head = head->next;
    head->prev = NULL;
}

void deletelast()
{
    struct Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    struct Node* storeprev = temp->prev;
    storeprev->next = NULL;

}

void print()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    insertfirst(10);
    insertfirst(11);
    insertrlast(8);
    insertmiddle(5,2);
    insertmiddle(7,3);
    print();
    printf("After Delete First value\n");
    deletefirst();
    print();
    printf("After Delete Last value\n");
    deletelast();
    print();
    printf("After Delete Last value\n");
    deletelast();
    print();
}
