#include<iostream>
using namespace std;
void search(int arr[],int size,int ele){
     int bol=0;
     for(int i=0;i<size;i++){
         if(arr[i]==ele){
             cout<<"present at index "<<i;
             bol=0;
             break;
         }
         else{
              bol=1;
         }
     }
      if(bol==1){
             cout<<"not present";
         }
}
int main(){
    int array[10]={10,-2,6,7,8,-23,30,26,0,1};
    cout<<"enter element to search"<<endl;
    int n;
    cin>>n;
    int size=sizeof(array)/sizeof(int);
    search(array,size,n);
}