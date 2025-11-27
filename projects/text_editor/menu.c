#include "menu.h"
#include "terminal.h"
#include "input.h"
#include <stdio.h>



void menu_draw_item(int x, int y, const char* text, int is_selected) {
    if (is_selected) {
        terminal_set_combined_color(COLOR_BLUE_BG_BLACK_FG);
    } else {
        terminal_set_combined_color(COLOR_WHITE_BG_BLACK_FG);
    }
    
    terminal_draw_at(x, y,     "+----------+");
    terminal_draw_at(x, y + 1, text);
    terminal_draw_at(x, y + 2, "+----------+");
    terminal_reset_color();
}

void menu_draw_all(const char** items, int count, int selected_index) {
    int i;
    int current_y = MENU_START_Y;
    

    for (i = 0; i < count; i++) {
        int is_selected = (i == selected_index) ? 1 : 0;
        menu_draw_item(MENU_START_X, current_y, items[i], is_selected);
        current_y += MENU_SPACING;
    }
}

int menu_run(const char** items, int count) {
    int selected = 0; 
    int key;
    int running = 1;
    terminal_clear();
    terminal_hide_cursor();
    menu_draw_all(items, count, selected);

    while (running) {
        key = input_get_key();
        
        if (key == KEY_UP) {
            selected--;
            if (selected < 0) {
                selected = count - 1;
            }
            menu_draw_all(items, count, selected);
            
        } else if (key == KEY_DOWN) {
            selected++;
            if (selected >= count) {
                selected = 0;
            }
            menu_draw_all(items, count, selected);
            
        } else if (key == KEY_ENTER) {
            running = 0;
            
        } else if (key == KEY_ESC) {
            return -1; 
        }
    }
    
    return selected;
}