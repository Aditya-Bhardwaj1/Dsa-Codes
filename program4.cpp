#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int space=0; space<=i-1;space=space+1){
            cout<<" ";
        }
     for(int j=0;j<n-i+1;j++){
         cout<<i;
     }   
     cout<<endl;
    }
    return 0;
}