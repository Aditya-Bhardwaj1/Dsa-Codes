#include<iostream>
using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<n<<endl;
//     int rev[5];
//     for(int i=0;i<=n;i++){
//         rev[i]=arr[n-i-1];
//     }
//     cout<<"array is:"<<endl;
//     for(int i =0; i<n;i++){
//         cout<<rev[i];
//     }
// }
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<"array is:"<<endl;
     for(int i =0; i<n;i++){
      cout<<arr[i];
     }
}
