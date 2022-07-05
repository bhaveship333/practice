#include<iostream>
using namespace std;
int main(){
     int n = 6;
    for(int row = 1 ; row <= n ; row++ ){
        // int temp = 3;
     if(row == 1 || row == n){
         for(int row1 = 1; row1 <= n-row+1; row1++){
             cout << "*";
         }
         cout<< endl;
     }
     else{
         cout << "*";
         for(int col = n - row - 1  ; col >= 1; col--){
             cout << " ";
         }
         cout << "*";
         cout << endl;
     }
        //  temp++;
    }
}