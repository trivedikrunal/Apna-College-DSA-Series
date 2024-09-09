#include<iostream>
using namespace std;

//create function 1 to N

int nSum(int n){ //parameters
    int totalSum = 0;
    for(int i=1; i<=n; i++){
        totalSum += i; 
    }
    
    return totalSum;
}
int main(){
    cout << "Total Sum is: " << nSum(10) << endl;
    cout << "Total Sum is: " << nSum(5) << endl;
    return 0;
}