#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int space=0;space<n-i;space=space+1){
            cout<<" ";
        }
         
           for(int j=0;j<=i;j=j+1){
             cout<<j;
            } 
            int k=i-1;
            while(k){
                cout<<k;
                k=k-1;
            }
            cout<<endl;
    }
    return 0;
}

/*       1
        121
       12321
      1234321
     123454321*/