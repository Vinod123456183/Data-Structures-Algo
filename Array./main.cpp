#include <iostream>
#include <bitset>
using namespace std;

bool isPowerOfTwo(unsigned n)
{
	cout << n << " in binary is " << bitset<8>(n) << "\n";
	cout << n - 1 << " in binary is " << bitset<8>(n-1) << "\n\n";

	return !(n & (n - 1));
}

int main()
{
	unsigned n = 16;

	if (isPowerOfTwo(n)) {
		cout << n << " is power of two";
	} else {
		cout << n << " is not a power of two";
	}

	return 0;
}