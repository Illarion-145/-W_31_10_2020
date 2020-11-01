#include <iostream>
#include <string>
using namespace std;

string swap(string s, int m, int m1) {
    int i = 0, k = 0, 
        length = s.size() / 2;
    string* array = new string[length]; 
    string new_string;

    while (s[i] != '\0') {
        
        while (s[i] == ' ')
            i++;

        int word = 0;
        while (s[i] != ' ' && s[i] != '\0') {
            array[k] += s[i];
            i++;
        }
        k++;
    }

    length = k;
    
    for (int i = 0; i < length; i++) {
        if (i == m - 1) {
            new_string += array[m1 - 1] + ' ';
            continue;
        }
        else if (i == m1 - 1) {
            new_string += array[m - 1] + ' ';
            continue;
        }
        else if (i == length - 1)
            new_string += array[i];
        else
            new_string += array[i] + ' ';
    }

    return new_string;
}


int main() {

    string str;
    int m, m1;
    getline(cin, str);
    cin >> m >> m1;

    cout << lengthMaxString(str, m, m1);

    return 0;
}