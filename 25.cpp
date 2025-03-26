// A A A A A
// A A A A
// A A A
// A A
// A

#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=i; j<=5; j++)
        {
            cout<<'A';
        }
        cout<<endl;
    }
}