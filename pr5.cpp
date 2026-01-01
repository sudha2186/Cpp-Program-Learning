#include <iostream>
#include<vector>
using namespace std;

int stringCompression(vector<char> str, int n)
{
    int freq[26] = {0};
    for(int i = 0; i < n; i++) {
        freq[str[i] - 'a']++;
    }
    vector<char> ans;
    for(int i = 1; i < n; i++) {
        if(str[i] == str[i - 1]) {
            ans = str[i] + freq[i - 1];
        }

    }
    return ans.size();
}

int main() {
    vector<char> str = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int n = str.size();
    cout << stringCompression(str, n) << endl;
    return 0;
}