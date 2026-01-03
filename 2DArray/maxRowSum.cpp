#include <iostream>
using namespace std;

int maxRowSum(int arr[][3], int rows, int cols)
{
    int maxSum = 0;
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        maxSum = max(rowSum, maxSum);
    }
    return maxSum;
}

int main() {
    int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << maxRowSum(arr, 3, 3) << endl;

    return 0;
}