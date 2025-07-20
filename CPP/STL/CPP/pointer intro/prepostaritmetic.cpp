#include <iostream>
using namespace std;
 
int main(){
 
    int arr[3]={5,9,25};
    int *ptr = &arr[0];
    // cout<<ptr<<" "<<ptr+1<<" "<<ptr+2<<"\n";


    //<---POSTFIX INCREMENT-->

    // *ptr++               //*(ptr++) => right to left ie pointer returns and increment and value
    // cout<<*ptr++<<" "<<*ptr<<endl;    
    // cout<<ptr<<" "<<*ptr;


    // (*ptr)++;                         //returns the value at ptr 5 and increment it
    // cout<<*ptr;

    
     //<---PREFIX INCREMENT--> 
    
    // cout<<*++ptr<<endl ;//R to L :==>*(++ptr) first pointer is incremented then returned after that dereferencing
    cout<<++*ptr<<endl ; //R to L :=>++(*ptr)
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;//arr[0] is incremented by 1



 
return 0;
}