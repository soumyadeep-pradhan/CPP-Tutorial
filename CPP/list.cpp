#include <iostream>
#include <list>
using namespace std;

int main(){
    //vector --> Dynamic Array
    // List --> Doubly Linked List so front access
    list<int> l;
    list<int> l2={1,3,4};
    l.push_back(1);
    l.emplace_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);//additional front utility 
    l.pop_back();
    l.push_front(5); //additional utility

    
    for(int val: l){
        cout<< val <<" ";
    }   
    cout<<endl;
}
