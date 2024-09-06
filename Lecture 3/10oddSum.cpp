#include<iostream>
using namespace std;
int main(){
    int n ;
    int sum = 0;
    cout << "Enter Sum Odd Number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i % 2 != 0 ){
            sum += i;
        }      
    }
    cout << "Sum Odd: " << sum << endl;
    return 0;
}