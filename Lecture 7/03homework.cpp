// WAF to reverse an Integer n.
#include <iostream>
using namespace std;

int reverseInteger(int n) {
    int reversed = 0;
    
    while (n != 0) {
        int digit = n % 10;
        // Update reversed number by appending the last digit
        reversed = reversed * 10 + digit;
        // Remove the last digit from n
        n /= 10;
    }
    
    return reversed;
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    int reversed = reverseInteger(number);
    
    cout << "Reversed integer: " << reversed << endl;
    
    return 0;
}
