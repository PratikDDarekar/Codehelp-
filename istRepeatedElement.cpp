#include<iostream>
#include<vector>
#include <unordered_map>
using  namespace std;


 int firstRepeated(vector<int> &arr);

int main()
{
    vector<int>arr={1,5,3,4,3,5,6};
    int n= firstRepeated(arr);
    cout<<n;
}


    int firstRepeated(vector<int> &arr) {
        
        // Brute Force
        // for(int i=0;i<arr.size();i++)
        // {
        //     bool isrepeated = false;
            
        //     for(int j=i+1;j<arr.size();j++)
        //     {
        //         if(arr[i]==arr[j])
        //         {
        //             isrepeated = true;
        //             return i+1;
        //         }
        //     }
        // }
        // return -1;
        
        
        
        //hashing techniques
        unordered_map<int, int>hash;
        for(int i=0;i<arr.size();i++)//iterating
        {
            hash[arr[i]]++;//counting 
        }
        
        //printing 1st occurance
         for(int i=0;i<arr.size();i++)
        {
           if(hash[arr[i]]>1) {
               return i+1;
           }
        }
        return -1;
    }