#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,-2,8,-1,4,8,-8,3,-9};
    int temp = 0;
    for(int j=0;j<9;j++){
        for(int i = 0; i < 9; i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr [i + 1];
            arr[i+1] = temp;
        }
    }
    }
    for(int k=0; k < 9; k++){
        cout << arr[k];
    }
}