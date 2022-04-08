#include<iostream>
using namespace std;
void sumarr(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<sum;

}
int main(){
    int n, arr[10];
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sumarr(arr,n);
}