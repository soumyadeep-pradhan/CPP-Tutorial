#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 1) {
        return n;
    }
    return n + sum(n - 1);
}

//Time Complexity: O(n)
//Space Complexity: O(n) 
int main() {
 

    int n = 200000; // Change this value to compute the sum of a different range
    cout << "Sum of numbers from 1 to " << n << " is: " << sum(n) << endl;
 
 
    return 0;
}