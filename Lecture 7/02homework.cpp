// Figure out how to find if a number is power of 2 without any loop.
#include <iostream>
using namespace std;

bool isPowerOfTwo(unsigned int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    unsigned int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (isPowerOfTwo(number)) {
        cout << number << " is a power of 2.\n";
    } else {
        cout << number << " is not a power of 2.\n";
    }

    return 0;
}
