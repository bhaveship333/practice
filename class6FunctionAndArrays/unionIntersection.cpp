#include<iostream>
using namespace std;
int main(){
    int arr1[] = {3,4,5,6,7};
    int arr2[] = {3,4,5,8,1};
    int out[3] = {};
    int c = 0;
    for(int i = 0; i < 5; i++){
        // cout << "before for loop" << out [i]<< endl;
       for(int j = 0; j < 5; j++){
           if(arr1[i] == arr2[j]){
               out[c] = arr1[i];
               c++;
            //    continue;
           }
        // cout << "after for loop" << out [i]<< endl;
    }
    }
    for(int l = 0; l< c; l++){
        cout << out[l];
    }

    //incomplete intersection nahi nikala
}