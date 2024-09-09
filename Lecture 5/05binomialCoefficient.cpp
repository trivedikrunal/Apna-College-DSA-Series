#include<iostream>
using namespace std;

//create function Factorial

float factValue(float n){ //parameters
    float fact = 1;
    for(float i=1; i<=n; i++){
        fact *= i; 
    }
    
    return fact;
}

float binomialCoefficient(float n,float r){
    float bCV = (factValue(n)/(factValue(r) * factValue(n-r)));

    return bCV;

}
int main(){
    cout << "Binomial coefficient Value is: " << binomialCoefficient(8,2) << endl;
    cout << "Binomial coefficient Value is: " << binomialCoefficient(6,3) << endl;
    return 0;
}