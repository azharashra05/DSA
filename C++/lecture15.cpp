#include <iostream>
#include <vector>
using namespace std;

bool hasPairWithSum(vector<int>& arr, int targetSum) {
    int left = 0, right = arr.size() - 1; // initialize left and right pointers

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == targetSum) {
            return true; // pair found
        } else if (sum < targetSum) {
            left++; // move left pointer towards right beacuse we want to increase sum
        } else {
            right--; // move right pointer towards left beacuse we want to decrease sum
        }
    }

    return false; // pair not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};//
    int targetSum = 7;
    bool hasPair = hasPairWithSum(arr, targetSum);
    cout << (hasPair ? "Pair found" : "Pair not found") << endl;
    return 0;
}
