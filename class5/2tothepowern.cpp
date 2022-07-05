#include<iostream>
using namespace std;
int main(){
    int n = 8; //  check whether this comes in 2to the power or not for eg 2 to the pow 3 equal 8. answer true
    int ans = (n & (n-1));
    cout << ans << endl;
    if(ans == 0){
     cout << "yes";
    }
    else{
        cout << "fasle";
    }
}