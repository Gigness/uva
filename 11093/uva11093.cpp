#include <iostream>

using namespace std;
int main() {
    int t; // num test cases
    int n; // num integers per case
    
    scanf("%i", &t);

    int p [100000] = {0};
    int q [100000] = {0};

    for (int i = 1; i <= t; i++) {
        
        int psum = 0;
        int qsum = 0;

        // populate p and q
        scanf("%i", &n);
        for (int j = 0; j < n; j++) {
            scanf("%i", &p[j]);
            psum += p[j];
        }

        for (int k = 0; k < n; k++) {
            scanf("%i", &q[k]);
            qsum += q[k];
        }

        if (psum < qsum) {
            printf("Case %i: Not possible\n", i);
        } else {
            // initial conditions: start at 0, tank is empty, visited = 0;
            int visited = 0;
            int s0 = 0;
            int s = 0;
            int tank = 0;
                
            while (visited < n) {
                tank = tank + p[s] - q[s];
                if (tank < 0) {
                    visited = 0;
                    s0 = s + 1;
                    s = s0;
                    tank = 0;
                } else {
                    s++;
                    visited++;
                    if (s == n) {
                        s = 0;
                    }
                }     
            }
            // use 1-base indexing
            s0++;
            printf("Case %i: Possible from station %i\n", i, s0);
        }
    }

    return 0;
}
