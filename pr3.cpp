#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<pair <int, int>> vec = {{1,2}, {2,3}, {3,4}};
    // for(auto p: vec) {
    //     cout << p.first << " " << p.second << endl;
    // }
    // for(int i = 0; i < vec.size(); i++) {
    //     cout << vec[i].first << " " << vec[i].second << endl;
    // }

    // for(auto [x,y] : vec) { // this is structured binding of c++17 which binds as x = p.first and y = p.second
    //     cout << x <<  endl;
    //     cout << y << endl;
    // }
    for(const auto &p: vec) { // without structure binding
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}