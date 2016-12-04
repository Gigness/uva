#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    for (string line; getline(cin, line);) {
        
        unsigned long len = line.length();
        unsigned long last_index = len - 1;
        int mid = static_cast<int>(floor(last_index / 2.0));
        int offset = 0;
        int i = 0;

        while (i <= mid) {
            if (line[last_index - offset] == '!') {
                offset++;
            } else {
                i++;
            }

            mid = static_cast<int>(floor(( last_index - offset ) / 2.0 ));
        }
        cout << "mid: " << mid << endl;
    }
    return 0;
}
