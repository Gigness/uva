#include <iostream>
#include <string.h>
using namespace std;

int main() {
    
    int n;
    int cars[10000] = {0};
    int moves[10000] = {0};
    int end[10000] = {0};
    
    bool valid_race;

    int car;
    int end_pos;

    while (scanf("%i", &n)) {
        if (n == 0) {
            break;
        }
        
        valid_race = true;

        for (int i=0; i<n; i++) {
            scanf("%i %i", &cars[i], &moves[i]);
        }

        for (int i=0; i<n; i++) {
            car = cars[i];
            end_pos = i + moves[i];
            if (end[end_pos] != 0 || end_pos > n-1 || end_pos < 0) {
                // positions is already filled
                valid_race = false;
                break;
            }
            end[end_pos] = car;
        }
       
        if (valid_race) {
          
            for (int i=0; i<n; i++) {
                if (i != n-1) {
                    printf("%i ", end[i]);
                } else {
                    printf("%i", end[i]);
                }
            }
            printf("\n");

        } else {
            printf("-1\n");
        }

        // reset f back to {0}
        memset(end, 0, 10000);
    }

    return 0;
}
