// Q.46
// D P D P D P D P
// D P D P D P
// D P D P
// D P

#include<iostream>
using namespace std;

int main()
{
    for(int i=5; i>=2; i--)
    {
        for(int j=1; j<=i; j++)
        {
            if(j%2==0)
            {
                cout<<'P';
            }
            else{
                cout<<'D';
            }
        }
        cout<<endl;
    }
}