#include <iostream>
using namespace std;
 
int main(){
 
 int x, y;

 cin>>x>>y;

 int *ptrX = &x;
 int *ptrY = &y;

 int result;

 int *ptr_result =&result;

 *ptr_result = *ptrX + *ptrY;

 cout<<result;  
 
return 0;
}