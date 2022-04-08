// writting the code to convert the negative dceimal numbers --> binary 
#include <bits/stdc++.h>
using namespace std;
    
int decimaltobinary(int n ){
      int i=0;
    int num =0;
    
    while(n!=0){
        int r =n % 2;
        num = num +(r*(pow(10,i))); 
        i++;
        n = n / 2;
    }
    return num;
    
}

int main()
{
    int n ;
    cin>> n;
  n=n*(-1);
int ninbiary = decimaltobinary(n);
cout<< ninbiary<<endl;

int onesC = ~n;
cout<< decimaltobinary(onesC) <<endl;

int twosC = onesC + 1;
cout<< decimaltobinary(twosC) <<endl;
}

// int a = 8;
// cout<< decimaltobinary(~a) <<endl;
