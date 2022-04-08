#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,start;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        for(k=1;k<=2*(i-1);k++)
        {
            cout<<"*";
        }
        for(start=n-i+1;start>=1;start--)
        {
            cout<<start;
        }

        cout<<endl;
    }

}
//congartulations Aditya!! made it in the first attempt
//by printing firt triangle thn middle one thn last one