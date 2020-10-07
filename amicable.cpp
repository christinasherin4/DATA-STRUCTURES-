#include<iostream>
using namespace std;
int sum_pfact(int n)
{

    int sum =0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=1;
        }
    }return sum;
}

int main()
{
    int a,b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    if(sum_pfact(a)==b && sum_pfact(b)==a)
    {
        cout<<"the numbers "<<a<<"and"<<b<<"are amicable pairs."<<endl;
    }
    else{
        cout<<"the numbers "<<a<<" and "<<b<<" are not amicable pairs. "<<endl;

    }
return 0;
}
