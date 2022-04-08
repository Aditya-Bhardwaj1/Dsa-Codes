#include<iostream>
using namespace std;
int firstoccurence(int arr[], int size, int key){
 int start=0,ans=0;
 int end=size-1;
 int mid=start+((end-start)/2);
  while(start<=end){
      if(arr[mid]==key){
          ans=mid;
          end=mid-1;
      }
      else if(arr[mid]>key){
            end=mid-1; 
      }
      else if(arr[mid]<key){
            start=mid+1;
      }
      mid=start+((end-start)/2);
  }
  return ans;
}
int lastoccurence(int arr[], int size, int key){
 int start=0,ans=0;
 int end=size-1;
 int mid=start+((end-start)/2);
  while(start<=end){
      if(arr[mid]==key){
          ans=mid;
          start=mid+1;
      }
      else if(arr[mid]>key){
            end=mid-1; 
      }
      else if(arr[mid]<key){
            start=mid+1;
      }
      mid=start+((end-start)/2);
  }
  return ans;
}
int main(){
    int arr[5]={1,2,3,3,5};
    int first = firstoccurence(arr,5,3);
    cout<<"first occurence of 3 is "<<first<<endl;
    cout<<"last occurence 0f 3 is "<<lastoccurence(arr,5,3);

}