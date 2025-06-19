#include <iostream>
// #include <string>
#include <algorithm>
using namespace std;
// TC => O(n) ; SC => O(1)
int main() {
    string str = "hello world";
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}
