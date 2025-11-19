#include "app.h"
#include "terminal.h"
#include "menu.h"
#include "screen.h"
#include "input.h"
#include "formData.h"
#include "create.h"

static int app_state = APP_STATE_RUNNING;

static void handle_new_screen(void) {
    creator_add_user();
}

static void handle_display_screen(void) {
    creator_display_users();
}

static void handle_exit(void) {
    app_state = APP_STATE_EXIT;
}

static void process_menu_choice(int choice) {
    if (choice == MENU_ITEM_NEW) {
        handle_new_screen();
    } else if (choice == MENU_ITEM_DISPLAY) {
        handle_display_screen();
    } else if (choice == MENU_ITEM_EXIT) {
        handle_exit();
    }
}

static int is_app_running(void) {
    return (app_state == APP_STATE_RUNNING);
}

void app_init(void) {
    terminal_clear();
    creator_init();
    app_state = APP_STATE_RUNNING;
}

void app_run(void) {
    int user_choice;
    
    while (is_app_running()) {
        user_choice = menu_run();
        process_menu_choice(user_choice);
    }
}

void app_shutdown(void) {
    terminal_clear();
    terminal_show_cursor();
    terminal_reset_color();
    terminal_move_to(0, 0);
}
