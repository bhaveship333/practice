#include<iostream>
#include<algorithm>
using namespace std;
int main () {
  string str1 = "bhavesh";
  string str2 = "habshve";
  std::sort(str1.begin(), str1.end());
  std::sort(str2.begin(), str2.end());
  if(str1 == str2){
      cout<<"anagram";
  }
  else{
      cout<<"not an anagram";
  }
//   sort(str1.begin(),str2.end());
//   cout<< str1 << endl;
}