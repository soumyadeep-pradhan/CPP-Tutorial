#include <iostream>
using namespace std;
 
int main(){
 
    /*Null Pointer

    if we want to have a pointer variable whhich is just declared but will get address later to store
    we can use null pointer

    int *ptr = NULL;

    we can't fereference null pointer we get runtime errror although we don't have compile time error
    we may get segmentation fault and immediately programme terminate



    */
    int *ptr1  = NULL;//null pointer
    int *ptr2  = NULL;
    int *ptr3 = 0; //zero value
    int *ptr4 = '\0'; //null character
    // cout<<ptr1<<" "<<*ptr1<<endl ;
    // cout<<ptr2<<" "<<*ptr2<<endl ;
    cout<<ptr1<<" "<<ptr3<<" "<<ptr4<<" ";//all give same value all points to same address
    /*actually null pointer is same as null character
    in c++ character are stored in ASCII form integer form,
    ASCII integer form of null is 0 and NULL is same as \0
    0 is mostly a special reserved memory adress in many os

    Runtime error might occur on dereferencing null pointer
    */
return 0;
}