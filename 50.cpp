// Q.50 (N to 1)
// where, N = User input
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Please Enter the Number ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}