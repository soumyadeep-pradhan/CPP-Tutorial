#include <iostream>
using namespace std;
 
int main(){
 
    int arr[]={3,4,6,1,5,2};
    int targetSum = 7;
    int ans = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
                if ((arr[i]+arr[j])==targetSum)
                {
                    ans++;
                }
                
        }
        
    }

    cout<<ans ;
    

 
return 0;
}