#include<iostream>
using namespace std;
int main(){
    int n =4;
    
    for(int i=0;i<n;i++){
        
       for(char ch = 'A' + i; ch >= 'A'; ch--){
            
            cout << ch << " ";
            
       }
        cout << endl;
    }
        return 0;
}