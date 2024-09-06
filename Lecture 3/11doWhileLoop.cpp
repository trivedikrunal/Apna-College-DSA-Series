#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter Loop Range: ";
    cin >> n;
    int count = 1;
    do{
        cout << count << " ";
        count ++;
    }while(count <= n);
    return 0;
}