#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << std::endl;
    pair<int, int> p = {1,3};//can be different data types also
    pair<int, char> p1 = {1,'g'};//can be different data types also
    cout << "First: " << p1.first << ", Second: " << p1.second <<    endl;
    pair< int, pair<int, int>> p2 = {1, {2, 3}}; // nested pair
    cout << "First: " << p2.first << ", Second: " << p2.second.first<<endl;
    cout << "First: " << p2.first << ", Second: " << p2.second.second<<endl;
    
    return 0;
}