//Back-end complete function Template for C++

// class Solution {
//   public:
//     vector<int> commonElements(vector<int> &a, vector<int> &b) {
//         // Your code here
//         int n1=a.size();
//         int n2=b.size();
        
//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());
        
        
//         int i=0; int j=0;
//         vector<int>ans;
//         set<int>st;
//         while(i<n1 && j<n2)
//         {
//             if(a[i]==b[j])
//             {
//              ans.push_back(a[i]);
//               i++;j++;
//             }
//             else if(a[i]>b[j])
//             {
//                 j++;
//             }
//             else{
//                 i++;
//             }
//             }
            
//             // for(auto i : st)
//             // {
//             //     ans.push_back(i);
//             // }
//             return ans;
//         }
//     };
