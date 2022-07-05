#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    int n;
    int output =0 ;
    cout << "please enter base value" << endl;
    cin >> x;
    cout << "please enter power value" << endl;
    cin >> n;
    output = pow(x,n);
    cout << output << endl;
    // not working , not taking input form user.
}