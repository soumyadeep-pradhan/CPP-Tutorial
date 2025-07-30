
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    
    int n = 5; // Change this value to compute the factorial of a different number
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}