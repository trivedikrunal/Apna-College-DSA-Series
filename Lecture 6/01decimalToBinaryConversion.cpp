#include<iostream>
using namespace std;

int decimalTOBinary(int decNum){
    int ans = 0;
    int pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += rem * pow;
        pow *=10;
    }
    return ans;

}
int main(){
    
    for(int i=1;i<=10;i++){
        cout << "Decimal Number " << i << " = Binary Number is = " << decimalTOBinary(i) << endl; 
    }
    cout << decimalTOBinary(101);
    return 0;
}