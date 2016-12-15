#include <iostream>
#include <list>

using namespace std;

int main() {
    
    list<char> l;
    list<char> m;
    char a;
    
    bool home = false;
    
    while (scanf("%c", &a) == 1) {
        
        if (a == '\n') {
            if (home) {
                l.splice(l.begin(), m);
            }
            for (list<char>::iterator i = l.begin(); i != l.end(); i++) {
                printf("%c", *i);
            }
            printf("\n");
            l.clear();
            m.clear();
            home = false;

        } else if (a == '[') {
            if (home) {
                l.splice(l.begin(), m);
            }
            home = true;

        } else if (a == ']') {
            home = false;
            l.splice(l.begin(), m);
            m.clear();

        } else if (home) {
            m.push_back(a);

        } else {
            l.push_back(a);

        }
    }


    return 0;
}

