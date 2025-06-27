#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int sum = 0;
    int mat[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++ ){
            sum += mat[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}