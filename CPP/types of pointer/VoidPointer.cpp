#include <iostream>
using namespace std;
 
int main(){
 
    /*It is generic pointer
    float  f =2.5
    int *ptr = &f //error
    
    these are special pointer that can point to any different data type value
    
    we can use same pointer to store integer value or float value
    
    void pointers can't be dereferenced because it can point to any type of value
    
    we can typecaste*/
    
    float f = 10.2;
    int x = 10;
    void *ptr = &f;
    ptr = &x;

    // int *intPtr = ptr;//void pointer cant be used to initialize
    int  *intPtr = (int *)ptr;  // now we can dereference 
    cout<<*intPtr ;
return 0;
}