// Q.36
// 15
// 14 13
// 12 11 10
// 9 8 7 6
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int n=15;

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<n;
            n--;
        }
        cout<<endl;
    }
}