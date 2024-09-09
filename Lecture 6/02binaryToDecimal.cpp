#include<iostream>
using namespace std;

int binaryToDecimal(int binNum){
    int ans = 0;
    int pow = 1;
    while(binNum >0){
        int rem = binNum % 10;
        binNum /= 10;
        ans +=rem*pow;
        pow *=2;  
    }
    return ans;
}

int main(){
    cout << binaryToDecimal(100101) << endl;
    cout << binaryToDecimal(101001) << endl;
    cout << binaryToDecimal(10110) << endl;
    return 0;
}