// Q.38
// 1
// 11 11
// 121 121 121
// 1331 1331 1331 1331

#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if (i == 1)
            {
                cout<<1<<' ';
            }
            else if (i == 2)
            {
                cout<<11<<' ';
            }
            else if (i == 3)
            {
                cout<<121<<' ';
            }
            else
            {
                cout<<1331<<' ';
            }
        }
        cout<<endl;
    }
}