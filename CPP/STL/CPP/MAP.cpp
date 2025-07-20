#include <iostream> 
#include <map>
#include <string>   
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    map<string, int> m; // key-value pair
    m["abc"] = 1;
    m["dguycgef"] = 2;
    m["hih"] = 3;
    m["jkl"] = 4;
    m["mnoiygyigyuiyi"] = 5;       
    for (auto p: m){
        cout << p.first << " " << p.second << endl; // prints key and value
 //lexicographically sorted order of keys 
 // output:
 // abc 1
 // dguycgef 2
 // hih 3
 // jkl 4
 // mnoiygyigyuiyi 5
    }
    m.insert({"xyz", 6}); // insert a new key-value pair
    m["abc"] = 10; // update the value for key "abc"
    cout << "After insertion and update:" << endl;
    for (auto p: m){
        cout << p.first << " " << p.second << endl; // prints key and value
 // output:
 // abc 10
 // dguycgef 2
 // hih 3
 // jkl 4
 // mnoiygyigyuiyi 5
 // xyz 6

    cout<< "Size of map: " << m.size() << endl; // prints the size of the map
    cout << "count of key 'abc': " << m.count("abc") << endl; // checks if key "abc" exists
    cout << "count of key 'xyz': " << m.count("xyz") << endl; // checks if key "xyz" exists
    cout << "count of key 'not_present': " << m.count("not_present") << endl; // checks if key "not_present" exists
    cout << "Value for key 'abc': " << m["abc"] << endl; // retrieves the value for key "abc"
    cout << "Value for key 'xyz': " << m["xyz"] << endl; // retrieves the value for key "xyz"

    m.erase("abc"); // removes the key "abc"
    m.find("xyz"); // finds the key "xyz"
    
    if(m.find("xyz") != m.end()) {
        cout << "Key 'xyz' found with value: " << m["xyz"] << endl; // prints value for key "xyz"
    } else {
        cout << "Key 'xyz' not found." << endl;

    }
    return 0;
}