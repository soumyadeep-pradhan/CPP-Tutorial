#include <iostream>
using namespace std;
 
int main(){
 
    int arr[]={2,5,3,2,8,5,6,3,8,6,9};
    
   int n = sizeof(arr)/sizeof(arr[0]);

    int ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {   
            if(arr[i]==arr[j]){
                arr[i]= arr[j]= -1;
                
            
            }

        }

        
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=-1)
        {
            ans = arr[i];
            break;
        }
        
    }
    cout<<ans<<endl;
    
    
 
return 0;
}