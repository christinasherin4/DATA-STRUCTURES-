#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<cstdlib>
struct Node
{
    int data;
    struct Node *next;
}*top = NULL;

void push(int val);
void pop();
void display();

int main()
{
    int ch,val;
    printf("\n :: Stack using linked list : : \n");
    while(1)
    {
        printf("\n------MENU--------\n");
        printf("1.Push \n 2.Pop \n 3.Display\n4.Exit\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the value to be inserted: ");
            scanf("%d",&ch);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:printf("\nWRONG SELECTION!!\n");
        }
    }
}


void push(int val)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    if(top == NULL)
        newNode->next = NULL;
    else
        newNode->next = top;
        top = newNode;
        printf("\nINSERTION IS SUCCESSFULL!");
}

void pop()
{
    if(top == NULL)
        printf("\n Stack is empty");
    else{
        struct Node *temp = top;
        printf("\n Deleted element %d",temp->data);
        top=temp->next;
        free(temp);
    }
}

void display()
{
    if(top==NULL)
        printf("\n Stack is Empty!!\n");
    else{
         struct Node *temp = top;
         while(temp->next!=NULL)
         {
             printf("%d",temp->data);
             temp=temp->next;
         }
    }
}

