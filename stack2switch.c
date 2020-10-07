#include<stdio.h>
int s[10],top = -1;
void main()
{
    int value,choice;
     printf("1.Push\n");
     printf("2.Pop\n");
     printf("3.Display\n");
     printf("4.Exit");
     printf("Enter your choice");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1:
         printf("Enter the value");
         scanf("%d",&value);
         push(value);
         break;
     case 2:
        printf("POP");
        break;
     case 3:
        printf("Display");
        break;
     case 4:
       printf("exit");
        exit(0);
     default:
      printf("wrong choice");
     }
}
     void push(int value)
{
    if(top==9)
    {
        printf("Stack is full");

    }
    else{
        top=top+1;
        s[top]=value;
    }
}
