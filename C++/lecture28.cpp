#include <iostream>
#include <vector>
using namespace std;

// void chori(int arr[],int &sum,int curr_sum,int index)
// {
//     if(index>=n)
//     {
//         sum=max(sum,curr_sum);
//         return;
//     }
//     chori(arr,sum,curr_sum,index+1);//chori nahi ki
//     chori(arr,sum,curr_sum+arr[index],index+2);//chori ki
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     int sum=0,curr_sum=0;
//     chori(arr,sum,curr_sum,0);
//     cout<<sum;
// }

// void sum_possible(int *arr,int size,int index,int sum)
// {
//     if(index==size)
//     {
//         cout<<sum<<" ";
//         return;
//     }
//     sum_possible(arr,size,index+1,sum);
//     sum_possible(arr,size,index+1,sum+arr[index]);
// }
// int main()
// {
//     int arr[]={2,4,1,5,8};
//     int index=0,sum=0;
//     sum_possible(arr,5,index,sum);
// }

//House Roberry Part 1
//Got TLE due to less optimized code
//https://leetcode.com/problems/house-robber/
void find(vector<int>& nums,int &sum,int curr_sum,int index)
{
    if(index>=nums.size())
    {
        sum=max(sum,curr_sum);
        return;
    }
    find(nums,sum,curr_sum,index+1);
    find(nums,sum,curr_sum+nums[index],index+2);

} 
int rob(vector<int>& nums) {
    int sum=0,curr_sum=0;
    find(nums,sum,curr_sum,0);
    return sum;
}

int main()
{
    vector<int> arr={1,2,3,1};
    int res=rob(arr);
    cout<<res<<endl;
    arr={2,7,9,3,1};
    res=rob(arr);
    cout<<res;
}