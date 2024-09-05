#include<iostream>
using namespace std;
int main(){
    //Arethmetic Operaters
    int a = 11;
    int b = 5;

    cout << "a + b: " << (a+b) << endl;
    cout << "a - b: " << (a-b) << endl;
    cout << "a * b: " << (a*b) << endl;
    cout << "a / b: " << (a/b) << endl;
    cout << "a % b: " << ((int)a%b) << endl;

    //Relational Operaters
    cout << "a < b: " << (a<b) << endl;
    cout << "a > b: " << (a>b) << endl;
    cout << "a <= b: " << (a<=b) << endl;
    cout << "a >= b: " << (a>=b) << endl;
    cout << "a == b: " << (a==b) << endl;
    cout << "a != b: " << (a!=b) << endl;

    //Logical Operaters
    cout << "Not (a < b): " << !(a<b) << endl;
    cout << "(a < b) OR (a > b): " << ((a < b) || (a > b)) << endl; 
    cout << "(a < b) AND (a > b): " << ((a < b) && (a > b)) << endl;

    //Unary Operaters
    //(1)Increment
    int c = 10;
    int d = c++; //post increment
    cout << "Post Increment d: " << d << " and c value: " << c << endl;

    int e = 10;
    int f = ++e; //pre increment
    cout << "Pre Increment f: " << f << " and e value: " << e << endl;

    //(1)Decremnet
    int g = 10;
    int h = g--; //post Decremnet
    cout << "Post Increment h: " << h << " and g value: " << g << endl;

    int i = 10;
    int j = --i; //pre Decremnet
    cout << "Pre Increment j: " << j << " and i value: " << i << endl;

    return 0;
}