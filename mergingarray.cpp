#include<iostream>
using namespace std;
int merge(int arr1[],int m,int arr2[],int n,int arr3[]){
     int i=0;
     int j=0;
     int size=m+n;
     while((i+j)<size){
         if(arr1[i]<arr2[j]){
             arr3[i+j]=arr1[i];
             i++;
         }
         else{
             arr3[i+j]=arr2[j];
             j++;
         }

     }
     
}

int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
}