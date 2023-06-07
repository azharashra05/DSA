#include<iostream>
using namespace std;

// //Linear Search
// int main()
// {
//     int arr[6]={2,3,4,5,6,7};
//     int k=6;
//     int flag=0;

//     for(int i=0;i<6;i++)
//     {
//         if(arr[i]==k)
//         {
//             cout<<"Index of element is:"<<i;
//             flag=1;
//         }
//     }
//     if(flag==0)
//      cout<<"Element not found";

//     return 0;
// }

//Binary Search
// int main()
// {
//     int arr[6]={2,3,4,5,6,7};
//     int target;
//     cin>>target;
//     int mid,start=0,end=sizeof(arr)/4-1;
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         if(target==arr[mid])
//         {
//             cout<<"Mil gaya on index:"<<mid;
//             return 0;
//         }
//         else if(arr[mid]>target)
//          end=mid-1;
//         else
//          start=mid+1;
//     }
//     cout<<"Nahi mila";
   
// }

//Left Most and Right Most Element
// int main()
// {
//     int arr[11]={2,3,4,5,5,5,5,5,5,6,7};
//     int target;
//     cin>>target;
//     int mid,start=0,end=sizeof(arr)/4-1,left_index=-1,right_index=-1;
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         if(target==arr[mid])
//         {
//             left_index=mid;
//             end=mid-1;
//         }
//         else if(arr[mid]>target)
//          end=mid-1;
//         else
//          start=mid+1;
//     }
//     if(left_index==-1)
//      cout<<"Target not found"<<endl;
//     else
//      cout<<"Left most index:"<<left_index<<endl;
    
//     start=0;
//     end=sizeof(arr)/4-1;
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         if(target==arr[mid])
//         {
//             right_index=mid;
//             start=mid+1;
//         }
//         else if(arr[mid]>target)
//          end=mid-1;
//         else
//          start=mid+1;
//     }
//     if(right_index==-1)
//      cout<<"Target not found"<<endl;
//     else
//      cout<<"Right most index:"<<right_index;
   
// }

//Search insert position of target in a sorted array
int main()
{
    int arr[]={1, 3};
    int n=sizeof(arr)/4;
    int start=0,end=n-1,mid;
    int target=0;//other test case target value would be 2 and 7

    while(start<=end)
    {
        mid=(start+end)/2;//0
        if(arr[mid]==target)
        {
            cout<<"Mil gya insert position of target:"<<mid;
            return 0;
        }
        else if(arr[mid]>target)
         end=mid-1;//0
        else
         start=mid+1;
    }
    cout<<"Mil gya insert position of target:"<<start;
}