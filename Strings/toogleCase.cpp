#include <iostream>
using namespace std;

string toggleCase(string st) {
    for (int i = 0; i < st.length(); i++) {
        if (st[i] >= 'A' && st[i] <= 'Z') {
            st[i] = st[i] + 32;   // uppercase → lowercase
        }
        else if (st[i] >= 'a' && st[i] <= 'z') {
            st[i] = st[i] - 32;   // lowercase → uppercase
        }
        // other characters (digits, symbols, spaces) remain unchanged
    }
    return st;
}

int main() {
    string st;
    getline(cin, st);   // input string with spaces allowed
    cout << toggleCase(st);
    return 0;
}
