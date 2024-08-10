#include<iostream>
using namespace std;
void print_prime(int no)
{int count=0;
cout<<"The prime numbers till "<<no<<" are :";
    for(int i=2;i<=no;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0)
        cout<<i<<" ";
        count=0;

    }
}
int main()
{
    int no;
    cout<<"Enter a Number";
    cin>>no;
    print_prime(no);
}
