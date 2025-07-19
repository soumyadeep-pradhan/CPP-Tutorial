#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comparator(pair<int, int> p1, pair<int,int> p2) {
    if(p1.first < p2.first) return true;
    else return false; // Sort by first element
}

int main() {
    //sorting an array using sort
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    sort(arr, arr + n); // Sorting the array using std::sort
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl; 

    // Sorting a vector using sort
    vector<int> vec = {5, 2, 8, 1, 3};
    std::cout << "Original vector: ";       
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    sort(vec.begin(), vec.end()); // Sorting the vector using std::sort
    std::cout << "Sorted vector: ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " "; 
    }
    std::cout << std::endl;   

    //Descending order sorting using comparator
    //Functor to compare two integers for descending order
    sort(arr, arr + n, greater<int>()); // Sorting in descending order
    std::cout << "Array sorted in descending order: ";

    for(int i: arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl; 

    vector<pair<int, int>> vecPairs = {{1, 2}, {2, 1}, {5, 6},{3, 4},{7,1}};
    // Sorting vector of pairs based on the first element
    sort(vecPairs.begin(), vecPairs.end());
    //sort on the basis of first element of pair
    std::cout << "Vector of pairs sorted by first element: ";
    for(auto val : vecPairs) {
        std::cout << "(" << val.first << ", " << val.second << ") ";
    }
    std::cout << std::endl;
    // To sort based on the second element of the pair
    // Using a lambda function as a custom comparator
    // Custom comparator is a lambda function that compares the second element of pairs
    // It takes two pairs as input and returns true if the second element of the first pair
    // is less than the second element of the second pair
    // This will sort the vector of pairs based on the second element of each pair
    // The lambda function captures the pairs by reference and compares their second elements
    // custom comparator is boolean function that returns true if first element is less than second element
    sort(vecPairs.begin(), vecPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second; // Sort by second element
    });
    std::cout << "Vector of pairs sorted by second element: ";
    for(auto val : vecPairs) {
        std::cout << "(" << val.first << ", " << val.second << ") ";

    }

    return 0;
}