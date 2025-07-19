#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a = 5, b = 10;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    std::swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    return 0;
}