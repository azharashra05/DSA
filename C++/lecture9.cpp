#include <iostream>
using namespace std;

// int main()
// {
//     int arr[]={2,3,8,7,4};
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//          cout<<arr[j]<<" ";
//         cout<<endl;
//     }
// }

// int main()
// {
//     int arr[]={3,13,12,11,8};
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5-i;j++)
//         {
//             cout<<arr[j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int arr[]={3,13,12,11,8};
//     for(int i=0;i<5;i++)
//     {
//         for(int j=i;j<5;j++)
//         {
//             cout<<arr[j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int arr[]={3,13,12,11,8};
//     for(int i=0;i<5;i++)
//     {
//         for(int j=4-i;j>=0;j--)
//         {
//             cout<<arr[j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//Homework
// int main()
// {
//     int arr[]={3,13,12,11,8};
//     for(int i=0;i<5;i++)
//     {
//         for(int j=4;j>=i;j--)
//         {
//             cout<<arr[j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//Find duplicates in an array
//https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
int main()
{
    int arr[]={1,3,3,1};
    int count[4]={0};
    for(int i=0;i<4;i++)
     count[arr[i]]++;
    
    for(int i=0;i<4;i++)
     if(count[i]>1)
      cout<<i<<" ";
}