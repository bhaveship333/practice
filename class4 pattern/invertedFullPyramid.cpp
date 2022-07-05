#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int row = n; row >= 1; row--){
        for(int space = n-row; space>=1; space--){
            cout<< " ";
        }
        for(int col = row; col >= 1; col --){
                cout << "* ";
        }
    cout<< endl;
    }

}