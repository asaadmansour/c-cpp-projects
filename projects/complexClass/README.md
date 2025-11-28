# Complex Number Class (C++)

A class for complex number arithmetic with operator overloading.

## Features

- **Real and imaginary components** - Store and manipulate complex numbers
- **Arithmetic operators** - `+`, `-` for complex math
- **Comparison operators** - `==`, `!=` for equality checking
- **Stream output** - `<<` for easy printing
- **Multiple constructors** - Default, single value, two values, copy constructor

## Core Operations

- `Complex(real, imaginary)` - Create complex number
- `operator+` / `operator-` - Addition and subtraction
- `operator==` / `operator!=` - Comparison
- `getReal()` / `getImaginary()` - Access components
- `setReal()` / `setImaginary()` - Modify components

## Usage

```cpp
Complex c1(3, 4);    // 3 + 4i
Complex c2(1, 2);    // 1 + 2i
Complex c3 = c1 + c2; // 4 + 6i
cout << c3;          // Output: 4 + 6i
```
