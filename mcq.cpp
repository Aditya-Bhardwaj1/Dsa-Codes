#include<iostream>
using namespace std;
int update(int a){
    a-=2;
    return a;

}
int main(){
    int a=10;
    update(a);
    cout<<a;
}