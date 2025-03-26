// A
// A A
// A A A
// A A A A
// A A A A A

#include<iostream>
using namespace std;

int main()
{
    for(int i=5; i>=1; i--)
    {
        for(int j=i; j<=5; j++)
        {
            cout<<'A';
        }
        cout<<endl;
    }
}