#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 0; i < n; i++) 
    {
        for(int j = n - 1; j >= i; j--)
        {
            cout << "  ";
        }
        for(int k = 0; k <= i; k++)
        {
            cout << k + 1 << " ";
        }
        for(int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
        1 
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
*/