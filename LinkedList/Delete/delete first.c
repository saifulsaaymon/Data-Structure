#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

creat()
{
    int val;
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&val);
    newnode->data=val;
    newnode->next = NULL;
    if(head==NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next=newnode;
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

void delete_first()
{
    struct node *q;
    q=head;
    head = head->next;
    free(q);
}

int main()
{
   int i,n;
   printf("How many value you want to take: ");
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
       creat();
   }
   delete_first();
   display();
}
