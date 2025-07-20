#include<iostream>
#include<vector>

using namespace std;

int main(){
  //iterator  
    vector<int> vec = {1,2,3,4,5};
    cout<<"vec.begin(): " << *(vec.begin())<<endl;
    cout<<"vec.end(): " << *(vec.end())<<endl;

  vector<int>::iterator it;
  for(it=vec.begin(); it!=vec.end();it++){
    cout<<*(it)<<" ";
  }
  cout<<endl;
  vector<int> ::reverse_iterator rit; 
  for ( rit = vec.rbegin(); rit!=vec.rend();rit++)  {
    cout<<*(it)<<" ";
  }
  cout<<endl;
  // can also use auto it
   //rbegin, rend

}