#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    cout << "=== Stack Class Tests ===" << endl;
    
    // Test 1: Constructor and isEmpty
    cout << "\nTest 1: Constructor and isEmpty" << endl;
    Stack s1(5);
    cout << "Created stack of size 5" << endl;
    cout << "Is empty: " << (s1.isEmpty() ? "YES" : "NO") << endl;
    
    // Test 2: Push and isEmpty
    cout << "\nTest 2: Push and isEmpty" << endl;
    s1.push(10);
    cout << "Pushed 10" << endl;
    cout << "Is empty: " << (s1.isEmpty() ? "YES" : "NO") << endl;
    cout << "Size: " << s1.getSize() << endl;
    
    // Test 3: Multiple pushes
    cout << "\nTest 3: Multiple pushes" << endl;
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout << "Pushed: 20, 30, 40, 50" << endl;
    cout << "Size: " << s1.getSize() << endl;
    cout << "Is full: " << (s1.isFull() ? "YES" : "NO") << endl;
    
    // Test 4: Peek
    cout << "\nTest 4: Peek" << endl;
    cout << "Top element (peek): " << s1.peek() << endl;
    
    // Test 5: Push to full stack
    cout << "\nTest 5: Push to full stack (should not add)" << endl;
    s1.push(60);
    cout << "Tried to push 60 to full stack" << endl;
    cout << "Top element (peek): " << s1.peek() << endl;
    cout << "Size: " << s1.getSize() << endl;
    
    // Test 6: Pop without parameter
    cout << "\nTest 6: Pop without parameter" << endl;
    s1.pop();
    cout << "Popped once" << endl;
    cout << "Top element (peek): " << s1.peek() << endl;
    cout << "Size: " << s1.getSize() << endl;
    
    // Test 7: Pop with parameter
    cout << "\nTest 7: Pop with parameter" << endl;
    int x;
    s1.pop(x);
    cout << "Popped value: " << x << endl;
    cout << "Size: " << s1.getSize() << endl;
    
    // Test 8: Multiple pops
    cout << "\nTest 8: Multiple pops" << endl;
    int val;
    while (!s1.isEmpty()) {
        s1.pop(val);
        cout << "Popped: " << val << ", Size: " << s1.getSize() << endl;
    }
    
    // Test 9: Pop from empty stack
    cout << "\nTest 9: Pop from empty stack (should do nothing)" << endl;
    cout << "Is empty: " << (s1.isEmpty() ? "YES" : "NO") << endl;
    s1.pop();
    cout << "Tried to pop from empty stack" << endl;
    cout << "Is empty: " << (s1.isEmpty() ? "YES" : "NO") << endl;
    
    // Test 10: Default constructor
    cout << "\nTest 10: Default constructor (size 10)" << endl;
    Stack s2;
    cout << "Created stack with default size" << endl;
    cout << "Is empty: " << (s2.isEmpty() ? "YES" : "NO") << endl;
    
    // Test 11: Fill and empty the default stack
    cout << "\nTest 11: Fill and empty default stack" << endl;
    for (int i = 1; i <= 10; i++) {
        s2.push(i * 100);
    }
    cout << "Pushed 10 elements (100, 200, ..., 1000)" << endl;
    cout << "Is full: " << (s2.isFull() ? "YES" : "NO") << endl;
    cout << "Top element: " << s2.peek() << endl;
    cout << "Size: " << s2.getSize() << endl;
    
    // Test 12: Display function
    cout << "\nTest 12: Display all elements" << endl;
    cout << "Stack contents (top to bottom): ";
    s2.display();
    
    // Test 13: Display after popping
    cout << "\nTest 13: Display after popping" << endl;
    s2.pop();
    s2.pop();
    cout << "After 2 pops, Size: " << s2.getSize() << endl;
    cout << "Stack contents: ";
    s2.display();
    
    // Test 14: Display empty stack
    cout << "\nTest 14: Display empty stack" << endl;
    Stack s3(5);
    cout << "Empty stack contents: ";
    s3.display();
    
    cout << "\n=== All tests completed ===" << endl;
    
    return 0;
}
