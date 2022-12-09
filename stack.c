#include<stdio.h>
#include<stdlib.h>

#define Size 5

int top=-1;
int stack[Size];
void push();
void pop();
void peek();

int main()
{   int choice;
    while(1)
    {
        printf("\n operations performed by stack\n");
        printf("\n 1.push\n 2.pop\n 3.peek\n 4.exit\n");
        printf("\nenter the choice\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: push();
            break;

            case 2: pop();
            break;

            case 3: peek();
            break;

            case 4: exit(0);
            break;

            default: printf("\n invalid options!!!\n");
        }
    }
    
}


void push()
{
    int x;

    if(top==Size-1)
    {
        printf("stack overflow\n");
    }

    else{
        printf("enter the elements in the stack\n");
        scanf("%d", &x);
        top=top+1;
        stack[top]=x;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("element poped is %d", stack[top]);
        top=top-1;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("stack underflow, stack is empty\n");
    }
    else
    {
        printf("elements in the stack are:\n");
        for(int i=top; i>=0; --i)
        printf("%d\n",stack[i]);
    }
}
