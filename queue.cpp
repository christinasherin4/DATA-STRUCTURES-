#include<stdio.h>
#include<iostream>
#define SIZE 10
int q[10],front =-1,rear=-1;
void enqueue(int value);
void dequeue();
void display();
int main()
{
    int value,choice;
    while(1)
    {
        printf("\n1.Enqueue\n");
        printf("\n2.Dequeue\n");
        printf("\n3.Display\n");
        //printf("4.Exit\n");
        printf("\tEnter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter the value");
                scanf("%d",&choice);
                enqueue(value);
                break;
            case 2:
                printf("\nDequeue operation");
                dequeue();
                break;
            case 3:
                printf("\nDisplay");
                display();
                break;
           // case 4:
             //  exit(1);
            default:
                printf("Wrong choice\n");
                break;
        }
    }
}
void enqueue(int value)
{
    if (rear==9)
    {
        printf("\nQueue is full!\t,Insertion is not possible");

    }
    else if(front==-1)
    {
    front=0;
    rear=rear+1;
    q[rear]=value;
    printf("\ndata inserted");
}
void dequeue()
{
    if (front==-1 || front>rear)
    {
        printf("\nQueue is empty,Deletion is not possible\t");
        return;
    }
    else
    {
        printf("\ndeleted element is %d\t",q[front]);
        front=front+1;
    }
    //front=rear-1;
}
void display()
{
    if(front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        printf("%d",q[i]);
    }
}

