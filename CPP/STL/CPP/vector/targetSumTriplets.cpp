#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
 
    int arr[] = {3,1,2,4,0,6};
    int tarsum = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if ((arr[i]+arr[j]+arr[k])==tarsum)
                {
                    ans++;
                }
                
            }
            
        }
        
    }

    cout<<ans ;
    

return 0;
}