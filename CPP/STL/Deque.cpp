//Deque --> Double Ended Queue
//dequeue --> pop from simple queue
#include <iostream>
#include <deque>
using namespace std;

int main(){
    //List --> Doubly Linked List-->cant access random location
    //Deque --> dynamic array --> random access allowed
deque<int> d = {1,2,3,4,5,6};
cout<<d[3]<<endl;

}