#include <iostream>
using namespace std;
 
void swap(int *p1, int *p2){

   int temp = *p1;
   *p1 = *p2;
   *p2 = temp;

}

int main(){
 
    int x = 5;
    int y = 7;

    int *ptrx = &x;
    int *ptry = &y;

    cout<<x<<" "<<y<<endl;

    swap(ptrx,ptry);

    cout<<x<<" "<<y<<endl;


 
return 0;
}