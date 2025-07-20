#include <iostream>
#include <vector>
using namespace std;
int main() {
    cout << "Hello, World!" << std::endl;
    pair<int, int> p = {1,3};//can be different data types also
    pair<int, char> p1 = {1,'g'};//can be different data types also
    cout << "First: " << p1.first << ", Second: " << p1.second <<    endl;
    pair< int, pair<int, int>> p2 = {1, {2, 3}}; // nested pair
    cout << "First: " << p2.first << ", Second: " << p2.second.first<<endl;
    cout << "First: " << p2.first << ", Second: " << p2.second.second<<endl;
    //vector of pairs
    vector<pair<int, int>> v;
    v.push_back({1, 2});
    v.push_back({3, 4});
    v.push_back({5, 6});
    v.emplace_back(7, 8); // emplace_back is more efficient than push_back , no need to create a temporary object
    // for(pair<int, int> it : v) {
    //     cout << "First: " << it.first << ", Second: " << it.second << endl;
    // }
    for (auto it : v) {
        cout << "First: " << it.first << ", Second: " << it.second << endl;
    }
    return 0;
}