#include <iostream>
using namespace std;
// TC => O(n^2) -> find = O(n); erase = O(n) -->> o(n) * o(n)
int main() {
    string s = "daabcbaabcbc", part = "abc";
    while(s.length() > 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
    }

    cout << s << endl;
    return 0;
}