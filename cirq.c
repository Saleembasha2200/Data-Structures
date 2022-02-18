#include<stdio.h>
int cirq[3],rear=0,count=0,front=0;
void enqueue()
{
        int data;
        if(count==3)
        {
                printf("queue is full.\n");
        }
        else
        {
                printf("data:");
                scanf("%d",&data);
                cirq[rear]=data;
                rear=(rear+1)%3;
                count+=1;

        }
}
void dequeue()
{
        if(count==0)
        {
                printf("queue is empty\n");
        }
        else
        {
                printf("dequeued item is :%d\n",cirq[front]);
                front=(front+1)%3;
                count-=1;
        }
}
void display()
{
        int i;
        if(count==0)
        {
                printf("queue is empty\n");
        }
        else
        {
                printf("circular queue elements are:\n");
                for(i=front;i<rear+count;i++)
                {
                    if ((i>=3) && (i<=rear))
                    i%=3;
                        printf("%d\t",cirq[i]);
                }
                printf("\n");
        }
}
void main()
{
        int ch;
        do
        {
                printf("enter 1-to enqueue.\n2-to dequeue.\n3-to display.\n4-to quit.");
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
        }while(ch>0 && ch<=3);
}
