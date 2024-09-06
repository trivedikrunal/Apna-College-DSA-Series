#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter Loop Range: ";
    cin >> n;
    for(int i=0; i<=n; i++){
        cout << "Count: " << i << endl;
    }
    return 0;
}