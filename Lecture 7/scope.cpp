#include<iostream>
using namespace std;

int y =10; // Globle Scope
int main(){
    // local scope
    for(int i=0;i<=5;i++){ // i is local scope
        int x;  // x is local scope
    }
    return 0;
}