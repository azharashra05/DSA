#include <iostream>
#include <climits>
using namespace std;

//1D array using pointer
// int main()
// {
//     int m;
//     cin>>m;
//     int *p=new int[m];
//     for(int i=0;i<m;i++)
//     {
//         *p=i*2;
//         p++;
//     }
//     p--;//to bring it back 1 index
//     for(int i=0;i<m;i++)
//     {
//         cout<<*p<<" ";
//         p--;
//     }
// }

//2D array using pointer
// void fun(int row,int col,int **x)
// {
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             x[i][j]=i+j;
//         }
//     }
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int **p=new int*[n];
//     for(int i=0;i<n;i++)
//      p[i]=new int[m];
//     fun(n,m,p);

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//            cout<<p[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//To find long long max limit
// int main() {
//     long long max_value = LLONG_MAX;
//     int digit_count = 0;

//     while (max_value != 0) {
//         max_value /= 10;
//         digit_count++;
//     }

//     cout << "Number of digits in a long long: " << digit_count << endl;

//     return 0;
// }


//Factorial using recursion
//It can handle upto number 20 because it factorial has total 19digits(which is max limit to store for long long data type)
// long long factorial(int n)
// {
//     if(n==1)
//      return 1;
//     return n*factorial(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     long long res=factorial(n);
//     cout<<res;
//}

//Find nth fibonacci number using recursion
// int fibonacci(int n)
// {
//     if(n==1 or n==2)
//      return n-1;
//     return fibonacci(n-1)+fibonacci(n-2);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int res=fibonacci(n);
//     cout<<res;
// }

//Find Power of any number
int power(int base,int pow)
{
    if(base==1)
     return n;
    return n*power()
}
int main()
{
    int base,pow;
    cin>>base>>pow;
    int res=power(base,pow);
    cout<<res;
}

