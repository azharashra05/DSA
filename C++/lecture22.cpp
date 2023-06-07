#include <iostream>
using namespace std;

// int main() {
//     int x = 5;  // Declare an integer variable 'x' and assign it a value of 5
//     int* ptr;  // Declare a pointer variable 'ptr' that can store the address of an integer

//     ptr = &x;  // Assign the address of 'x' to the pointer variable 'ptr'

//     cout << "Value of x: " << x << endl;
//     cout << "Address of x: " << &x << endl;
//     cout << "Value stored in ptr: " << ptr << endl;
//     cout << "Value pointed by ptr: " << *ptr << endl;

//     *ptr = 10;  // Change the value of 'x' indirectly using the pointer

//     cout << "Updated value of x: " << x << endl;

//     return 0;
// }

//Call by Address/Pointer
// void fun(int *c,int *d)
// {
//     *c=(*c)*2;
//     *d=(*d)*2;
// }

// int main()
// {
//     int a=5,b=8;
//     fun(&a,&b);
//     cout<<a<<" "<<b;
// }

//Call by refernce
// void fun(int &c,int &d)
// {
//     c=c*2;
//     d=d*2;
// }

// int main()
// {
//     int a=5,b=8;
//     fun(a,b);
//     cout<<a<<" "<<b;
//     return 0;
// }

//Call by pointer
// void reverse(int *arr,int size)
// {
//     int start=0,end=size-1;
//     while(start<end)
//     {
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++,end--;
//     }
// }

// int main()
// {
//     int a[]={1,2,3,4,5};
//     reverse(a,5);
//     for (int i = 0; i<5; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    
// }







