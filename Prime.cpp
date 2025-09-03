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
 
    if( Prime(10))
    {
        cout<<"It's a Prime"<<endl;
    }
    else
    {
        cout<<"It Not Is a Prime"<<endl;
    }
    return 0;
}