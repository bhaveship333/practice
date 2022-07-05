#include<iostream>
#include<math.h> 
using namespace std;

int main(){
    // input n = 137, output = 7,3,1
        // int n = 137;
        // while(n != 0) {
        //     int x = n % 10;
        //     cout<<"digit:- "<<x<<endl;
        //     n = n / 10;
        // }


    //  input n = [1,3,7] , output = 137
    // int arr[3] = {4,3,7};
    // int arrSize = sizeof(arr)/sizeof(arr[0]);
    // int ans = 0;
    // for(int i = 0; i < arrSize; i++){
    //     ans = (ans + (arr[i] * pow(10,arrSize-i-1)));
    // }
    //    cout<< ans<<endl; //437


  //decimal top binary me bit nikal kr btao
  int n = 9;
  while (n != 0){
  int bit = n & 1;   //% - reminder deta h decimal me aur & bit nikal kr deta h 
    cout<<bit<<endl;
    n = n>> 1;
  }
  
  // int n = 9;
  // int ans = 0;
  // while (n!=0){
  //   ans = (n%2);
  //   cout<<"ans"<<ans<<endl;
  //   n = n/2;

    // cout<<"n"<<n<<endl;

  
  // cout<<ans<<endl;
}