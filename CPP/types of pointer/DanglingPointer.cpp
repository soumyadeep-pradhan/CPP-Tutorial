#include <iostream>
using namespace std;
 
int main(){
 
    /*It is a type of pointer that points to a memory location that is not valid (may be valid initially)
    
    
    int *ptr = NULL;
       {
block        int x =10;//exists in the local scope
              ptr = &x;
        }
    
    */
   
    int *ptr = NULL;
    {
        int x =10;
        ptr  = &x;
    }

    // cout<<x ;//trows error
    cout<<ptr ;//pointer points to random address


    


return 0;
}