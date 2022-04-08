#include<iostream>
using namespace std;
int main(){
    int a,b;
    char sign;
    cout<<"enter a, b and sign\n";
    cin>>a>>b>>sign;
    switch(sign){
        case '+':cout<<"Addition is: "<<a+b;
              break;
        case '-':cout<<"Subtraction is: "<<a-b;
              break;
        case '*':cout<<"Muliplication is: "<<a*b;
              break;
        case '/':cout<<"Division is: "<<a/b;
              break;
        case '%':cout<<"Modulo is: "<<a%b;
              break;
        default: cout<<"wrong choice";      
    }
    return 0;
}