// 5
// 5 5
// 5 5 5
// 5 5 5 5
// 5 5 5 5 5

#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<5;
        }
        cout<<endl;
    }
}