// screen.h
#ifndef SCREEN_H
#define SCREEN_H
#include "editor.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SCREEN_TITLE_X      35
#define SCREEN_TITLE_Y      10
#define SCREEN_INFO_Y       20

#define SCREEN_MENU         0
#define SCREEN_NEW          1
#define SCREEN_DISPLAY      2
#define SCREEN_EXIT         3

#define DIALOG_SIZE         3
#define EDITOR_SAVE         1001
#define EDITOR_DISCARD      1002
#define EDITOR_CANCEL       1003
int screen_show_simple(const char* title);
int screen_show_editor(TextBuffer *buffer);
#ifdef __cplusplus
}
#endif

#endif