#include<stdio.h>
int top=-1,size;
void push(int a[])
{
    int item;
    if (top==size-1)
    printf("stack overflow\n");
    else
    {
        printf("enter an item to push into the stack:");
        scanf("%d",&item);
        top+=1;
        a[top]=item;
    }
}
void pop(int a[])
{
    int item;
    if (top<0)
    printf("stack underflow\n");
    else
    {
        item=a[top];
        top-=1;
        printf("popped item is :%d\n",item);
    }
}
void display(int a[])
{
    int i;
    if (top!=-1)
    {
        printf("stack elements are:\n");
        for(i=0;i<size;i++)
        printf("%d\t",a[i]);
        printf("\n");
    }
    else
    printf("empty stack\n");
}
void main()
{
    int ch;
    printf("enter size of the stack:");
    scanf("%d",&size);
    int a[size];
    do
    {
        printf("enter 1 to pop,2 to push,3 to display,4 to quit:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:pop(a);
            break;
            case 2:push(a);
            break;
            case 3:display(a);
            break;
        }
    }while(ch<=3);
}
