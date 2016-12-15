#include <iostream>
#include <list>

using namespace std;

int main() {
    
    list<char> l;

    l.push_back('a');
    l.push_back('b');
    l.push_back('c');
    for (list<char>::iterator i = l.begin(); i != l.end(); i++) {
        printf("%c ", *i);
    }
    printf("\n");

    list<char> a;
    a.push_back('f');
    a.push_back('g');
    a.push_back('h');

    for (list<char>::iterator i = a.begin(); i != a.end(); i++) {
        printf("%c ", *i);
    }
    printf("\n");
    
    l.splice(l.begin(), a);
    
    
    for (list<char>::iterator i = l.begin(); i != l.end(); i++) {
        printf("%c ", *i);
    }
    printf("\n");
    return 0;
}

