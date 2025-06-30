#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
// TC => O(n * n)
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    unordered_set<int> s;
    int a, b;
    vector<int> ans;
    int actualSum = 0, expectedSum = 0;
    int n = grid.size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            actualSum += grid[i][j];
            if(s.find(grid[i][j]) != s.end()) { // here find => O(1)
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }

    expectedSum = (n * n) * (n * n + 1)/2;
    b = expectedSum + a - actualSum;
    ans.push_back(b);
    return ans;
}

int main() {
    vector<vector<int>> grid = {{1, 3} , {2, 2}};
    vector<int> ans = findMissingAndRepeatedValues(grid);
    cout << "Repeating: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;
    return 0;
}