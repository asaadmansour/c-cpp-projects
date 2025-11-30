# Terminal Text Editor (C)

A basic terminal-based text editor with cursor navigation and file operations.

## Features

- **Text editing** - Insert and delete characters
- **Cursor navigation** - Arrow keys for movement (up, down, left, right)
- **Line management** - Create new lines, manage dynamic text
- **File operations** - Save text to file
- **Terminal UI** - Full-screen editing interface
- **Dynamic allocation** - Pointer-to-pointer (`char**`) for text storage

## Components

- `editor` - Core editing logic and text manipulation
- `menu` - Menu system for file operations
- `screen` - Display management
- `input` - Keyboard input handling
- `terminal` - Terminal control and rendering
- `app` - Application state and coordination

## Key Operations

- Arrow keys - Navigate cursor
- Character keys - Insert text
- Backspace - Delete characters
- Enter - New line
- Save - Write to `output.txt`

## Implementation

Uses dynamic memory allocation with `char**` for flexible line-based text storage, adapting to terminal width.