#include <iostream>
#include <vector>
using namespace std;
// Time complexity => sliding window-> o(n)
bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length()) return false;

    vector<int> freq1(26, 0), freq2(26, 0);

    for (char c : s1) freq1[c - 'a']++;

    int windowSize = s1.length();

    // First window frequency
    for (int i = 0; i < windowSize; i++) {
        freq2[s2[i] - 'a']++;
    }

    if (freq1 == freq2) return true;

    // Sliding the window
    for (int i = windowSize; i < s2.length(); i++) {
        freq2[s2[i] - 'a']++;
        freq2[s2[i - windowSize] - 'a']--; 

        if (freq1 == freq2) return true;
    }

    return false;
}

int main() {
    string s1 = "ab", s2 = "eidbaooo";
    cout << checkInclusion(s1, s2) << endl;;
    return 0;
}