#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct queue
{
    int rear,front;
    int data[SIZE];
};
typedef struct queue QUEUE;
void enqueue(QUEUE*q,int item)
{
    if(q->rear==SIZE-1)
        printf("\n queue is full");
    else
    {
        q->rear=q->rear+1;
        q->data[q->rear]=item;
        if(q->front==-1)
            q->front=0;
    }

}
void dequeue(QUEUE*q)
{
    if(q->front==-1)
        printf("\n queue is empty");
    else
    {
        printf("\nThe deleted element is %d",q->data[q->front]);
        if(q->front==q->rear)
        {
            q->front=-1;
            q->rear=-1;
        }
        else
            q->front=q->front+1;

    }
}
void display(QUEUE q)
{
    if(q.front==-1)
        printf("\n queue is empty");
    else
    {
        printf("\nThe queue content are:\n");
        int i;
        for(i=q.front;i<=q.rear;i++)
        {
            printf("%d\n",q.data[i]);
        }
    }
}
int main()
{
    QUEUE q;
    q.front=-1;
    q.rear=-1;
    int item,ch;
    for(;;){
    printf("\n 1.insertion");
    printf("\n 2.deletion");
    printf("\n 3.display");
    printf("\n 4.Exit");
    printf("\n Read the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("\n Read the item to be push");
               scanf("%d",&item);
               enqueue(&q,item);
               break;
        case 2:dequeue(&q);
               break;
        case 3:display(q);
               break;
        default:exit(0);
    }
    }
    return 0;
}
