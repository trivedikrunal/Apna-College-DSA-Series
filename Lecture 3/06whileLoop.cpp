#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter Loop Range: ";
    cin >> n;
    int count = 1;
    while(count <= n){
        cout << "Count: " << count << endl;
        count ++;
    }
    return 0;
}