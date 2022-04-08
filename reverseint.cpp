#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
       int i,ans=0,j=0;
       while(n!=0){
           i=n%10;
           ans=i+(ans*10);
            j++;
           n=n/10;
       }
       return ans;
}
int main(){
    int n;
    cout<<"input n\n";
    cin>>n;
    if(n>0){
        cout<<reverse(n);
    }
  else  if(n<0){
        n=n*(-1);
        cout<<(-1)*reverse(n);
    }
    else 
      cout<<"0";
}