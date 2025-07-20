#include <iostream>
using namespace std;
 
int main(){
int x =1;
double y =5.021646;
int *ptrx = &x;
double *ptry = &y;
cout<<sizeof(x)<<"\n"<<sizeof(y)<<"\n";
cout<<ptrx<<" "<<(ptrx+1)<<endl ;
cout<<ptry<<" "<<(ptry+2)<<endl ;

cout<<ptrx<<"\n" ;
ptrx +=1;
cout<<ptrx ;


return 0;
}