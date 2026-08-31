#include <iostream>
using namespace std;

int main() {
    cout << "Recurrence: T(n) = 2T(n/2) + n" << endl;
    cout << "a = 2, b = 2, f(n) = n" << endl;
    cout << "n^(log_b a) = n" << endl;
    cout << "By Master Theorem:" << endl;
    cout << "T(n) = Theta(n log n)" << endl;

    return 0;
}
