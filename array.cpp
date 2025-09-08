#include <iostream>
using namespace std;

int main()
{
    int array[5];
    int n=5;

    for(int i=0;i<n;i++)
    {
        cout<<"put the value of i : "<<i<<endl;
        cin>>array[i];
        
    }

    
    for(int i=0;i<n;i++)
    {
        cout<<" the value of i : "<<i<<endl;
        cout<<array[i];
        
    }
}