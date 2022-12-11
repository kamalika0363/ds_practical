#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insert();
void delete();
void show();

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;

void main()
{
    int ch;
while(1)
{
    printf("\n operations\n");
    printf("\n 1.insert\n 2.delete\n 3.display\n 4.exit");
    printf("\n enter your choice\n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1: insert();
        break;

        case 2: delete();
        break;

        case 3: show();
        break;

        case 4: exit(0);

        default: printf("invalid option\n");
    }
    
}
}

void insert()
{
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("\n overflow\n");
    }

    else
    {
        printf("\n enter the value\n");
        scanf("%d", &item);

        if(head==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            ptr->data=item;
            head=ptr;
        }
        else
        {
            ptr->data=item;
            ptr->prev=NULL;
            ptr->next=head;
            head->prev=ptr;
            head=ptr;
        }
        printf("\n node inserted\n");
    }
}

void delete()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\n underflow\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        printf("\n node deleted\n");
    }
    else
    {
        ptr=head;
        head=head->next;
        head->prev=NULL;
        printf("\n node deleted\n");
    }
}

void show()
{
    struct node *ptr;
    printf("\n printing the values\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
