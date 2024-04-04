#include <iostream>
using namespace std;

bool isPalindrome(string s, int low, int high) {
    if (low > high) return true;
    // if (s[low] != s[high]) return false;
    return isPalindrome(s, low + 1, high - 1);
}

int main() {
    string s = "abba";
    cout  << isPalindrome(s, 0, s.size() - 1) << endl;
    return 0;
}
