#include<stdio.h>
int queue[2],rear=0,front=0;
void enqueue()
{
    int data;
    if(rear==2)
    {
        printf("queue is full\n");
    }
    else
    {
        printf("data:");
        scanf("%d",&data);
        queue[rear]=data;
        rear+=1;
    }
}
void dequeue()
{
    int item;
    if(rear==front)
    {
        printf("queue is empty\n");
    }
    else
    {
        item=queue[front];
        front+=1;
        printf("dequeued item is:%d\n",item);
    }
}
void display()
{
    int i;
    if (front==rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("elements of the queue are:\n");
        for(i=front;i<rear;i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}
void main()
{
    int ch;
    do
    {
        printf("enter 1 -to enqueue.\n2-to dequeue.\n3-to display\n4-to quit");
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
