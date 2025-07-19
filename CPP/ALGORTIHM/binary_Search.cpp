#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Your code here

    vector<int> vec = {1, 2, 3, 4, 5};
    cout << binary_search(vec.begin(), vec.end(), 3) << endl; // Output: 1 (true)
    // This checks if 3 is present in the vector
    // Output: 1 (true)
    cout << binary_search(vec.begin(), vec.end(), 6) << endl; // Output
    // This checks if 6 is present in the vector
    // Output: 0 (false)
    return 0;
}