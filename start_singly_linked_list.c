#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node*next;
};
struct node*head;


void insert();
void delete();
void display();


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

        case 3: display();
        break;

        case 4: exit(0);

        default: printf("invalid option\n");
    }
    
}
}

void insert()
{
    struct node*ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("\n Overflow\n");
    }
    else
    {
        printf("\n enter a value\n");
        scanf("%d", &item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\n node inserted\n");
    }
}

void delete()
{
    struct node*ptr;
    if(head==NULL)
    {
        printf("\n list is empty\n");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        //free(ptr);
        printf("\n node deleted\n");
    }
}

void display()
{
    struct node*ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("nothing in the node\n");
    }
    else
    {
        printf("the values are\n");
        while(ptr!=NULL)
        {
            printf("\n %d", ptr->data);
            ptr=ptr->next;
        }
    }
}
