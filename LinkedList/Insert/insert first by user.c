#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
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
void insert_first()
{
    struct node *newnode;
    int num;
    printf("which number you want to insert first: ");
    scanf("%d",&num);
    newnode=(struct node *)(malloc(sizeof(struct node)));
    newnode->data=num;
    newnode->next=head;
    head=newnode;
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        creat();
    }
    insert_first();
    display();
}

