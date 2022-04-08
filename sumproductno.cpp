#include<iostream>
using namespace std;
int main(){
    int n,sum=0,product=1,a;
    cout<<"enter n ";
    cin>>n;
    while(n>0){
       a=n%10;
       sum=sum+a;
       product=product*a;
       n=n/10;
    }    
    cout<<sum<<" "<<product;
    cout<<"\ndifference is: "<<product-sum;
    return 0;
}
