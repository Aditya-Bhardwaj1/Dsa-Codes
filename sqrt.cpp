#include<iostream>
using namespace std;
long long int binarysearch(int n){
        int s=0;
        int e=n;
        int ans=-1;
       long long int mid=s+((e-s)/2);
        long long int sq;
        while(s<=e){
            sq=mid*mid;
            if(sq==n){
                return mid;
            }
            if(sq>n){
                
                e=mid-1;
            }
            else
            {   ans=mid;
                s=mid+1;
            }
             mid=s+((e-s)/2);
        }
        return ans;
}
int moreprecision(int num, int precison, int tempsol ){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precison;i++){
        factor=factor/10;
        for(double j=ans; j*j<num; j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int res= binarysearch(n);
    cout<< moreprecision(n,3,res);
    return 0;
}