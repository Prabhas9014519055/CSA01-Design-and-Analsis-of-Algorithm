#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }

    cout << "\nTime Complexity: O(n)";
    cout << "\nOmega: Ω(n)";
    cout << "\nTheta: Θ(n)";

    return 0;
}
