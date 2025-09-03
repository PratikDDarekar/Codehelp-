#include <iostream>
using namespace std;

int main()
{
int n=5;
int rem, count=0;

while(n>0)
{
rem=n%2;

if(rem==1)
{
    count++;
}
n=n/2;
}
cout<<count<<"is the count of set bit"<<endl;

    return 0;
}