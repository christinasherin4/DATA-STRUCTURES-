#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class stack{
  private:
  int top;
  int arr[5];
  public:
      stack ()
      {
          top==-1;
          for(int i;i<5;i++)
          {
              arr[i]=0;
          }
      }

      bool isEmpty()
      {
          if(top==-1)
            return true;
          else
            return false;
      }
      bool isFull()
      {
          if(top==4)
            return true;
          else
            return false;
      }
      void push(int val)
      {
          if(isFull())
          {
              cout<<"Stack is full!!\tInsertion not possible"<<endl;
          }
          else
          {
            top++;
            arr[top]=val;
          }
          }

      int pop()
      {
          if(isEmpty())
          {
              cout<<"Stack is empty"<<endl;
              return 0;
          }
          else
          {
              int popvalue = arr[top];
              arr[top] = 0;
              top--;
              return popvalue;
          }
        }
        int count()
        {
            return(top + 1);
        }
        int peek(int pos)
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
                return 0;
            }
            else
            {
                return arr[pos];
            }
        }
        void change(int pos,int val)
        {
            arr[pos] = val;
            cout<<"Value changed at location"<<pos<<endl;
        }
        void display()
        {
            cout<<"All values in the stack are"<<endl;
            for(int i = 4;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
};

int main()
{
    stack s1;
    int option,position,value;
    do
    {
     cout<<"Enter the operation to perform:\t.Enter 0 to exit"<<endl;
     cout<<"1.Push"<<endl;
     cout<<"2.Pop"<<endl;
     cout<<"3.isEmpty()"<<endl;
     cout<<"4.isFull()"<<endl;
     cout<<"5.peek()"<<endl;
     cout<<"6.count"<<endl;
     cout<<"7.change"<<endl;
     cout<<"8.display()"<<endl;
     cout<<"9.clear screen"<<endl<<endl;

     cin>>option;
     switch(option)
     {
     case 1:
        cout<<"Enter an item to push in the stack"<<endl;
        cin>>value;
        s1.push(value);
        break;
     case 2:
        cout<<"Pop function called-poped value:"<<s1.pop()<<endl;
     case 3:
        if(s1.isEmpty())
            cout<<"Stack is Empty"<<endl;
        else
            cout<<"Stack is not Empty"<<endl;
        break;
     case 4:
        if(s1.isFull())
            cout<<"Stack is Full"<<endl;
        else
            cout<<"Stack is not Full"<<endl;
        break;
     case 5:
        cout<<"Enter the position of item you want to peek:\t"<<endl;
        cin>>position;
        cout<<"Peek Function Called-Value at position"<<position<<"is"<<s1.peek(position)<<endl;
    case 6:
        cout<<"Count function called - Number of items in stack are:"<<s1.count()<<endl;
    case 7:
        cout<<"Display Function Called-"<<endl;
        s1.display();
        break;
    case 8:
         cout<<"Display function Called-"<<endl;
         s1.display();
         break;
     //case 9:
       // system("cls");
        //break;
    default:
        cout<<"Enter Proper Option number  "<<endl;
    }while(option!=0)
return 0;
}
