#include<iostream>
using namespace std;



 int linearsrch(int a[], int size, int n){
    
     for(int i = 0; i<size; i++){
         if(n == a[i]){
            cout << "found "<< a[i] << ". on index " << i << endl;
         }
     }
     return 0;
 }
int main(){
    int arr[] = {8,2,5,7,6,9};
    int n = 9;
    linearsrch(arr, 6, n);
}