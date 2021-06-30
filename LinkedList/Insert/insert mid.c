#include<stdio.h>
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
void insert_mid()
{
    struct node *newnode,*temp;
    int num,pos,i=1;
    printf("Which position do you insert: ");
    scanf("%d",&pos);
    printf("Which number do you want to insert: ");
    scanf("%d",&num);
    newnode=(struct node*)(malloc(sizeof(struct node)));
    temp=head;
    newnode->data=num;
    newnode->next=NULL;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    newnode->next=temp->next;
     temp->next=newnode;
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
    printf("How many value you want to take: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        creat();
    }
    insert_mid();
    display();
}
