#include <iostream>
using namespace std;

int main()
{
    int n=1111;
    int bit, count=0;

while(n>0){

     bit=n&1;
     
     if(bit==1)
     {
        count++;
     }
     n=n>>1;
}
cout<<count;
}



