// WAF to print nth Fibonacci.
#include <iostream>
using namespace std;

// Function to compute the nth Fibonacci number
int fibonacci(int n)
{
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; ++i) {
        c = a + b; // Compute the next Fibonacci number
        a = b;     // Move to the next pair
        b = c;
    }

    return b;
}

int main()
{
    int n;
    cout << "Enter the position (n) of the Fibonacci number to print: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }

    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;

    return 0;
}
