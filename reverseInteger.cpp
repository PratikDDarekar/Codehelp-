#include <iostream>
using namespace std;

int main()
{
reverse(-125);
}

class Solution {
public:
    int reverse(int x) {
         bool isneg=false;

        int ans=0, rem=0;

        if(x<=INT_MIN)
        {
            return 0;
        }
        if(x<0)
        {
            isneg=true;
            x = -x;
        }
    
        while(x>0)
        {
            if(ans>INT_MAX/10)
            {
                return 0;
            }
            rem=x%10;
            ans=ans*10+rem;
            x=x/10;
        }
     
        return isneg ? -ans:ans;
    }
};