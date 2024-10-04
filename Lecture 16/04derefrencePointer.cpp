#include<iostream>
using namespace std;

int main(){
    //int value exmple
    int a = 10; // a value
    int* ptr = &a; // a pointer address
    int** ptr2 = &ptr; // a pointer pointer

    cout << *(&a) << endl; //10
    cout << *(ptr) << endl; //10
    cout << **(&ptr) << endl; //10
    cout << **(ptr2) << endl; //10
    
   
    return 0;
}