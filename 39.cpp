// Q.39
// 1331 1331 1331 1331
// 121 121 121
// 11 11
// 1

#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=4; j>=i; j--)
        {
            if (i == 1)
            {
                cout<<1331<<' ';
            }
            else if (i == 2)
            {
                cout<<121<<' ';
            }
            else if (i == 3)
            {
                cout<<11<<' ';
            }
            else{
                cout<<1<<' ';
            }
        }
        cout<<endl;
    }
}