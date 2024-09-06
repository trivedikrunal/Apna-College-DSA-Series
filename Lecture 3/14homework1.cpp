// Qs. Sum of all numbers from 1 to N which are divisible by 3.
#include<iostream>
using namespace std;
int main(){
    int n ;
    int sum = 0;
    cout << "Enter 3 divisible Sum Number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i % 3==0){
            sum += i; 
        }     
    }
    cout << "3 Divisible Sum: " << sum << endl;
    return 0;
}