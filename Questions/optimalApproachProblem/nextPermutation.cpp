#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

// using stl file => next_permutation(nums.begin(), nums.end())
void nextPermutation(vector<int> &nums, int n)
{
    int pivot = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(nums[i] < nums[i+1]) {
            pivot = i;
            break;
        } 
        if(pivot == -1) {
            reverse(nums.begin(), nums.end());
        }
    }

    for(int i = n - 1; i > pivot; i--) {
        if(nums[i] > nums[pivot]) {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    int i = pivot + 1, j = n - 1;
    while(i <= j) {
        swap(nums[i++], nums[j--]);
    }
}

void printnumsay(vector<int> &nums, int size) {
    for (int i = 0; i < size; i++)
        cout << nums[i] << " ";
    cout << endl;
}

int main() {
    vector<int> nums = {1,2,5,4,3};
    int n = nums.size();
    nextPermutation(nums, n);
    cout << "Next Permutation: ";
    printnumsay(nums, n);
    return 0;
}