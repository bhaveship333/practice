#include<iostream>
using namespace std;
int main(){
    int arr[] = {8,5,3,6,2,6,3,9,1};
    int temp = 0;
    for(int i = 0; i<9; i++){
        for(int k = 0; k < 9; k++){
            if(arr[k] > arr[k+1]){
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
    }
    }
    for(int j = 0; j < 9; j ++){
        cout << arr[j];
    }
    
}