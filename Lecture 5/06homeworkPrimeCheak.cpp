// WAF to check if a number is prime or not .
#include <iostream>
using namespace std;
// create function Cheak Prime or not
void cheakPrime(int n)
{
    bool isPrime = true;
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << "Prime Number is: " << n;
    }else{
        cout << "Not Prime Number is: " << n;
    }
}
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cheakPrime(n);

    return 0;
}