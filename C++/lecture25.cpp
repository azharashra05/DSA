#include <iostream>

using namespace std;

//Recursion
//Birthday Left
// void birthdayLeft(int n)
// {
//     if(n==0)
//     {
//         cout<<"Happy Birthday";
//         return;
//     }
//     cout<<n<<" days left for birthday"<<endl;
//     birthdayLeft(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     birthdayLeft(n);
// }

//Print 1 to N using recursion
// void print_number(int start,int end)
// {
//     if(start>end)
//      return;
//     cout<<start<<" ";
//     print_number(start+1,end);
// }
// int main()
// {
//     int n=10;
//     print_number(1,10);
// }

//Print N to 1 using recursion
// void print_number(int start,int n)
// {
//     if(start>n)
//      return;
//     print_number(start+1,n);
//     cout<<start<<" ";
// }
// int main()
// {
//     int n;
//     cin>>n;
//     print_number(1,n);
// }

//Count number of hops
//Less optimized code. Got TLE
//https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1
// long long countWays(int n)
// {
//     if(n==1 or n==2)
//         return n;
//     else if(n==3)
//         return n+1;
//     return (countWays(n-1)+countWays(n-2)+countWays(n-3))%1000000007;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     long long res=countWays(n);
//     cout<<res;
// }

//Sum using recursion
// void printSum(int *arr,int sum,int size)
// {
//     if(!size)
//      return;
    
//     sum+=arr[0];
//     cout<<sum<<" ";
//     printSum(arr+1,sum,size-1);
// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int sum=0;
//     printSum(arr,sum,5);
// }

//Search element using recursion
// int search(int *arr,int sum,int size)
// {

// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6,7};
// }

//Double the every value of the array
// void DoubleValue(int *arr,int size)
// {
//     if(!size)
//      return;
//     arr[0]*=2;
//     DoubleValue(arr+1,size-1);
// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6};
//     DoubleValue(arr,6);

//     for (auto i : arr)
//     {
//         cout<<i<<" ";
//     }
    
// }

//Binary Search using recursion
void BinarySearch(int *arr,int start,int end,int target,int &index)
{
    if(start>end)
     return;
    int mid=(start+end)/2;
    if(arr[mid]==target)
    {
        index=mid;
        return;
    }
    else if(arr[mid]>target)
     BinarySearch(arr,start,mid-1,target,index);
    else
     BinarySearch(arr,mid+1,end,target,index);
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int index=-1;
    int target=4;
    BinarySearch(arr,0,size-1,target,index);
    cout<<index;
}
