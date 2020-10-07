#include<stdio.h>
#include<iostream>
using namespace std;
int stack[10];
int top=-1;
void push(int val);
int is_operand(char);
int precedence(char symbol);
char pop();

void push(int value)
{
    if(top>=9)
    {
        printf("Stack overflow!!,Insertion not possible");


    }
    else{
        top++;
        stack[top]=value;
    }
}

char pop()
{
    if(top==-1)
    {
     cout<<"Stack is empty"<<endl;
     return 0;
    }
    else
    {
        char a;
        a=stack[top];
        top=top-1;
        return a;
    }
}
int is_operator(char ch)
{
    if(ch == '^' || ch=='*' || ch=='/' || ch=='+' || ch=='-')
        return 1;
    else
        return 0;
}

int precedence(char symbol)
{
    if(symbol=='^')
        return 3;
    else if(symbol == '*' || symbol == '/')
        return 2;
    else if(symbol == '+' || symbol ==  '-')
        return 1;
}


int is_operand(char)
{
char ch;

if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
 {
      return 1;
 }
 else
   {
       return 0;
   }
}

int main()
{
    char postfix[10],ch;
    int i=0,op1,op2,result,m;
    printf("Enter postfix expression");
    gets(postfix);
    while(postfix[i]!='\0')
    {
     ch=postfix[i];
     if(is_operand(ch)==1)
     {
         printf("Enter the value of %c",ch);
         scanf("%d",&m);
         push(m);
     }
     else{
        op1=pop();
        op2=pop();
        switch(ch)
        {
        case '+':
            result=op2+op1;
            push(result);
            break;
        case '^':
            result=op1^op2;
            push(result);
            break;
        case '*':
            result=op1*op2;
            push(result);
            break;
        case '/':
            result=op1/op2;
            push(result);
            break;
        case '-':
            result=op1-op2;
            push(result);
            break;
        }

     }

return 0;
}
}
