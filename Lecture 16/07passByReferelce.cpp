#include<iostream>
using namespace std;

void changeA(int &b){
    b = 22;
}

int main(){
    int a = 10;
    changeA(a);
    cout << "Inneer a: " << a << endl;

    return 0;
}