#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    std::vector<int> data = {1, -5,5,9, 3, 9, 2};
    
    cout << *max_element(data.begin(), data.end()) << endl; // Output: 9
    // This will print the maximum element in the vector
    cout << max_element(data.begin(), data.end()) - data.begin() << endl; // Output: 3
    // This will print the index of the maximum element in the vector
    cout << *min_element(data.begin(), data.end()) << endl; // Output: 1
    // This will print the minimum element in the vector
    cout << min_element(data.begin(), data.end()) - data.begin() << endl; // Output: 0
    // This will print the index of the minimum element in the vector
    return 0;
}