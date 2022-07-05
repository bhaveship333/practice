#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,6,2,8,9,4,6};
    int count = arr[0];
    int temp;
    for(int i = 0; i < 7; i++){
        for(int j = 0; j<7; j++) {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int k = 0; k < 7; k++){
        if(arr[k] == arr[k+1]){
            continue;
        }
        else{
            cout << arr[k];
        }
    }

}
//optimize krna h 