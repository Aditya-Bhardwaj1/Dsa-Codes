//total no of set bits in a and b
#include<iostream>
using namespace std;
int bits(int n){
    int bit=0;
    while(n!=0){
    if(n&1){
        bit++;
    }
    n=n>>1;
    }
    return bit;
}
int main(){
    int n1, n2;
    cout<<"enter n1 and n2";
    cin>>n1>>n2;
    cout<<bits(n1)+bits(n2);
    return 0;
    
}