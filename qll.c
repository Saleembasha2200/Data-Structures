#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*newnode,*temp;
struct node* rear=NULL;
struct node* front=NULL;
void enqueue()
{
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("data:");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    if(front==NULL)
    {
        rear=newnode;
        front=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
    temp=front;
    if(front==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("elements of the queue are:\n");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void dequeue()
{
    int item;
    if(front==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
    item=front->data;
    front=front->next;
    printf("dequeued item is:%d\n",item);
    }
}
void main()
{
    int ch;
    do
    {
        printf("enter 1-to enqueue.\n2-to dequeue.\n3-to display.\n4-to quit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
        }
    }while(ch<=3 && ch>0);
}
