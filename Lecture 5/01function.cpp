#include<iostream>
using namespace std;

//create function twoSum
double towSum(double a, double b){ //parameters
    double sum = a + b;
    return sum;
}
//create function twoSub
double towSub(double a, double b){
    double sub = a - b;
    return sub;
}
int main(){
    cout << "5.55 + 6: " << towSum(5.55,6) << endl; //argument
    cout << "9.55 - 6: " << towSub(9.55,6) << endl;
    return 0;
}