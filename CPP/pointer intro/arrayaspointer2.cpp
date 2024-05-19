#include <iostream>
using namespace std;
 
int main(){
 
    // We can use pointer to point an entire array
    
    int a[3]={6,9,12};

    int (*p)[3]=&a; 
    /*int (*p)[3]--> int type pointer which points to an array of length 3 , 
    &a -->  we store the base address of array in the int (*p)[3] */
    cout<<p<<" "<<a<<" "<<*p<<" "<<*a<<endl ;
    cout<<p<<" "<<a<<" "<<p<<" "<<*a<<endl ;
    /*a --> adress of array
    p --> adress of arary
    when we dereference p we get the same address of array
    p pointes to entire array
    // p and *p gives same thing here*/

    /*we can use the above to point to an entire row of a 2d array
    using *(p+i) we access ith row  where each row is a normal arary
    then we can dereference to get particular index of that row
    then we can access the elements of row at an index or jth column using *(*(p+i)+j)
    */
return 0;
}