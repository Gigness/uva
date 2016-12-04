#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int soldiers;
    int reports;
    int left[100001] = {-1};
    int right[100001] = {-1};

    while (cin >> soldiers >> reports) {
        if (soldiers == 0 && reports == 0) {
            break;
        }
        // populate arrays
        for (int i = 1; i <= soldiers; i++) {
            left[i] = i - 1;
            right[i] = i + 1;
        }
        left[1] = -1;
        right[soldiers] = -1;
       
        // process reports
        int l;
        int r;
        for (int i = 0; i < reports; i++) {
            cin >> l >> r;
            
            int left_survivor = left[l];
            int right_survivor = right[r];

            // print new neighbours formed
            if (left_survivor == -1) {
                cout << "*" << " ";
            } else {
                // update right array
                right[left_survivor] = right_survivor;

                // print result
                cout << left_survivor << " ";
            }

            if (right_survivor == -1) {
                cout << "*" << endl;
            } else {
                // update left array
                left[right_survivor] = left_survivor;

                // print result
                cout << right_survivor << endl;
            }
        }
        cout << "-" << endl;
    }

    return 0;
}
