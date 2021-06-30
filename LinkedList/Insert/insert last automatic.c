#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

void insert_last()
{
    int num;
    scanf("%d",&num);

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = NULL;
    if (head==NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *p;
        p = head;
        while (p->next!=NULL)
        {
            p = p->next;
        }
        p->next = newnode;
    }
}

void display()
{
    struct node *p;
    p = head;
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}

int main()
{
   int i,n;
   printf("How many value you want input: ");
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
       insert_last();
   }

   display();
}
