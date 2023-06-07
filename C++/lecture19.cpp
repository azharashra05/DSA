#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

// int main()
// {
//     // string str;
//     //can read only one word
//     //cin>>str;
//     //can read all words which are on same line
//     // getline(cin,str);
//     string str1="CoderArmy";
//     string str2="Chamka";
//     sort(str1.begin(),str1.end());
//     reverse(str2.begin(),str2.end());
//     cout<<str1+" "+str2;
//     return 0;
// }

//Convert upper case to Lower case
// int main()
// {
//     string s;
//     cin>>s;
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]>='A' && s[i]<='Z')
//          s[i]=s[i]+32;
//     }
//     cout<<s;     
// }

//Length of the longest uniques(without repeating charcaters) substring
//https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1
int main()
{
    string str="geeksforgeeks";
    vector<bool> count(26,0);
    int first=0,second=1,total=1;
    count[str[0]-'a']=1;
    while(second<str.size())
    {
        while(count[str[second]-'a'])
        {
            count[str[first]-'a']=0;
            first++;
        }
        count[str[second]-'a']=1;
        total=max(total,second-first+1);
        second++;
    }

    cout<<"Length of longest unique substring:"<<total;
    
}


//Sort the char array
// int main()
// {
//     string s;
//     cin>>s;
//     vector<char> str(s.begin(), s.end());
//     vector<int> count(26, 0);

//     for(int i=0;i<str.size();i++)
//     {
//         int index=str[i]-'a';
//         count[index]+=1;
//     }
   
    
// }