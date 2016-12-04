#include <iostream>
#include <map>
#include <cmath>
#include <fstream>

using namespace std;

int main() {

    map <char, char> m;
    m['A'] = 'A';
    m['E'] = '3';
    m['H'] = 'H';
    m['I'] = 'I';
    m['J'] = 'L';
    m['L'] = 'J';
    m['M'] = 'M';
    m['O'] = 'O';
    m['S'] = '2';
    m['T'] = 'T';
    m['U'] = 'U';
    m['V'] = 'V';
    m['W'] = 'W';
    m['X'] = 'X';
    m['Y'] = 'Y';
    m['Z'] = '5';
    m['1'] = '1';
    m['2'] = 'S';
    m['3'] = 'E';
    m['5'] = 'Z';
    m['8'] = '8';

    for (string line; getline(cin, line);) {
        unsigned long len = line.length();
        unsigned long last_index = len - 1;
        int mid = static_cast<int>(floor(last_index / 2.0));

        bool palindrome = true;
        bool mirror = true;

        for (int i = 0; i < len; i++) {
            if (i <= mid) {
                if (line[i] != line[len-1-i]) {
                    palindrome = false;
                }
            }
            if (m.find(line[i]) != m.end()) {
                if (m.find(line[i])->second != line[len-1-i]) {
                    mirror = false;
                }
            } else {
                mirror = false;
            }
        }
        if (palindrome && mirror) {
            cout << line << " --" << " is a mirrored palindrome." << endl << endl;
        } else if (palindrome && !mirror) {
            cout << line << " --" << " is a regular palindrome." << endl << endl;
        } else if (!palindrome && mirror) {
            cout << line << " --" << " is a mirrored string." << endl << endl;
        } else if (!palindrome && !mirror) {
            cout << line << " --" << " is not a palindrome." << endl << endl;
        }
    } 
    return 0;
}
