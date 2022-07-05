#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> arr = {1,2,2,1,1,3};
    // vector<int> a;
    // for(int i=0; i<arr.size(); i++) {
    //     int temp = 1;
    //     for(int j=i+1; j<arr.size();) {
    //         if(arr[i] == arr[j]) {
    //             temp++;
    //             arr.erase(arr.begin() + j);
    //         }
    //         else{
    //             j++;
    //         }
    //     }
    //     // for(auto i: arr) {
    //     //     cout << i << " ";
    //     // }
    //     cout << endl;
    //     a.push_back(temp);
    // }
    // for(int l=0; l<a.size(); l++) {
    //     cout<< a[l] << " ";
    // }


    // second approch
    //                    0,1,2,3,4,5
    vector<int> arr = {1,2,2,1,1,3};
    vector<int> fr(arr.size(), 0);
    for(int i=0; i<arr.size(); i++) {
        int value = arr[i];
        fr[value]++;
    }
    for(auto i: fr) cout << i << " "; cout << endl;

    //third approch
    vector<int> arr = {1,2,2,1,1,3};
    map<int,int> mp;
    for(int i = 0; i< arr.size(); i++){
        int value = arr[i];
        mp[value]++;
    }
    for(auto i: mp) cout << i.second << " "; cout << endl;
    return 0;
}