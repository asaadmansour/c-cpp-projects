# Custom String Class (C++)

A dynamic string class implementation with automatic memory management and operator overloading.

## Features

- **Dynamic capacity** - Starts at 16 bytes, grows as needed
- **Deep copying** - Copy constructor and assignment operator
- **Operator overloading** - Natural string operations with `+`, `==`, `!=`, `<<`, `[]`
- **Memory safe** - Automatic cleanup via destructor

## Core Operations

- `String(const char*)` - Construct from C-string
- `append(String)` - Concatenate strings
- `operator[]` - Character access by index
- `operator==` / `operator!=` - String comparison
- `operator<<` - Stream output
- `getLength()` / `getCapacity()` - Size information
- `isEmpty()` / `clear()` - State management

## Implementation Details

- Manual string length calculation (no `strlen`)
- Capacity management with reallocation
- Null-terminated internal storage

## Usage

```cpp
String s1("Hello");
String s2(" World");
s1.append(s2);
cout << s1;  // Output: Hello World
```
