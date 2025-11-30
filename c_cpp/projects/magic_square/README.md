# Magic Square Generator (C++)

An animated terminal application that generates and displays magic squares using the Siamese method.

## What is a Magic Square?

A magic square is an n×n grid where numbers 1 to n² are arranged so that each row, column, and diagonal sum to the same value.

## Features

- **Animated generation** - Watch the magic square build step-by-step
- **Siamese method** - Classic algorithm for odd-sized squares
- **Terminal graphics** - Uses custom terminal library for positioned drawing
- **Input validation** - Ensures positive odd numbers only
- **Delay animation** - 300ms between each number placement

## Algorithm

1. Start at the middle of the top row
2. Place numbers sequentially
3. Move up-right for next position
4. If occupied, move down instead
5. Wrap around edges using modulo

## Usage

```bash
./main
Enter a positive odd number: 5
```

Displays an animated 5×5 magic square being constructed in the terminal.
