# C/C++ Projects Collection

A collection of system programming projects demonstrating data structures, OOP, terminal applications, and low-level programming concepts.

## Projects Overview

### Data Structures & Classes

#### [cppList](./cppList)
Dynamic type-generic list supporting int, float, and string with automatic type detection. Features include dynamic resizing, ElementWrapper for type-safe access, and manual string parsing.

#### [stringClass](./stringClass)
Custom string class with dynamic memory management, operator overloading (`+`, `==`, `[]`, `<<`), and automatic capacity growth.

#### [complexClass](./complexClass)
Complex number arithmetic class with operator overloading for mathematical operations (`+`, `-`, `==`, `!=`).

#### [builtin](./builtin)
Custom string utility functions implemented without standard library (`strlen`, `strcpy`, `strcat`, `toupper`, `tolower`).

---

### Terminal Applications

#### [console_app_1](./console_app_1)
Terminal graphics library providing cursor control, positioned text drawing, and color support using ANSI escape sequences.

#### [console_app_2](./console_app_2)
Interactive menu system with keyboard navigation, screen management, and modular architecture.

#### [console_app_3](./console_app_3)
Extended console application with form data handling and advanced state management.

#### [text_editor](./text_editor)
Terminal-based text editor with cursor navigation, line management, and file operations using dynamic `char**` allocation.

#### [magic_square](./magic_square)
Animated magic square generator using the Siamese method with terminal graphics.

---

## Technologies

- **Languages**: C, C++
- **Concepts**: OOP, dynamic memory, operator overloading, ANSI terminal control, data structures
- **Build**: GCC/G++ compiler

## Common Patterns

- Manual memory management (no garbage collection)
- Custom implementations (avoiding standard library where applicable)
- Modular design with header/implementation separation
- Terminal-based user interfaces

## Building Projects

Each project can be compiled independently:

```bash
cd <project_folder>
g++ *.cpp -o main    # For C++ projects
gcc *.c -o main      # For C projects
./main
```
