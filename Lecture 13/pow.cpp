#include <iostream>
using namespace std;

// Function to calculate power
double myPow(double x, int n) {
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;
    if (x == -1 && n % 2 == 0) return 1.0;
    if (x == -1 && n % 2 != 0) return -1.0;
    
    long binForm = n; // Use long to handle negative values of n
    if (binForm < 0) {
        x = 1 / x;
        binForm = -binForm;
    }
    
    double ans = 1;
    while (binForm > 0) {
        if (binForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main() {
    double x;
    int n;

    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (n): ";
    cin >> n;

    double result = myPow(x, n);
    cout << "Result: " << result << endl;

    return 0;
}
