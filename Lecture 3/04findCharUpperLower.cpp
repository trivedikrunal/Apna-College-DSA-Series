#include<iostream>
using namespace std;
int main(){
    char charter;
    cout << "Enter Charter: ";
    cin >> charter;
    if(charter >= 65 && charter <= 90){
        cout << "Upeercase";
    }else if(charter >= 97 && charter <= 122){
        cout << "Lowercase";
    }else {
        cout << "Ivaild Charter!";
    }
    return 0;
}