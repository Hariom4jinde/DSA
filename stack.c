#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int data[SIZE],top=-1;
void push(int item)
{
    if(top==SIZE-1)
    {
        printf("\nStack overflow");
    }
    else
    {
        top=top+1;
        data[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nElement poped is %d",data[top]);
        top=top-1;
    }
}
void display()
{
    if(top==-1)
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("\n stack content are:\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",data[i]);
        }
    }
}

int main()
{
    int item,ch;
    for(;;)
    {
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.display");
        printf("\n 4.Exit");
        printf("\n Read choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Read element to be push:");
                   scanf("%d",&item);
                   push(item);
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
        }

    }
    return 0;
}
