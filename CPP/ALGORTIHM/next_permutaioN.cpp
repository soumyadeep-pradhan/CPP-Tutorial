#include <iostream>
#include <algorithm>
#include <vector>



using namespace std;
int main() {
    string s = "abc";
    cout << "Next permutation: " << s << endl; // Output: "acb", "bac", "bca", "cab", "cba"

    for (int i = 0; i < 5; ++i) {
        next_permutation(s.begin(), s.end());
        cout << "Next permutation: " << s << endl; // Output: "acb", "bac", "bca", "cab", "cba"
    }
    cout << "Previous permutation: " << s << endl; // Output: "cba", "cab", "bca", "bac", "acb"
    s="dfe";
    cout << "Previous permutation: " << s << endl; // Output: "fed",
    prev_permutation(s.begin(), s.end());
    cout << "Previous permutation: " << s << endl; // Output: "fed",

    return 0;
}