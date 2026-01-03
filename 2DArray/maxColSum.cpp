#include <iostream>
using namespace std;

int maxcolSum(int arr[][3], int rows, int cols)
{
    int maxSum = 0;
    for (int i = 0; i < rows; i++)
    {
        int colSum = 0;
        for(int j = 0; j < cols; j++) {
            colSum += arr[j][i];
        }
        maxSum = max(colSum, maxSum);
    }
    return maxSum;
}

int main() {
    int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << maxcolSum(arr, 3, 3) << endl;

    return 0;
}