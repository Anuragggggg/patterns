#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout<<"  ";
        }
        for(int k=0; k<n-i; k++)
        {
            cout<<"*   ";
        }
        cout<<endl;
    }
}