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
    newnode=(struct node *)(malloc(sizeof(struct node)));
    scanf("%d",&val);
    newnode->data=val;
     newnode->next=NULL;
     if(head==NULL)
     {
         head=newnode;
     }
     else
     {
         temp=head;
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newnode;
     }

}

insert_last()
{
    int num;
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value you want to insert last: ");
    scanf("%d",&num);
    newnode->data=num;
    newnode->next = NULL;
    temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
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
    creat();
   }
   insert_last();
   display();
}


