#include <iostream>
using namespace std;
void printNumbers(int n) {
    if (n==1){
        cout << n << " \n";
        return;
    }
    printNumbers(n - 1);
    cout << n << " ";
}


int main() {
    int n = 100000; // Change this value to print more or fewer numbers
    cout << "Printing numbers from 1 to " << n << " in ascending order:" << endl;
    printNumbers(n);
    return 0;
}