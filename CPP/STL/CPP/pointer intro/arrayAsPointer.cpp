#include <iostream>
using namespace std;
 
int main(){
 
    int arr[3]={12,15,7};
    int *ptr =&arr[0]; 
    cout<<ptr<<" "<<arr<<"\n" ;//name of array acts like a pointer to the 1st element 0f array
    cout<<*ptr<<" "<<*arr<<"\n" ;//dereferencing
    cout<<*(arr+0)<< " "<<*(arr+1)<<" "<<*(arr+2)<<endl;// name of array arr stores the zeroth index
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<" " ; // *arr(i+1) = arr[i]
    }
    cout<<"\n" ;
    
    // int *ptr =(arr+2) gives the access of 3rd element of array

    int *ptr1 = (arr+1);
    cout<<"\n"<<*ptr1<< "\n";
return 0;
}