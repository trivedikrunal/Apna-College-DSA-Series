#include<iostream>
using namespace std;
int main(){
    int i;
    cout << "Enter Number: ";
    cin >> i; 
    if(i % 2 == 0){
        cout << i << " is even number.";
    }else{
        cout << i << " is odd number.";
    }
    return 0;
}