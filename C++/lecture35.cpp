#include <iostream>
#include<stack>
using namespace std;


//Stack implementation using array
// class Stack
// {
//     int top;
//     int *arr;
//     int size;

//     public:
//     Stack(int size)
//     {
//         arr=new int[size];
//         top=-1;
//         this->size=size;
//     }

//     //push an element into the stack
//     void push(int data)
//     {
//         if(top==size-1)
//         {
//             cout<<"Stack overflow\n";
//             return;
//         }
//         top++;
//         arr[top]=data;
//     }

//     //Pop an element from the stack
//     void pop()
//     {
//         if(top==-1)
//         {
//             cout<<"Stack underflow\n";
//         }
//         top--;
//         return;
//     }

//     //find top element from the stack
//     int peek()
//     {
//         if(top==-1)
//         {
//             cout<<"Stack underflow\n";
//             return -1;
//         }
//         return arr[top];
//     }

//     bool empty()
//     {
//         return top==-1;
//     }
// };

// int main()
// {
//     Stack s(4);
//     s.push(4);
//     s.push(4321);
//     s.push(14);
//     cout<<s.peek()<<endl;
//     s.pop();
//     cout<<s.peek()<<endl;
//     return 0;
// }

//Implement stack using LL
// class Node
// {
//     public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }
// };

// class Stack
// {
//     Node* top;
//     public:
//     Stack()
//     {
//         top=NULL;
//     }

//     //push an element
//     void push(int data)
//     {
//         Node* temp=new Node(data);

//         if(!temp)
//         {
//             cout<<"Stack overflow\n";
//             return;
//         }

//         temp->next=top;
//         top=temp;
        
//     }
// };


// int main()
// {

// }


//Stack implement using stack library
int main()
{
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<s.top()<<endl;//find top
    cout<<s.empty()<<endl;//find stack is empty(return 1)
}
