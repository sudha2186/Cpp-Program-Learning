#include <iostream>
using namespace std;

int main() {
    int n = 4567;
    int dig;
    while(n > 0) {
        dig = n%10;
        cout << dig << " ";
        n /= 10;
    }
    return 0;
}