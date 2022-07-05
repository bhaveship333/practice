#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int rem = 0;
    int notPrime =0;
    int prime;
    if(n==1){
        cout<<"not a prime no";
    }
    else{
    for(int i = 2; i < n-1; i++){
        rem = n%i;
        if(rem == 0){
            notPrime++;
        }
       
    }
    if(notPrime > 0){
        cout<<n<<"not a prime no";
    }
    else{
        cout<<n<<"prime no h bhai";
    }
    }
   
}