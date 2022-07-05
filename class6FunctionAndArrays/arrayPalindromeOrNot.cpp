#include<iostream>
#include <algorithm> //for sort need to include
using namespace std;
int main(){
    int arr[7] = {0,1,2,3,5,8,13};
    //sort
    sort(arr, arr+7);
    
    //n is length of array
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
     cout<<arr[i] <<endl;   
    }
    int count = 0;
    for(int i=0; i<n-2; i++){
        // 
        if(arr[0] == 0){
            continue;
        }
        if(arr[i] + arr[i+1] != arr[i+2]){
            count++;
        }
    }
    if(count == 0){
        cout << "yes given array is palindrom";
    }
    else{
        cout << "no given array is not a palindrom";
    }
}