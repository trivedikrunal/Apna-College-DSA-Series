#include<iostream>
using namespace std;

int main(){
    //int value exmple
    int a = 10; // a value
    int* ptr = &a; // a pointer address
    int** ptr2 = &ptr; // ptr to pinter address // pinter to pointer address

    cout << &a << endl; //hexadecimal address
    cout << ptr << endl; //Same value
    cout << &ptr << endl; //Same value
    cout << ptr2 << endl; //Differnt Address
   
    return 0;
}