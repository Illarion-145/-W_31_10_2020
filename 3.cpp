#include <iostream>
#include <string>
using namespace std;

string lengthMaxString(string s) {
    int i = 0, max = 0, maxA = 0, max_i = 0;
    string s2;
    while (s[i] != '\0') {

        while (s[i] == ' ')
            i++;

        int word = 0, wordA = 0;
        while (s[i] != ' ' && s[i] != '\0') {
            word++;
            i++;
            if (s[i] == 'a' || s[i] == 'A')
                wordA++;
        }
        if (wordA > 0 && wordA > maxA) {
            max = word;
            maxA = wordA;
            max_i = i - word;
        }
    }
    for (int i = 0; i < max; i++)
        s2 += s[max_i + i];
    return s2;
}

int main() {

    string str;
    getline(cin, str);

    cout << lengthMaxString(str);

    return 0;
}