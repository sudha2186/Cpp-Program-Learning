#include <iostream>
#include <vector>
using namespace std;
// time complexity => O(n^2)
int MaxWater(vector<int>height)
{
    int n = height.size();
    int area = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int width = j - i;
            int ht = min(height[i], height[j]);
            area = ht * width;
            ans = max(ans, area);
        }
    }
    return ans;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 4};
    int ans = MaxWater(height);
    cout << ans << endl;
    return 0;
}