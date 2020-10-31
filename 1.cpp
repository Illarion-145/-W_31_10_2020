#include <iostream>
#include <string>
using namespace std;

bool isPalindrom(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[s.size() - 1 - i])
            continue;
        return false;
    }
    return true;
}

int main() {

    string str;
    getline(cin, str);

    cout << (isPalindrom(str) ? "True" : "False");

    return 0;
}