#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    //set is a collection of unique elements
    // set is implemented as a balanced binary search tree
    // elements are stored in sorted order
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
    s2.insert(23);
    s2.insert(2);   
    s2.insert(4);
    s2.insert(30); // inserting integers
    s2.insert(20); // inserting integers
    s2.insert(10); // inserting integers

    s2.insert(1); // duplicate, will not be added
    s2.insert(3); // duplicate, will not be added
    for(auto num : s2) {
        cout << num <<" "; // prints each integer in sorted order
   
    }
    cout<<"\n";
    cout<<s2.size(); // returns the number of unique elements
    cout<<"\n";
    // output: 5
    //time complexity of insert is O(log n)
    //time complexity of find is O(log n)
    //time complexity of erase is O(log n)      

    cout << "lower bound of 11: " << *s2.lower_bound(11) << endl; // returns the first element not less than 3
    // output: 20
    // because 20 is just after 11 
    // and there is no element less than 11 in the set
    cout << "lower bound of 31: " << *(s2.lower_bound(1)) <<endl;
    // returns the first element not less than 50

    
}