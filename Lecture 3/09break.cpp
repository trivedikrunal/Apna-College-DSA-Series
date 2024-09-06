#include<iostream>
using namespace std;
int main(){
    int n ;
    int sum = 0;
    cout << "Enter Sum Number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        sum += i;  
        if(i == 10){
            break; // using break
        }      
    }
    cout << "Sum: " << sum << endl;
    return 0;
}