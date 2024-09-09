// WAF to print all prime numbers from 1 to N.
#include <iostream>
using namespace std;

// Function to check if a number is prime
void checkPrime(int n)
{
    if (n <= 1) return; // Numbers less than 2 are not prime
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << n << " "; // Print the prime number
    }
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers from 2 to " << N << " are: ";
    for (int i = 2; i <= N; i++) {
        checkPrime(i); // Check each number in the range
    }
    cout << endl; // Print a newline after listing all prime numbers

    return 0;
}
