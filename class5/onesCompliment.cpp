#include<iostream>
using namespace std;
int main(){
   int n = 7;
   int mask = 0;
   while (mask < n){
       //shift left 1 bit of mask and 'OR' 1 in it
       mask = (mask << 1) | 1;
   }
   int ans = (~n) & mask;
   cout << ans;
}