#include <iostream>
#include <vector>
using namespace std;



bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1) {
        return true; // An array of size 0 or 1 is sorted
    }

    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}
//time complexity: O(n)
//space complexity: O(n) due to recursion stack
int main() {
    // Your code here
    vector<int> arr = {1, 2, 3, 14, 5}; // Change this to test with different arrays
    // vector<int> arr = {}; // Change this to test with different arrays
    int n = arr.size();
    cout << "Is the array sorted? " << isSorted(arr, n)<<endl;
    return 0;
}