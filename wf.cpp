#include<stdio.h>
#include<conio.h>
#include<cstdlib>
struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void enqueue(int);
void dequeue();
void display();

int main()
{
   int choice, value;
   printf("\n------ Queue Implementation using Linked List---------\n");
   while(1){
      printf("\n*** MENU ***\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 enqueue(value);
		 break;
	 case 2: dequeue(); break;
	 case 3: display(); break;
	 case 4: "EXIT";
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
void enqueue(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   printf("\nInsertion is Success!!!\n");
}
void dequeue()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d\n",temp->data);
	 temp = temp -> next;
      }
      printf("%d\n",temp->data);
   }
}
