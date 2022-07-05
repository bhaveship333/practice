#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int row = 0 ; row < n ; row++ ){
      for(int space = row; space > 0; space --){
          cout << " ";
      }for(int col = n-row; col >=1; col--){
          cout << "*";
      }
      cout << endl;
    }
}