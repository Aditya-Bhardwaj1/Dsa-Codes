#include<iostream>
using namespace std;
int swapal(int arr[],int size){
    int pt1=0,pt2=1,i;
      while(pt1<=size){
          swap(arr[pt1],arr[pt2]);
          pt1=pt1+2;
          pt2=pt2+2;
      }
      for(i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}
int main(){
    int arr[6]={1,2,7,8,5,6};
    swapal(arr,6);
    
}
/*awapal
for(i=0;i<size;i+=2){
    if(i+1<size){
        swap{arr[i],arr[i+1]}
    }
}
*/