#include<stdio.h>
#include<conio.h>
#include<iostream> 
using namespace std;
int main(){
    char a;
    cout <<"input character";
    cin >>a;
    
     if(a>47&&a<58){
         cout<<"number";
     }
     else if(a>64&&a<91){
         cout<<"uppercase";
     }
     else if(a>96&&a<123){
         cout<<"lowercase";
     }
     else
     cout<<"wrong number";

return 0;
}