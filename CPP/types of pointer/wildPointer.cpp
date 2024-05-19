#include <iostream>
using namespace std;
 
int main(){
 
    /*WILD POINTER
    A wild pointer is a type of a pointer where the useer declares the pointer buut not initialize 
    Due to this it ends up pointing to some random memory location
    Due to this we might get some undefined behavior or crash

    in some case we might get 
    segmentation fault--> memory related issue
    we want to access memory that is not available or memory is occupied or pinting towards corrupted area

    int x; declaration of a variable garbage value
    
    int *ptr; declaration of a pointer variable garbage value

    this pointer is having some random address

    */
 
        int*ptr;
        cout<<ptr<<" "<<*ptr<<endl;
return 0;
}