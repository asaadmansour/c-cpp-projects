# String Utility Library (C)

Custom implementations of common string functions without using standard library functions.

## Functions

- `strLength(char[])` - Calculate string length
- `strCmpLength(char[], char[])` - Compare string lengths (returns enum result)
- `toLower(char[])` - Convert string to lowercase
- `toUpper(char[])` - Convert string to uppercase
- `strConcat(char[], char[], size)` - Concatenate two strings
- `strCpy(char[], char[], size)` - Copy string

## Return Types

- `StrCmpResult` enum - `STRCMP_EQUAL_LENGTH`, `STRCMP_FIRST_LONGER`, `STRCMP_SECOND_LONGER`
- `SUCCESS` / `FAILURE` - For concat and copy operations

## Implementation

All functions implemented from scratch without using `<string.h>` library functions.

## Usage

```c
char str1[50] = "Hello";
char str2[50] = " World";
strConcat(str1, str2, 50);  // str1 now contains "Hello World"
toUpper(str1);               // str1 now contains "HELLO WORLD"
```
