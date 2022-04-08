#include<iostream>
using namespace std;
int main(){
    int i,n,flag=0;
    cout<<"enter n";
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
        flag=1;
        break;}
    }
    if(flag==1)
    cout<<"not prime";
    else
    cout<<"prime";
    return 0;
}