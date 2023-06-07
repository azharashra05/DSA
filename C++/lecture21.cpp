#include <iostream>
using namespace std;

//Longest Prefix Suffix
//https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1
int lps(string s) {
	    int LPS[s.size()+1];
	    char str[s.size()+1];
	    
	    for(int i=0;i<s.size();i++)
	    {
	        str[i+1]=s[i];
	        LPS[i]=0;
	    }
	    LPS[s.size()]=0;
	    
	    int first=0,second=2;
	    while(second<=s.size())
	    {
	        if(str[first+1]==str[second])
	        {
	            LPS[second]=first+1;
	            first++,second++;
	        }
	        else
	        {
	            if(first==0)
	             second++;
	            else
	             first=LPS[first];
	        }
	    }
	    return LPS[s.size()];
	    
	}
int main()
{
    int res=lps("abab");
    cout<<res<<endl;
    res=lps("aaaa");
    cout<<res<<endl;
    return 0;
}

//Check if string is rotated by two places
//https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// bool isRotated(string str1, string str2)
// {
//         int n = str1.length();
//         bool clockwise = true, anticlockwise = true;
//         for (int i = 0; i < n; i++)//
//         {
//             if (str1[i] != str2[(i + 2) % n])
//             {
//                 clockwise = false; // not rotated clockwise
//                 break;
//             }
//         }
 
//         for (int i = 0; i < n; i++)
//         {
//             if (str1[(i + 2) % n] != str2[i])
//             {
//                 anticlockwise = false; // not rotated anticlockwise
//                 break;
//             }
//         }
 
//         return clockwise or anticlockwise;
//     }

// int main()
// {
// 	 bool res=isRotated("amazon","azonam");//anticlockise rotated 2 times
// 	 cout<<res<<endl;
// 	 res=isRotated("amazon","onamaz");//clockwise rotated 2 times
// 	 cout<<res<<endl;
// 	 res=isRotated("amazon","zonama");//anticlockwise rotated 3 times
// 	 cout<<res<<endl;
	 
// }

//Minimum characters to be added at front to make string palindrome (TLE due to not optimize code)
//https://practice.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1?page=1&difficulty[]=2&category[]=Strings&sortBy=submissions
// int minChar(string str){
//         int n=str.size();
//         int left=0,right=n-1;
//         int right2=right,count=0;
        
//         while(left<right)
//         {
//             if(str[left]==str[right])
//             {
//                 left++;
//                 right--;
//             }
//             else
//             {
//                 count++;
//                 left=0,right2--;
//                 right=right2;
//             }
//         }
//         return count;
// }
    
// int main()
// {
//     int res=minChar("abc");
//     cout<<res<<endl;
//     res=minChar("aacecaaa");
//     cout<<res<<endl;
//     return 0;
// }
