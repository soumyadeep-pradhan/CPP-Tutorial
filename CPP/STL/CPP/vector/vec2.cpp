#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;
    int n,a;
    cout<<"Enter the number of elements : " ;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    
    // for(const int& i:v){
    //     cout<<i<<" " ;
    // }
    // cout<<endl;

    for(auto &i:v){
        cout<<i<<" " ;
    }
    cout<<endl;
    

}