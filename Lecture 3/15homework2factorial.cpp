// Qs. Print Factorial of a number N.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Factoial Number: ";
    cin >> n;
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial *= i;
        if(i == n){
            break;
        }
    }
    cout << n << " Factoial Value: " << factorial;
    return 0;
}