#include<iostream>
using namespace std;

//create function Sum Digits

int dSum(int num){ //parameters
    int digitsSum = 0;
    while(num>0){
        int lastDigit  = num % 10; 
        num = num / 10;
        digitsSum += lastDigit; 
        


    }
    return digitsSum;
    
}
int main(){
    cout << "Total digitsSum is: " << dSum(10) << endl;
    cout << "Total digitsSum is: " << dSum(555) << endl;
    return 0;
}