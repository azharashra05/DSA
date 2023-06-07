#include <iostream>
using namespace std;

//Selection Sort
//Pick smallest element from array and moved to appropiate position
// void selectionSort(int arr[], int n)
//     {
//        for(int i=0;i<n-1;i++)
//        {
//            int index=i;
//            for(int j=i;j<=n-1;j++)
//            {
//                if(arr[j]<arr[index])
//                 index=j;
//            }
//            int temp=arr[index];
//            arr[index]=arr[i];
//            arr[i]=temp;
//        }
//     }
// int main()
// {
//     int n=5;
//     int arr[]={4,1,3,9,7};
//     selectionSort(arr,5);
//     for(int i=0;i<n;i++)
//      cout<<arr[i]<<" ";
// }

//Bubble sort
//In every round largest element moved to last
// void bubbleSort(int arr[], int n)
// {
//         for(int i=0;i<n-1;i++)
//         {
//             for(int j=0;j<n-1-i;j++)
//             {
//                 if(arr[j]>arr[j+1])
//                  {
//                      swap(arr[j],arr[j+1]);
//                  }
//             }
//         }
// }

// void swap(int *x, int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main()
// {
//     int arr[]={4, 1, 3, 9, 7};
//     int size=5;
//     bubbleSort(arr,size);
//     for(auto x:arr)
//      cout<<x<<" ";
// }

// void insertionSort(int arr[], int n)
// {
//         for(int i=0;i<n-1;i++)
//         {
//             for(int j=i;j>=0;j--)
//             {
//                 if(arr[j]>arr[j+1])
//                 {
//                     int temp=arr[j];
//                     arr[j]=arr[j+1];
//                     arr[j+1]=temp;
//                 }
//                 else
//                  break;
//             }
//         }
// }

// int main()
// {
//     int arr[]={4, 1, 3, 9, 7};
//     int size=5;
//     insertionSort(arr,size);
//     for(auto x:arr)
//      cout<<x<<" ";
// }

//Equilibrium Point
//Getting TLE due to less optimized code
//https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
int equilibriumPoint(long long arr[], int n)
 {
        for(int i=0;i<n;i++)
        {
            long long sumRight=0,sumLeft=0;
            for(int j=i-1;j>=0;j--)
             sumRight+=arr[j];
            for(int j=i+1;j<n;j++)
             sumLeft+=arr[j];
            
            if(sumLeft==sumRight)
             return i+1;
        }
 }

 int main()
 {
    long long arr[]={1,3,5,2,2};
    int res=equilibriumPoint(arr,5);
    cout<<"Equilibrium point: "<<res; 
 }