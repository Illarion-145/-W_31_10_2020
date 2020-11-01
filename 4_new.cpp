#include <iostream>
#include <string>
using namespace std;

int length;

string* split(string str, string del) {
    length = str.size() / 2;
    string* str_array = new string[length];
    int i = 0, k = 0;
    while (str[i] != '\0') {
        string word = "";
        while (str[i] != del[0] && str[i] != '\0') {
            str_array[k] += str[i];
            i++;
        }
        k++;
        if (str[i] != '\0')
            i++;
    }
    length = k;
    return str_array;
}

string join(string* str, string del) {
    string new_str;
    for (int i = 0; i < length; i++) {
        if (i != length - 1)
            new_str += str[i] + del;
        else
            new_str += str[i];
    }
    return new_str;
}


string swap(string str, int p1, int p2) {
    string new_string, temp;
    p1 -= 1, p2 -= 1;

    string* str_array = split(str, " ");

    temp = str_array[p1];
    str_array[p1] = str_array[p2];
    str_array[p2] = temp;

    new_string = join(str_array, " ");

    return new_string;
}

int main() {

    string str;
    int pos_1, pos_2;

    getline(cin, str);
    cin >> pos_1 >> pos_2;
    
    cout << swap(str, pos_1, pos_2);

    return 0;
}