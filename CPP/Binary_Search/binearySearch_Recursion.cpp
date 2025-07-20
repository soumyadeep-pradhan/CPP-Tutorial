#include <iostream>
#include <vector>
using namespace std;
int binarySearchRec(vector<int> arr, int left, int right, int target) {
    if  (left > right) {
        return -1; // Not found
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) { // Search in the left half
        return binarySearchRec(arr, left, mid - 1, target);
    } else { // Search in the right half
        return binarySearchRec(arr, mid + 1, right, target);
    }
}
// space complexity: O(log n) due to recursion stack
// time complexity: O(log n) for binary search
    //but iterative binary search is preferred over recursive binary search
    //because it does not use extra space for recursion stack
    //and it is easier to understand and implement
int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 70;
    int index = binarySearchRec(arr, 0, arr.size() - 1, target);

    if (index != -1) {
        std::cout << "Element found at index: " << index << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }
    return 0;
}