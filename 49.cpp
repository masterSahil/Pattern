// Q.49 (1 to N)
// where, N = User input
// 1
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a Number ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<' ';
        }
        cout<<endl;
    }
}