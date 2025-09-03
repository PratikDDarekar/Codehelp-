#include <iostream>
using namespace std;


bool Prime(int n)
{
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
        return false;
    }
}
return true;
}



int main()
{
    int n=10;
    for(int i=1;i<=n;i++)
    {
     if( Prime(i))
    {
        cout<< i <<endl;
    }
    }
    return 0;
}