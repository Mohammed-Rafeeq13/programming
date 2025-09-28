#include <iostream>
using namespace std;

int countPalindromicSubstrings(string s) {
    int n = s.length();
    int count = 0;

    // Odd length palindromes (single center)
    for (int center = 0; center < n; center++) {
        int left = center, right = center;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }

    // Even length palindromes (double center)
    for (int center = 0; center < n - 1; center++) {
        int left = center, right = center + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    string st;
    getline(cin, st);
    cout << countPalindromicSubstrings(st);
    return 0;
}
