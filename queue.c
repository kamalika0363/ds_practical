#include<stdio.h>
#include<stdlib.h>
#define size 100
void enqueue();
void dequeue();
void show();

int queue[size];
int rear=-1;
int front=-1;

int main()
{
    int ch;
    while(1)
    {
        printf("\noperations of queue\n");
        printf("\n1.enqueue\n2.dequeue\n3.show\n4.exit\n");
        printf("\nenter any choice\n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: enqueue();
            break;

            case 2: dequeue();
            break;

            case 3: show();
            break;

            case 4: exit(0);


            default: printf("\ninvalid choice !!!\n");
        }
    }
}

void enqueue()
{
    int insert_item;
    if(rear==size-1)
    {
        printf("\nqueue overflow\n");
    }
    else
    {
        if (front==-1)
        
            front=0;
            printf("\nelement inserted in the queue is:\n");
            scanf("%d", &insert_item);
            rear=rear+1;
            queue[rear]=insert_item;
        
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("\nunderflow!!!\n");
        return;
    }
    else
    {
        printf("\nelements dequeued are:%d\n", &queue[front]);
        front=front+1;
    }
}

void show()
{
    if(front==-1)
    {
        printf("\nempty queue\n");
    }
    else
    {
        printf("\nqueue\n");
        for(int i=0; i<=rear; i++)
        {
            printf("%d", queue[i]);
            printf("\n");
        }
    }
}
