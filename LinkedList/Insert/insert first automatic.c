#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

void insert_first()
{
    struct node *temp,*newnode;
    int value;
    scanf("%d",&value);
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    if (head==NULL)
    {
        head = newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }

}

void display()
{
    struct node *p;
    p=head;
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    int i,n;
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        insert_first();
    }
    display();
}

