# Terminal Graphics Library (C)

A simple terminal manipulation library for drawing text at specific positions with color support.

## Features

- **Cursor control** - Show, hide, and move cursor
- **Positioned drawing** - Draw text at specific (x, y) coordinates
- **Color support** - Set text colors (green, red, blue, etc.)
- **Screen management** - Clear screen and control display
- **Cross-platform** - ANSI escape sequences for terminal control

## Core Functions

- `terminal_clear()` - Clear the screen
- `terminal_draw_at(x, y, text)` - Draw text at position
- `terminal_move_to(x, y)` - Move cursor to position
- `terminal_set_color(color)` - Set text color
- `terminal_reset_color()` - Reset to default color
- `terminal_hide_cursor()` / `terminal_show_cursor()` - Cursor visibility
- `terminal_sleep(seconds)` - Delay execution

## Usage

```c
terminal_clear();
terminal_hide_cursor();
terminal_set_color(COLOR_GREEN);
terminal_draw_at(10, 5, "Hello World!");
terminal_reset_color();
terminal_show_cursor();
```

Used as a foundation for console applications and text-based UIs.
