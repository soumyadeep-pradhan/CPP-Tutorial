#include <iostream>
using namespace std;

 
int main(){
 
    int arr[]={0,1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ans1=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>ans1){
            ans1 =arr[i];
        }
        
    }
    cout<<ans1<<endl ;
    int ans2 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>ans2 && arr[i]<ans1){
            ans2 =arr[i];
        }
        
    }

    cout<<ans2<<endl ;
return 0;
}