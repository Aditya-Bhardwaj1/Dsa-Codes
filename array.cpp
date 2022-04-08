#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){ 
    int min=INT_MAX,max=INT_MIN;
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }

    }
    cout<<"maximum is: "<<max<<endl;
    cout<<"minimum is: "<<min;
}