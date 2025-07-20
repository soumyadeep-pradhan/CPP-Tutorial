#include <iostream>
#include <stack>
using namespace std;
int main() {
    // Your code goes here
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "Top element: " << s.top() << endl; // Output:
    cout << "Top element after pop: " << s.top() << endl; // Output: 2
    cout << "Stack size: " << s.size() << endl; // Output: 2
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Output: No
    while (!s.empty()) {
        cout << "Popping element: " << s.top() << endl; // Output: 2, then 1
        s.pop();
    }
    
    //stack swap

    stack<int> s1, s2,s3;
    cout<<s3.size()<<endl; // Output: 0
    s1.push(10);
    s1.push(20);    
    s2.push(30);
    s2.push(40);
    s2.push(50);
    cout << "Before swap:" << endl;
    cout << "s1 top: " << s1.top() << ", size: " << s1.size() << endl; // Output: 20
    cout << "s2 top: " << s2.top() << ", size: " << s2.size() << endl; // Output: 40
    s1.swap(s2);
    cout << "After swap:" << endl;
    cout << "s1 top: " << s1.top() << ", size: " << s1.size() << endl; // Output: 40
    cout << "s2 top: " << s2.top() << ", size: " << s2.size() << endl;
    s3.swap(s1);
    cout << "After swap s3 with s1:" << endl;
    cout << "s3 top: " << s3.top() << ", size: " << s3.size() << endl; // Output: 40
    cout <<  " size: " << s1.size() << endl; // Output: 20

    return 0;
}
