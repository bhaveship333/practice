#include<iostream>
using namespace std;

    int reverse(int arr[], int size){
        for(int i = size-1; i >= 0; i--){
            cout << arr[i] << endl;
        }
       
    return 0;
    }

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr, 7);
}