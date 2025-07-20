#include <iostream>
#include <set>
#include <string>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> us; // unordered set of strings

    us.insert(5);
    us.insert(1);
    us.insert(12);
    us.insert(11);
    us.insert(4);
    us.insert(30); // inserting integers
    us.insert(20); // inserting integers

    for (auto num : us) {
        cout << num << " "; // prints each integer in random order
    }
    // output: 1 4 5 10 11 12 20
    // time complexity of insert is O(1) on average
    // ascending order is not maintained
    cout << endl;

    return 0;
}