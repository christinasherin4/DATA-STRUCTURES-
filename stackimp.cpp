#include<stdio.h>
#include<conio.h>
#include<cstdlib>
void push();
void pop();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int main()
{
    int choice=0;
    printf("-----Stack implementation using linked list-------");
    do
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit");
            return 0;
        default:
            printf("Enter valid choice");
        }
    }while(1);
}
void push()
{
    int data;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Item cannot be pushed");
    }
    else{
        printf("Enter the value");
        scanf("%d",&data);
        if(head==NULL)
        {
            ptr->data=data;
            ptr->next=NULL;
            head=ptr;
        }
        else{
            ptr->data=data;
            ptr->next=head;
            head=ptr;
        }
        printf("Item pushed");
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if(head==NULL)
    {
        printf("Underflow");
    }
    else
    {
        item=head->data;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("Item popped");
    }
}

void display()
{
    int i;
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("Stack is empty\n");
    }
    else{
        printf("Printing elements in stack\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
