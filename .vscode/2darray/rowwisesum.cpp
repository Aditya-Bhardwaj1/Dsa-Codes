#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int row;
    int max=INT_MIN;
    int index=-1;
    for(int i=0;i<3;i++){
        row=0;
        for(int j=0;j<3;j++){
         row=row+arr[i][j];
        }
        if(row>max){
            max=row;
            index=i;
        }
       // cout<<"sum of row"<<i<<":"<<row<<endl;
    }
    cout<<"gretest row"<<index;

}