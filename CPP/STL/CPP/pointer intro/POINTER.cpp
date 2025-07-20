#include <iostream>
using namespace std;
 
int main(){
 
    int x =10;
    int y = 50;
    cout<<&x<<endl;
    int *ptr = &x;
    cout<<ptr<<endl;
    //updating x with poiinter
    *ptr = 20;
    cout<<x;
 
return 0;
}