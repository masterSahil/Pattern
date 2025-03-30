// Q.48
// 0
// 1 3
// 5 7 9
// 11 13 15 17

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
            if (n<1)
            {
                n++;
            }
            else
            {
                n+=2;
            }
        }
        cout<<endl;
    }
}