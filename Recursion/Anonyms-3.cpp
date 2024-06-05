#include <iostream>
using namespace std;

int F(int n) {
    if (n == 1)
        return 0;
    if (n % 3 == 0)
        return 1 + F(n / 3);
    return 1 + F(n - 1);
}

int main() {
    int n = 9; // Example value
    cout << "The minimum steps required to reduce " << n << " to 1 is: " << F(n) << endl;
    return 0;
}
