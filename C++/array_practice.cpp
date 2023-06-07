#include <iostream>
using namespace std;

//Find minimum element of the array
// int main()
// {
//     int arr[]={5,4,3,2,1};
//     int n=sizeof(arr)/4; 
//     int min=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]<min)
//          min=arr[i];
//     }
//     cout<<"Minimum element of the array is:"<<min;
// }

//Find maximum element of the array
// int main()
// {
//     int arr[]={5,4,3,2,1};
//     int n=sizeof(arr)/4; 
//     int max=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>max)
//          max=arr[i];
//     }
//     cout<<"Maximum element of the array is:"<<max;
// }

//Print all even value in the array
// int main()
// {
//     int arr[]={10,9,8,7,6,5,4,3,2,1};
//     int n=sizeof(arr)/4; 
//     cout<<"Even element of the array is:";
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]%2==0)
//          cout<<arr[i]<<" ";
//     }
// }

//Minimum steps to make product equal to one
//https://practice.geeksforgeeks.org/problems/minimum-steps-to-make-product-equal-to-one/1?page=6&difficulty[]=0&category[]=Arrays&sortBy=submissions
// int makeProductOne(int a[], int n) {
//     // To store the count of 0s, positive
//     // and negative numbers
//     int positive = 0,
//         negative = 0,
//         zero = 0;

//     // To store the ans
//     int step = 0;

//     for (int i = 0; i < n; i++) {

//         // If array element is
//         // equal to 0
//         if (a[i] == 0) {
//             zero++;
//         }

//         // If array element is
//         // a negative number
//         else if (a[i] < 0) {
//             negative++;

//             // Extra cost needed
//             // to make it -1
//             step = step + (-1 - a[i]);
//         }

//         // If array element is
//         // a positive number
//         else {
//             positive++;

//             // Extra cost needed
//             // to make it 1
//             step = step + (a[i] - 1);
//         }
//     }

//     // Now the array will
//     // have -1, 0 and 1 only
//     if (negative % 2 == 0) {

//         // As count of negative is even
//         // so we will change all 0 to 1
//         // total cost here will be
//         // count of 0s
//         step = step + zero;
//     }
//     else {

//         // If there are zeroes present
//         // in the array
//         if (zero > 0) {

//             // Change one zero to -1
//             // and rest of them to 1
//             // Total cost here will
//             // be count of '0'
//             step = step + zero;
//         }

//         // If there are no zeros in the array
//         else {

//             // As no 0s are available so we
//             // have to change one -1 to 1
//             // which will cost 2 to
//             // change -1 to 1
//             step = step + 2;
//         }
//     }

//     return step;
//     }
// int main()
// {
//     int arr[]={-2,4,-3};
//     int n=3;
//     int res=makeProductOne(arr,3);
//     cout<<res;
// }

// C++ program to find the array element
// that appears only once
//https://www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/
int findSingle(int A[], int ar_size)
{
  
    // Iterate over every element
    for (int i = 0; i < ar_size; i++) {
  
        // Initialize count to 0
        int count = 0;
  
        for (int j = 0; j < ar_size; j++) {
  
            // Count the frequency
            // of the element
            if (A[i] == A[j]) {
                count++;
            }
        }
  
        // if the frequency of the
        // element is one
        if (count == 1) {
            return A[i];
        }
    }
  
    // if no element exist at most once
    return -1;
}
  
// Driver code
int main()
{
    int ar[] = { 2, 3, 5, 4, 5, 3, 4 };
    int n = sizeof(ar) / sizeof(ar[0]);
    
      // Function call
    cout << "Element occurring once is "
         << findSingle(ar, n);
    
    return 0;
}
