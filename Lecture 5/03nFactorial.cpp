#include<iostream>
using namespace std;

//create function Factorial

int factValue(int n){ //parameters
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i; 
    }
    
    return fact;
}
int main(){
    cout << "Factorail Value is: " << factValue(4) << endl;
    cout << "Factorail Value is: " << factValue(5) << endl;
    return 0;
}