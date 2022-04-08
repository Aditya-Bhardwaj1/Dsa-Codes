#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;

}
int main(){
    int odd[5]={3,5,15,19,27};
    int even[6]={5,7,12,25,34,44};
    int od=binarysearch(odd,5,1);
    cout<<"Index is:"<<od;
    int ev=binarysearch(odd,6,5);
    cout<<"Index is:"<<ev;
    
    return 0;
}