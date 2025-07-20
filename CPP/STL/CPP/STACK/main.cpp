#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
        this->capacity = c;
        arr = new int(c);
        this->top = -1;
    }
    void push(int data){
        if(this->top == this->capacity - 1){
            cout<<"Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    int pop(){
        if(this->top == -1){
            cout<<"underflow\n";
            return INT_MIN;
        }
        this->top--;
    }
    int get_top(){
        if(this->top == -1){
            cout<<"underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }
    bool isEmpty(){
        return this->top == -1;
    }
    int size(){
        return this->top+1;
    }
    bool isFull(){
        return this->top == this->capacity - 1;
    }
};
int main(){
    Stack st(6);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.get_top()<<endl;
    st.push(5);
    st.push(6);
    st.pop();
    
    cout<<st.get_top()<<endl;
    

}