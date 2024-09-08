#include <iostream>
using namespace std;

int main(){
    int n =4;
    // Top part of the butterfly
    for (int i = 1; i <= n; ++i) {
        // Left part of the current row
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Spaces in between
        for (int j = 1; j <= 2*(n-i); ++j) {
            cout << " ";
        }
        // Right part of the current row
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom part of the butterfly
    for (int i = n; i >= 1; --i) {
        // Left part of the current row
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Spaces in between
        for (int j = 1; j <= 2*(n-i); ++j) {
            cout << " ";
        }
        // Right part of the current row
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


