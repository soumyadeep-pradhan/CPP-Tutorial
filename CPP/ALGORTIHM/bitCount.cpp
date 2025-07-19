#include <iostream>
using namespace std;
int main() {
    // Your code here
    int n = 15;
    // n = 48979832047;

    cout<< "Number of set bits in " << n << " is: " << __builtin_popcount(n) << endl;
    // This will print the number of set bits in n
    // Output: 4
    // __builtin_popcount is a GCC built-in function that counts the number of set bits in an integer
    
    long int m = 15;
    // m=489798320473234225452;
    cout << "Number of set bits in " << m << " is: " << __builtin_popcountl(m) << endl; 
    // This will print the number of set bits in m
    // Output: 4
    // __builtin_popcountl is a GCC built-in function that counts the number of set bits in a long integer
    
    long long int k = 4897983204732342254;
    
    cout << "Number of set bits in " << k << " is: " << __builtin_popcountll(k) << endl;
    // This will print the number of set bits in k
    // Output: 4                
    // __builtin_popcountll is a GCC built-in function that counts the number of set bits in a long long integer    
    return 0;
}