#include<iostream>
using namespace std;
int main(){
    int arr[10],rev[10],i,n,j;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter araay element"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    for(j=0,i=n-1;j<n;j++,i--){       
            rev[j]=arr[i];
        }
    cout<<"reverse array is"<<endl;
    for(i=0;i<n;i++){
        cout<<rev[i];
    }

}