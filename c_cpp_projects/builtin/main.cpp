#include "builtin.h"
#include <iostream>
using namespace std;
int main() {
    char str[10] = "asaaddd";
    char str2[10] = "omarrr";
    int c = strLength(str);
    cout << c<< endl;
    int y = strCmpLength(str,str2);
    if(y == 1) {
        cout << "First string is bigger";
    } else if(y == 2) {
        cout << "Second string is bigger";
    } else {
        cout << "Both are equal";
    }
}