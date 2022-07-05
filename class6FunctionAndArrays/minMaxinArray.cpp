#include<iostream>
using namespace std;

    int minMax(int arr[], int size){
        int max = arr[0];
        int min = arr[0];
        for(int i = 1; i < size; i++){
            if(max < arr[i]){
                max = arr[i];
            }
            if(min > arr[i]){
                min = arr[i];
            }
            // else{

            // }
        }
        cout << "max " << max << endl;
        cout << "min " << min << endl;
        return 0;
    }

int main(){
    int arr[] = {44,2,567,34,534,5234,4356,657,7,645,435,1,465,456,54,456,456,45};
    minMax(arr, 17);
    // cout << temp ;
}