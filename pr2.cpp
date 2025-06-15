#include <iostream>
#include <vector>
using namespace std;

vector<int> MaxWater(vector<int>height)
{
    int n = height.size();
    int area = 0, ans = 0;
    vector<int> maxWat;
    int Mi, Mj;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int width = j - i;
            int ht = min(height[i], height[j]);
            area = ht * width;
            // ans = max(ans, area);
            if(area > ans) 
            {
                ans = area;
                Mi = i;
                Mj = j;
            }
        }
    }
    maxWat.push_back(ans);
    maxWat.push_back(Mi);
    maxWat.push_back(Mj);
    return maxWat;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 4};
    vector<int> ans = MaxWater(height);
    for(int val : ans) {
        cout << val << endl;
    } 
    return 0;
}