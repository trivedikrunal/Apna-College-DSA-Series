#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> vec(5,0);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;


    vector <char> vecChar = {'A','B','C','D'};
    for(char val: vecChar){
        cout << val << endl;
    }
    return 0;
}