#include <iostream>
using namespace std;
 
void FirstAndLastIndex(string str,char ch,int *ptrF,int *ptrL){
    
    for(int i = 0;i<str.size();i++){
        if(str[i]==ch){
            *ptrF = i;
            break;
        }
    }

    for(int i = str.size()-1;i>=0;i--){
        if(str[i]==ch){
            *ptrL = i;
            break;
        }
    }

}

int main(){
 
    string str ="adad";
    char ch = 'a';

    int First = -1;
    int Last = -1;

    int *ptrF = &First;
    int *ptrL = &Last;

    FirstAndLastIndex(str,ch,ptrF,ptrL);

    cout<<First<<" "<<Last<<endl;



return 0;
}