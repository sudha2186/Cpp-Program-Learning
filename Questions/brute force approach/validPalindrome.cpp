#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int st = 0, end = s.length() - 1;
    while(st < end) {
        if(!isalnum(s[st])) {
            st++;
            continue;
        }
        if(!isalnum(s[end])) {
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])) {
            return false;
        }
        st++; end--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    bool ans = isPalindrome(s);
    cout << ans << endl;
    return 0;
}