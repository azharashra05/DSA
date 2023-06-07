#include <iostream>
using namespace std;

//Stored variable data in heap instead of stack
int main()
{
    int *p=new int;
    *p=10;
    cout<<p;
    return 0;
}