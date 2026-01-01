#include <iostream>
using namespace std;
// Time complexity => sliding window-> o(n) + k times (window length) => o(n*k)
bool isFreqSame(int freq[], int windFreq[]) 
{
    for(int i = 0; i < 26; i++) {
        if(freq[i] != windFreq[i]) return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};
    for(int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++;
    }
    int windSize = s1.length();
    for(int i = 0;i < s2.length(); i++) {
        int windIdx = 0, idx = i;

        int windFreq[26] = {0};
        while(windIdx < windSize && idx < s2.length()) {
            windFreq[s2[idx] - 'a']++;
            windIdx++; idx++;
        }

        if(isFreqSame(freq, windFreq)) return true;
    }
    return false;
}

int main() {
    string s1 = "ab", s2 = "eidbaooo";
    cout << checkInclusion(s1, s2) << endl;;
    return 0;
}