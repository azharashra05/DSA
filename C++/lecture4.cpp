#include<iostream>
using namespace std;
int main()
{
    //Fibonacci series no
    // int n;
    // cin>>n;
    // if(n<0)
    // {
    //     cout<<"Please enter only positive no to get fibonacci series no";
    //     return 0;
    // }
    // if(n==1 || n==2)
    // {
    //     cout<<n-1;
    //     return 0;
    // }
    // int firstNumber=0,secondNumber=1;
    // int current;
    // //0,1,1,2,3,5,8
    // for(int i=3;i<=n;i++)
    // {
    //     current=firstNumber+secondNumber;
    //     firstNumber=secondNumber;
    //     secondNumber=current;
    // }
    
    //Pattern 1
    // 1 1 1 1 1 
    // 1 1 1 1 1
    // 1 1 1 1 1
    // 1 1 1 1 1
    // 1 1 1 1 1
    // for(int row=1;row<=5;row++)
    // {
    //     for(int col=1;col<=5;col++)
    //     {
    //         cout<<"1 ";
    //     }
    //     cout<<endl;
    // }
    
    //Pattern 2
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // for(int row=1;row<=5;row++)
    // {
    //     for(int col=1;col<=5;col++)
    //      cout<<col<<" ";
    //     cout<<endl;
    // }

    //Pattern 3
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // int n;
    // cout<<"Enter any positive no ";
    // cin>>n;
    // for(int row=1;row<=n;row++)
    // {
    //     //Alternative
    //     // for(int col=n;col>=1;col--)
    //     //  cout<<col<<" ";
    //     for(int col=1;col<=n;col++)
    //       cout<<n-col+1<<" ";
    //     cout<<endl;          
    // }

    //Pattern 4 
    // 1 2 3 4 5
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20
    // 21 22 23 24 25
    // int n;
    // cout<<"Enter any positive no ";
    // cin>>n;
    // int count=1;
    // for(int row=1;row<=n;row++)
    // {
    //     for(int col=1;col<=n;col++)
    //      cout<<count++<<" ";
    //     cout<<endl;
    // }

    int n;
    cout<<"Enter any positive no: ";
    cin<<n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
         cout<<"* ";
        cout<<endl;
    }
    return 0;
}