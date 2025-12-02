#include "list.h"
#include <iostream>
using namespace std;

int main() {
    List l;
    
    int numElements;
    cout << "How many elements do you want to add? ";
    cin >> numElements;
    cin.ignore();
    
    for(int i = 0; i < numElements; i++) {
        char input[100];
        cout << "Enter value " << (i+1) << ": ";
        cin >> input;
        l.appendAuto(input);
    }
    
    cout << "\nYour list: ";
    l.print();
    cout << "Size: " << l.getSize() << endl;
    
    cout << "\nDetected types:" << endl;
    for(int i = 0; i < l.getSize(); i++) {
        cout << "Element " << i+1 << ": ";
        try {
            bool val = l[i];
            cout << (val ? "true" : "false") << " (bool)" << endl;
        } catch(...) {
            try {
                int val = l[i];
                cout << val << " (int)" << endl;
            } catch(...) {
                try {
                    float val = l[i];
                    cout << val << " (float)" << endl;
                } catch(...) {
                    char* val = l[i];
                    cout << val << " (string)" << endl;
                }
            }
        }
    }
    
    return 0;
}
