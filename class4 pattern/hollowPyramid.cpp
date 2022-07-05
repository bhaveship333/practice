#include<iostream>
using namespace std;
int main(){
    int n = 6;
        int temp = 1;
    for(int row = 1; row<= 6; row++){
        // cout<<"before"<<temp;

        for(int space = n-row; space>= 1; space--){
            cout<< " ";
        }
        if(row == 1){
            cout<<" *";
           
            cout<<endl;
        }
        else if ( row == 6){
            cout<<" ";
             for( int innerrow = 1; innerrow <= row; innerrow++){
                cout << "* ";
            }
            cout<<endl;

        }
        else{
            cout << "*";
            for(int inerspace = 1; inerspace <= temp; inerspace++ ){
                cout << " ";
            }
            cout << "*";
            cout<<endl;

        }
            temp=temp+2;
        // cout<<"after"<<temp;
    }
}