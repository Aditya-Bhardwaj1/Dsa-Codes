#include<iostream>
using namespace std;
int fibo(int n){
    int a=0,b=1;
    int sum=0;
    for(int i=1;i<=n;i++){
       sum=a+b;
       a=b;
       b=sum;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<fibo(n);
}