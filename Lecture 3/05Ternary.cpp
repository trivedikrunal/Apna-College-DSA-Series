#include<iostream>
using namespace std;
int main(){
    int i;
    cout << "Enter Number: ";
    cin >> i; 
    cout << (i >= 0 ? "Positive Number" : "Negetive Number") << endl;
    return 0;
}