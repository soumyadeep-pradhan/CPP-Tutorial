#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    multimap<string, int> m; // key-value pair
    m.insert({"abc", 4}); // insert a new key-value pair with the same key
    m.insert({"xyz", 5}); // insert another key-value pair
    m.insert({"abc", 6}); // insert another key-value pair with the same key
    m.insert({"abc", 7}); // insert yet another key-value pair with the same key
    m.insert({"xyz", 8}); // insert another key-value pair with the same key
    m.emplace("abc", 4); // insert a new key-value pair with the same key using emplace
    for(auto p: m){
        cout << p.first << " " << p.second << endl; // prints key and value
    }
    // output:
    // abc 4
    // abc 6        
    m.erase(m.find("abc")); // removes the first occurrence of key "abc"
    cout << "After erasing one occurrence of key 'abc':" << endl;
    for(auto p: m){
        cout << p.first << " " << p.second << endl; // prints key and value
    }
    return 0;
}