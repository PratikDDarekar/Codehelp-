class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int>ans;
        int carry = 0;
        ans.push_back(1);//now its size is 1
        
        for(int i=2;i<=n;i++)//initializa from 2
        {
            for(int j=0;j<ans.size();j++)
            {
                int x = ans[j]*i+carry;
                ans[j]=x%10;
                carry=x/10;
            }
            if(carry)
            {
                ans.push_back(carry);
            }
            carry=0;//dont forget
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};