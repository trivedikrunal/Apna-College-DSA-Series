#include<iostream>
using namespace std;
int main(){
    int n=4;
    //top section
    for(int i=0; i<n; i++){
        //space starting = 4-1=3
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != 0){
            //moddal sapce
            for(int j=0; j<2*i-1; j++){
                cout << " ";
            }

            cout << "*";
        }
        cout << endl;
    }
    //bottom
    for(int i=0; i<n-1; i++){
        //space
        for(int j=0; j<i+1; j++){
            cout << " ";
        }

        cout << "*";
        if(i != n-2){
            //space
            for(int j=0; j<2*(n-i)-5; j++){
            cout << " ";
        }

            cout << "*";
        }
        cout << endl;

    }
    return 0;
}