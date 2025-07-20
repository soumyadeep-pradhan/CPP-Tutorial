#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    unordered_map<string, int> um; // key-value pair

    um["ac"] = 1;
    um["uyc"] = 2;
    um["hih"] = 3;
    um["jkl"] = 4;
    um["mni"] = 5;
    for(auto p: um) {
        cout << p.first << " " << p.second << endl; // prints key and value
    }
    // random order of keys
    // output:
    // ac 1
    // jkl 4
    // hih 3
    return 0;
}