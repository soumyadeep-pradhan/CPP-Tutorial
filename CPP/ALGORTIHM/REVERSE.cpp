#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;    
int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    reverse(vec.begin(), vec.end());

    std::cout << "Reversed vecay: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    
    // Sort in custom range
    vector<int> vec2 = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    reverse(vec2.begin() + 2, vec2.end() - 2); // Reverse from index 2 to 
    std::cout << "Partially reversed vector: ";
    for (int num : vec2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}