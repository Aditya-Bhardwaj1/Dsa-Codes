#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,n,i;
    cout<<"print n for fibonacci series";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=0;i<n;i++){
        int sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
        
    }


return 0;
}