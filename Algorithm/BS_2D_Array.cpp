#include <iostream>
#include <vector>
using namespace std;
// TC => O(log m) + log(n) = O(log m*n)
bool searchInRow(vector<vector<int>>& mat, int tar, int row) // O(log n)
{
    int m = mat.size(), n = mat[0].size();
    int st = 0, end = n - 1;
    while(st <= end) {
        int mid = st + (end - st)/2;
        if(tar == mat[row][mid]) return true;
        else if(tar > mat[row][mid]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& mat, int tar) { // O(log m)
    int m = mat.size(), n = mat[0].size();
    int st = 0, end = m - 1;
    while(st <= end) {
        int mid = st + (end - st)/2;
        if(tar >= mat[mid][0] && tar <= mat[mid][n-1]) {
            return searchInRow(mat, tar, mid);
        } else if(tar >= mat[mid][n-1]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

int main() {
    vector <vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    cout << searchMatrix(matrix, target);
    return 0;
}