// Circular linked list 

#include<stdio.h>
#define MAX 7

int queue[MAX];
int front=6;
int rear=6;

void insert(int element)
{
    if(rear==MAX-1)
        rear = 0;
    else
        rear=rear+1;
    if(rear==front)
    {
        printf("Queue is Full\n");
        //return;
    }
    queue[rear] = element;
}

int del()
{
    if(front==rear)
    {
        printf("Queue is Empty\n");
        return;
    }
    if(front==MAX-1)
        front=0;
    else
        front = front+1;
    return queue[front];
}

void display()
{
    if(rear==front)
   {
    printf("Queue is Empty\n");
    }
    if(front==rear)
    {
        int front = 0;
        int rear = MAX-1;
    }
    else front=0;
    int i;
    for(i=front; i<=rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

void main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(6);

    display();
}
