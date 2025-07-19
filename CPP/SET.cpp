#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    set<string> s; // set of strings
    s.insert("ac");
    s.insert("uyc");
    s.insert("hih");
    s.insert("jkl");

    for(auto str : s) {
        cout << str << " ";
        // prints each string in sorted order
    }
    cout<<endl;

    set<int> s2; // set of integers
    s2.insert(5);
    s2.insert(1);           
    s2.insert(3);
    s2.insert(2);   
    s2.insert(4);


    s2.insert(1); // duplicate, will not be added
    s2.insert(3); // duplicate, will not be added
    for(auto num : s2) {
        cout << num <<" "; // prints each integer in sorted order
   
    }
    cout<<"\n";
    cout<<s2.size(); // returns the number of unique elements
    // keys are ordered
    // output:
    // ac
    return 0;
}