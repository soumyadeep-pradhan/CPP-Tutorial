#include <iostream>
#include <queue>
#include <vector>           
using namespace std;

int main() {
// Prioritu Queue internally uses a max heap--> binary tree
// max heap --> largest element at the top
// min heap --> smallest element at the top

//largest value --> highest priority
// when we pop, we get the largest value
priority_queue<int> pq; // max heap
pq.push(10);
pq.push(20);
pq.push(5);
pq.push(15);    
pq.push(30);    
pq.push(25);

while(!pq.empty()){
    cout << pq.top()<< " ";
    pq.pop(); // removes the top element
}
cout << endl;// Output: 30 25 20 15 10 5


// to build a min heap(reverse order priority), we can use the greater<int> comparator
priority_queue<int, vector<int>, greater<int>> q;
q.push(10);
q.push(20);
q.push(5);
q.push(15);    
q.push(30);    
q.push(25);     
while(!q.empty()){
    cout << q.top() << " ";
    q.pop(); // removes the top element
}
cout << endl; // Output: 5 10 15 20 25 30
    return 0;
}