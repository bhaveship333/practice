#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int row = 1; row<= n; row++){
        for(int space = n-row; space>=1; space--){
            cout<< " ";
        }
        for(int col = 1; col<= row; col++){
            cout << "*";
        }
        cout << endl;
    }
}