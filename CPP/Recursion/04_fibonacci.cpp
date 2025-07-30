#include <iostream>
using namespace std;
// Your code her

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    cout<<n << " ";
    return fibonacci(n - 1) + fibonacci(n - 2);
}
//Time Complexity: O(2^n)
//Space Complexity: O(n) due to recursion stack
int main() {
    int n = -100; // Change this value to compute the Fibonacci number for a different position
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
    return 0;
}