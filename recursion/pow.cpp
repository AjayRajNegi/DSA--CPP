#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    long long exp = n; // Use long long to safely handle INT_MIN
    if (exp < 0)
    {
        x = 1 / x;
        exp = -exp;
    }

    double result = 1.0;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        { // If exponent is odd
            result *= x;
        }
        x *= x;   // Square the base
        exp /= 2; // Divide exponent by 2
    }

    return result;
}

int main()
{
    double x;
    int n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    cout << "Result: " << myPow(x, n) << endl;
    return 0;
}

// Recursion
// class Solution {
// public:
//     double myPow(double x, long long n) {
//         if (n == 0)
//             return 1.0;
//         if (n < 0)
//             return 1.0 / myPow(x, -(long long)n);

//         double half = myPow(x, n / 2);

//         if (n % 2 == 0)
//             return half * half;
//         else
//             return half * half * x;
//     }
// };