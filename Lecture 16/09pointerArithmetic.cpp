#include<iostream>
using namespace std;

int main(){
    // Increment(++) 
    int a = 10;
    int* ptr = &a;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;

    // Decrement (--)
    int b = 10;
    int* ptr2 = &b;
    cout << ptr2 << endl;
    ptr2--;
    cout << ptr2 << endl;

    // Add 
    int c = 10;
    int* ptr3 = &c;
    cout << ptr3 << endl;
    ptr3 = ptr3 + 2;
    cout << ptr3 << endl;

    // -----------------------------------------------------
    int arr[] = {1,2,3,4,5};
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;

    // Subtract Ptr
    int* ptr6; // ex.100
    int* ptr7 = ptr6 + 2; // 100+8 =108

    cout << ptr7 - ptr6 << endl; //2

    // Compare
    int* ptr8;
    int* ptr9;
    int* ptr10 = ptr9;

    cout << ptr8 << endl;
    cout << ptr9 << endl;
    cout << ptr10 << endl;
    cout << (ptr8 < ptr9) << endl;
    cout << (ptr8 > ptr9) << endl;
    cout << (ptr8 <= ptr9) << endl;
    cout << (ptr8 >= ptr9) << endl;
    cout << (ptr10 == ptr9) << endl;
    cout << (ptr10 != ptr9) << endl;


    return 0;
}