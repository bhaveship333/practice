#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int row = 0; row < n; row++){
        for(int col = n-row; col >= 1 ; col--){
            cout << "*";
        }
        cout << endl;
    }
}