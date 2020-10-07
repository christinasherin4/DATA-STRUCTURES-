#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
struct node
{
    int data;
    struct node*next;
};

struct node *head,*newnode,*temp;
head = 0;int choice;
while(choice){
newnode=(struct node*)malloc(size of(struct node));
printf("Enter data you want to insert : ");
scanf("%d"&newnode->data);
newnode->next=0;
 if(head==null)
 {
 head=temp=newnode;
 }
 else{
    temp->next=newnode;
    temp=newnode;
 }

 printf("Do you want to continue(0,1)?");
 scanf("%d",&choice);
 }
 temp = head;
 while(temp!=0)
 {
     printf("%d",temp->data);
     temp=temp->next;

 }
 getch();

 }
}
}
