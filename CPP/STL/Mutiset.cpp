#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    multiset<int> ms; // multiset of integers
    ms.insert(5);
    ms.insert(1);           
    ms.insert(12);
    ms.insert(11);   
    ms.insert(4);
    ms.insert(30); // inserting integers
    ms.insert(20); // inserting integers
    ms.insert(10); // inserting integers

    for (auto num : ms) {
        cout << num << " "; // prints each integer in sorted order
    }
    // output: 1 4 5 10 11 12 20 30
    // time complexity of insert is O(log n)
    // ascending order is maintained
    cout << endl;


    return 0;
}