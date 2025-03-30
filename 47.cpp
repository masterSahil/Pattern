// Q.47
// 0
// 2 4
// 6 8 10
// 12 14 16 18

#include<iostream>
using namespace std;

int main()
{
    int n=0;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<n<<' ';
            n+=2;
        }
        cout<<endl;
    }
}