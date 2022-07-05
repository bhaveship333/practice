#include<iostream>
using namespace std;
int main(){
    // que. find pair to find sum of 9
    // int arr[] = {1,2,3,4,5,6,7};
    // for(int i = 0; i < 7; i++){
    //     for(int j = i+1; j < 7; j++) {
    //             if(arr[i] + arr[j] == 9){
    //                 cout << "two no.s are"<< arr[i] << "and" << arr[j] << endl;
    //             }
    //     }
    // }


    // que. find triplet to find sum of 9
    // int arr[] = {1,2,3,4,5,6,7};
    // int n = 9;
    // for(int i = 0; i < 7; i++){
    //     int temp = n - arr[i];
    //     for(int j = 0; j < 7; j++) {
    //         for(int k = 0; k < 7; k++) {
    //             if( i == k ) {
    //                 if( k == j ) {
    //                     continue;

    //                 }
    //         }
    //         else{
    //                 if( arr[i+1] + arr[k] == temp){
    //                 cout << "all three no.s are " << arr[i]  << "," << arr[i+1] << " and " << arr[j] << endl;
    //             }
    //         }
    //         }
    //     }
    // }

    // que. find triplet to find sum of 9

    //trying one more time
    int arr[] = {1,2,3,4,5,6,7};
    int temp;
    for(int i = 0; i < 7; i++){
        int temp = 9 - arr[i];
        for(int j = i+1; j < 7; j++) {
            for(int k = j+1; k < 7; k++){
                if (arr[j] + arr[k] == temp){
                    cout << arr[i] << arr[j]  << arr[k] << endl;
                }
            }
        }
    }
    //done need to optimize
}