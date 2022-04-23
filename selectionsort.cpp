#include<iostream>
using namespace std;
int selectionsort(int arr[],int n){
    int mind;
    for(int i=0;i<n-1;i++){
        mind=i;
            for(int j=i+1;j<n;j++){
               if(arr[mind]>arr[j]){
                mind=j;        
            }
            }
        swap(arr[mind],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
int main(){
    int n;
    int arr[10];
    cout<<"enter n";
    cin>>n;
    cout<< "enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    return 0;
}
