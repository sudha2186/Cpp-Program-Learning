#include <iostream>
#include<vector>
using namespace std;
// TC => O(n * n) SC = > O(n*n)
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    int size = n * n;
    vector<bool> seen(size + 1, false);
    int repeated = -1, sum = 0;

    for (const auto& row : grid) {
        for (int num : row) {
            sum += num;
            if (seen[num])
                repeated = num;
            seen[num] = true;
        }
    }

    int expectedSum = (size * (size + 1)) / 2;
    int missing = expectedSum - (sum - repeated);

    return {repeated, missing};
}
int main() {
    vector<vector<int>> grid = {{1, 3} , {2, 2}};
    vector<int> ans = findMissingAndRepeatedValues(grid);
    cout << "Repeating: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;
    return 0;
}