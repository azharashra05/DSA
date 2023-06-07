#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

//Counting sort for number that wil we always in range of 1 to 1000
//Time complexity O(n)
// int main()
// {
//     vector<int> arr={6,5,4,3,2,1,8,9,10,2};
//     vector<int> count(10001,0);

//     for(int i=0;i<arr.size();i++)
//      count[arr[i]]++;
    
//     for(int i=1;i<count.size();i++)
//      for(int j=0;j<count[i];j++)
//       cout<<i<<" ";

// }

//Longest Common Prefix in an Array
//https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
// string longestCommonPrefix (string arr[], int N)
//     {
//         int count=0;
//         int M=INT_MAX;
//         for(int i=0;i<N;i++)
//         {
//             if(M>arr[i].size())
//              M=arr[i].size();
//         }
        
//         for(int i=0;i<M;i++)//geek,1
//         {
//             for(int j=1;j<N;j++)
//             {
//                 if(arr[j-1][i]!=arr[j][i])
//                 {
//                     if(count)
//                      return arr[0].substr(0,count);
//                     else
//                      return "-1";
//                 }
//             }
//             count++;
//         }
        
//         if(count)
//           return arr[0].substr(0,count);
//         else
//           return "-1";
//     }
// int main()
// {
//     string s[]={"geeksforgeeks", "geeks", "geek",
//          "geezer"};
//     string res=longestCommonPrefix(s,4);
//     cout<<res;
//     return 0;
// }


//Sum of two large numbers
//https://practice.geeksforgeeks.org/problems/sum-of-numbers-or-number1219/1
string findSum(string s1, string s2) {
        int i=s1.size()-1,j=s2.size()-1;
        int num,rem,carry=0;
        string ans="";
        char c;
        while(i>=0 && j>=0)
        {
            num=s1[i]-'0'+s2[j]-'0'+carry;
            rem=num%10;
            carry=num/10;
            c=rem+'0';
            ans+=c;
            i--,j--;
        }
        
        while(i>=0)
        {
            num=s1[i]-'0'+carry;
            rem=num%10;
            carry=num/10;
            c=rem+'0';
            ans+=c;
            i--;
        }
        
        while(j>=0)
        {
            num=s2[j]-'0'+carry;
            rem=num%10;
            carry=num/10;
            c=rem+'0';
            ans+=c;
            j--;
        }
        if(carry==1)
         ans+='1';
        
        int k=ans.size()-1;
        while(k>=0 && ans[k]=='0')
        {
            ans.pop_back();
            k--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

int main()
{
    string res=findSum("7693","4078842");
    cout<<res;
}