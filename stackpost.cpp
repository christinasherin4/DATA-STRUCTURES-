#include<stdio.h>
#include<iostream>
using namespace std;

int stack[100];
int top=-1;

void push(int item)
{
    if(top>=99)
    {
        printf("Stack overflow");
        return;
    }
    else{
        top = top+1;
        stack[top]=item;
    }
}

int pop()
{
    int item;
    if(top<0)
    {
        printf("stack underflow");
    }
    else{
        item=stack[top];
        top=top-1;
        return item;
    }
}

void Postfix(char postfix[100])
{

    int i;
    char ch;
    int val;
    int A,B;
    for(i=0;postfix[i]!=')';i++)
    {
        ch = postfix[i];
        if (isdigit(ch))
        {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            A = pop();
            B = pop();
            switch(ch)
            {
            case '*':
                val = B*A;
                break;
            case '/':
                val=B/A;
                break;
            case '+':
                val =B+A;
                break;
            case '-':
                val =B-A;
                break;
            }
            push(val);
        }
    }
    printf("\n Result of expression evaluation : %d \n",pop());
}

int main()
{
    int i;
    char postfix[100];
    printf("The given  4 operators are (*,/,+,-");
    printf("\n Enter post fix expression ,\n press ')' for ending the expression");
    for(i = 0;i<99;i++){
        scanf("%c",&postfix[i]);
        if(postfix[i]==')')
        {
            break;
        }
    }
    Postfix(postfix);
    return 0;
}


