#include<iostream>
using namespace std;

int main(){
    int a = 5; //5
    int *p = &a; //addres 5
    int **q = &p;

    cout << *p << endl;// 5
    cout << **q << endl; // 5
    cout << p << endl; //addres 5
    cout << *q << endl; // addres 5
}