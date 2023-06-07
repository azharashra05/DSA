#include<iostream>
using namespace std;

//Deciaml to binary
// int main()
// {
//     int sum=0;
//     int mul=1;
//     int num;
//     cin>>num;
//     while(num)
//     {
//         int rem=num%2;
//         sum=sum+rem*mul;
//         num=num/2;
//         mul=mul*10;
//     }
//     cout<<sum;
//     return 0;
// }
//Binary to Decimal
// int main()
// {
//     int sum=0;
//     int mul=1;
//     int num;
//     cin>>num;
//     while(num)
//     {
//         int digit=num%10;
//         sum=sum+digit*mul;
//         num=num/10;
//         mul=mul*2;
//     }
//     cout<<sum;
//     return 0;
// }

// //1s complement
// int main()
// {
//     int num;
//     cin>>num;
//     while(num)
//     {
//         int digit=num%10;
//         cout<<(digit^1);
//         num=num/10;
//     }
// }

//continue
// int main()
// {
//     for(int i=0;i<10;i++)
//     {
//         if(i==5)
//          continue;
//         cout<<i<<" ";
//     }
// }

//break
// int main()
// {
//     for(int i=0;i<10;i++)
//     {
//         if(i==5)
//          break;
//         cout<<i<<" ";
//     }
// }

//switch
// int main()
// {
//     int num;
//     cin>>num;
//     switch(num)
//     {
//      case 1:
//       cout<<"Monday";
//       break;   
//      case 2:
//       cout<<"Tuesday";
//       break;
//      case 3:
//       cout<<"Wednesday";
//       break;   
//      case 4:
//       cout<<"Thursday";
//       break;
//      case 5:
//       cout<<"Friday";
//       break;
//      case 6:
//       cout<<"Saturday";
//       break;
//      case 7:
//       cout<<"Sunday";
//       break;
//      default:
//       cout<<"Not a week day"; 
//     }
// }

//Find nth fibonacci number
// void fibonacciNumber(int num)
// {
//     int first=0,second=1,third;
//     if(num==1)
//      cout<<first;
//     else if(num==2 )
//      cout<<second;
//     else if(num>2)
//     {
//         while(num-2)
//         {
//             third=first+second;
//             first=second;
//             second=third;
//             num--;
//         }
//         cout<<third;
        
//     }
// }

// int main()
// {
//     int num;
//     cin>>num;
//     fibonacciNumber(num);
// }

//Find prime no
// void checkPrime(int num)
// {
//     int flag=-1;
//     if(num>=2)
//     {
//         flag=1;
//         for(int i=2;i<num;i++)
//         {
//             if(num%2==0)
//             {
//                 flag=0;
//                 break;
//             }
//         }
//     }
//     if(flag==1)
//      cout<<num<<" is a prime no";
//     else if(flag==0)
//      cout<<num<<" is not a prime no";
//     else
//      cout<<"Invalid number";
// }
// int main()
// {
//     int num;
//     cin>>num;
//     checkPrime(num);
// }


//Find averge of two number
// float findAverage(float a,float b)
// {
//     return (a+b)/2;
// }

// int main()
// {
//     float res=findAverage(10.5,5.6);
//     cout<<res;
// }