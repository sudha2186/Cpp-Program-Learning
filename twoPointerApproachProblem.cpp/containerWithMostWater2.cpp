#include <iostream>
#include <vector>
using namespace std;
// time complexity => O(n)
int MaxWater(vector<int>height)
{
    int n = height.size();
    int currWater = 0, maxWater = 0;
    int lp = 0, rp = n-1;
    while (lp < rp)
    {
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        currWater = ht * width;
        maxWater = max(maxWater, currWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int ans = MaxWater(height);
    cout << ans << endl;
    return 0;
}