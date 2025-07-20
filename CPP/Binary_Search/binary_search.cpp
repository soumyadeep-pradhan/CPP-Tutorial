#include <iostream>
#include <vector>
using namespace std;    

int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
        int mid = (start + end)/2;
        // int mid = start + (end - start) / 2; // To avoid overflow in case of large arrays
        // mid = (start + end) / 2; // This can cause overflow for large arrays
        if(target == arr[mid]){
            return mid; // Target found
        }
        else if(target < arr[mid]){
            end = mid - 1; // Search in the left half
        }
        else{
            start = mid + 1; // Search in the right half
        }
    }
    return -1; // Target not found
}

int main(){
    // Binary Search
    // Time Complexity: O(log n)
    // Space Complexity: O(1)

    //but iterative binary search is preferred over recursive binary search
    //because it does not use extra space for recursion stack
    //and it is easier to understand and implement

    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 2 ;
    
    cout << binarySearch(arr1, target) << endl; // Output: 8 (index of target in the array)

    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};
    target = 20;
    cout << binarySearch(arr2, target) << endl; // Output: 4 (

    return 0;
}