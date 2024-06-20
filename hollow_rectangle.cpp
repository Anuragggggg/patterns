#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter the numbers of rows"<<endl;
    cin>>r;
    cout<<"enter the numbers of columns"<<endl;
    cin>>c;
    for(int i=0; i<r; i++)
    {
        if(i==0 || i==r-1)
        {
            for( int j=0; j<c; j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for(int j=0; j<c-2; j++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}