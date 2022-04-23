#include<iostream>
using namespace std;
int main(){
    char ch[20]={'a','b','c','d','e'};
    int count=0;

    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    cout<<count;
}