#include<iostream>
using namespace std;

int main(){
    //int value exmple
    int a = 10;
    int* ptr = &a;
    cout << &a << endl; //hexadecimal address
    cout << ptr << endl; //Same value
    cout << &ptr << endl; //Differnt Address
    //float value example
    float b = 10.33;
    float* ptr2 = &b;
    cout << &b << endl; //hexadecimal address
    cout << ptr2 << endl;
    return 0;
}