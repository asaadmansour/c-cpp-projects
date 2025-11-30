# Dynamic Type-Generic List (C++)

A Python-like list implementation in C++ that supports heterogeneous types (int, float, string) with automatic type detection.

## Features

- **Dynamic resizing** - Automatically grows capacity when needed (exponential growth strategy)
- **Type-generic storage** - Store int, float, and string in the same list using `void*` pointers
- **Auto-detection** - `appendAuto()` automatically detects input type from string
- **Type-safe access** - `ElementWrapper` class enables clean syntax: `int x = list[0];`
- **Memory management** - Proper allocation/deallocation with no memory leaks

## Core Operations

- `append(value)` - Add int, float, or string (overloaded)
- `appendAuto(input)` - Parse string and auto-detect type
- `set(index, value)` - Modify element at index
- `operator[]` - Access elements with automatic type conversion
- `print()` - Display all elements
- `getSize()` - Get number of elements

## Implementation Highlights

- Manual string parsing (no built-in functions)
- Shallow copying during resize for efficiency
- Conversion operators for seamless type extraction
- Bounds checking with exception handling

## Usage

```cpp
List l;
l.appendAuto("42");      // Detected as int
l.appendAuto("3.14");    // Detected as float
l.appendAuto("hello");   // Detected as string

int x = l[0];            // Automatic conversion to int
float f = l[1];          // Automatic conversion to float
```
