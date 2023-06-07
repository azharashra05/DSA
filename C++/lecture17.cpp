#include<iostream>
using namespace std;

//Take input in 2D Array then print it the same
// int main()
// {
//     int arr[3][4];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }

//Sum of all elements of 2D Array
// int main()
// {
//     int arr[3][4],sum=0;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             sum+=arr[i][j];
//         }
//     }
//     cout<<"Sum of all elements of 2D array:"<<sum;
// }

//Sum of row elements of 2D array
// int main()
// {
//     int arr[3][4],sum=0;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<3;i++)
//     {
//         int sum=0;
//         for(int j=0;j<4;j++)
//         {
//             sum+=arr[i][j];
//         }
//         cout<<"Sum of row elements of 2D array is:"<<sum<<endl;
//     }
// }

//sum of columns elements in 2D array
// int main()
// {
//     int arr[3][4],sum=0;
//     for(int row=0;row<3;row++)
//     {
//         for(int col=0;col<4;col++)
//         {
//             cin>>arr[row][col];
//         }
//     }

//     for(int col=0;col<4;col++)
//     {
//         int sum=0;
//         for(int row=0;row<3;row++)
//         {
//             sum+=arr[row][col];
//         }
//         cout<<"Sum of col elements of 2D array is:"<<sum<<endl;
//     }
// }

//Transose of matrix (row and column should be same to do transpose)
//In transpose row swap with column

// int main()
// {
//     int arr[4][4],sum=0;
//     for(int row=0;row<4;row++)
//     {
//         for(int col=0;col<4;col++)
//         {
//             cin>>arr[row][col];
//         }
//     }

//     for(int row=0;row<3;row++)//here row-1 
//     {
//         for(int col=row+1;col<4;col++)//here starting with row+1
//         {
//             int temp=arr[row][col];
//             arr[row][col]=arr[col][row];// swap 01 with 10
//             arr[col][row]=temp;
//         }
//     }
//     cout<<endl<<endl<<endl;
//     cout<<"Transposed Matrix"<<endl;
//     for(int row=0;row<4;row++)
//     {
//         for(int col=0;col<4;col++)
//         {
//             cout<<arr[row][col]<<" ";
//         }
//         cout<<endl;
//     }


// }