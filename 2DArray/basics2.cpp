#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> nums = {{1,2,3}, {4,5,6}, {7,8}};
    for(vector<int> val : nums) {
        for(int el : val) {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}