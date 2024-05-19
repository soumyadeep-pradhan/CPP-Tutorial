#include <iostream>
using namespace std;
 
void ReverseArray(int arr[],int start, int end){

    if(start>=end){
        return;
    }

    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    ReverseArray(arr,start+1,end-1);

}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
    
}
int main(){
 
 int arr[]= {1,2,3,4,5,6,7,8,9,10};
 int n  = sizeof(arr)/sizeof(arr[0]);
 printArray(arr,n);
 ReverseArray(arr,0,n-1);
 printArray(arr,n);

    
 
return 0;
}