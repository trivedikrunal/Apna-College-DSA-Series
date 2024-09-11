#include<iostream>
using namespace std;

int main(){
    int marks[5] = {99,98,87,67,88};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    marks[3] = 100;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}