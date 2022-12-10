#include<stdio.h>
#include<stdlib.h>
#define size 6
int cir_queue[size];
int front=-1;
int rear=-1;
void enQueue();
void deQueue();
void show();

int main()
{
    int ch, x;
    while(1)
    {
    printf("\n operations of circular queue\n");
    printf("\n 1.enQueue\n 2.deQueue\n 3.show\n 4.exit\n");
    printf("enter your choice\n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1: 
        printf("enter the element to be inserted\n");
        scanf("%d", &x);
        enQueue(x);
        break;

        case 2: deQueue();
        break;

        case 3: show();
        break;

        case 4: exit(0);

        default: printf("invalid choice!!!\n");
    }
    }
}


void enQueue(int element)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        cir_queue[rear]=element;
    }
    else if((rear+1)%size==front)
    {
        printf("queue overflow\n");
    }
    else
    {
        rear=(rear+1)%size;
        cir_queue[rear]=element;
    }
}

void deQueue()
{
    if(rear==-1 && front==-1)
    {
        printf("queue underflow\n");
    }
    else if(front==rear)
    {
        printf("the deQueued element is %d", cir_queue[front]);
        front--;
        rear--;
    }
    else
    {
        printf("the deQueued element is %d", cir_queue[front]);
        front=(front+1)%size;
    }
}

void show()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue empty\n");
    }
    else
    {
        printf("elements in the queue are \n");
        while(i<=rear)
        {
            printf("%d", cir_queue[i]);
            i=(i+1)%size;
            printf("\n");
        }
    }
}
