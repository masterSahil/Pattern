// Q.45
// RW1
// RW2 RW2
// RW3 RW3 RW3
// RW4 RW4 RW4 RW4

#include<iostream>
using namespace std;

int main()
{
    int n = 1;

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"RW"<<n<<" ";
        }
        n++;
        cout<<endl;
    }
}