#include<iostream>
using namespace std;
int fact(int n){
    int ans=1;
     for(n;n>0;n--){
         ans=ans*n;
     }
     return ans;
}
int main(){
    int n,r,ncr;
    cout<<"enter n, r";
    cin>>n>>r;
    ncr=fact(n)/(fact(r)*fact(n-r));
    cout<<"ncr is: "<<ncr;
}