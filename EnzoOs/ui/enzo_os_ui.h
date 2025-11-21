// enzo_os_ui.h
// Base UI API for ENZO OS
// Over 200 stub functions for you to implement in your OS

#ifndef ENZO_OS_UI_H
#define ENZO_OS_UI_H

#include <stdint.h>

// ---------------------------------------------------------------
//  PRINT SYSTEM
// ---------------------------------------------------------------
#define PRINT_ENZO_OS_UI_PRINT_TEXT(text) ui_print_text(text)
#define PRINT_ENZO_OS_UI_PRINT_AT(text, x, y) ui_print_at(text, x, y)
#define PRINT_ENZO_OS_UI_CLEAR() ui_print_clear()

void ui_print_text(const char *text);
void ui_print_at(const char *text, int x, int y);
void ui_print_clear(void);

// ---------------------------------------------------------------
//  WINDOW SYSTEM
// ---------------------------------------------------------------
typedef struct {
    int x;
    int y;
    int w;
    int h;
    const char *title;
} ui_window_t;

ui_window_t ui_window_create(int x, int y, int w, int h, const char *title);
void ui_window_draw(ui_window_t *win);
void ui_window_destroy(ui_window_t *win);

// ---------------------------------------------------------------
//  ELEMENTS: BUTTONS / LABELS / INPUTS
// ---------------------------------------------------------------

void ui_button_draw(int x, int y, int w, int h, const char *label);
int  ui_button_is_pressed(int x, int y, int w, int h);

void ui_label_draw(int x, int y, const char *text);

void ui_input_draw(int x, int y, int w, char *buffer, int max_len);
int  ui_input_handle(char *buffer, int max_len);

// ---------------------------------------------------------------
//  COLOR SYSTEM
// ---------------------------------------------------------------

typedef struct {
    uint8_t r, g, b;
} ui_color_t;

void ui_set_text_color(ui_color_t color);
void ui_set_background_color(ui_color_t color);

// ---------------------------------------------------------------
//  CANVAS / DRAW SYSTEM (RECTS, LINES, PIXELS)
// ---------------------------------------------------------------

void ui_draw_pixel(int x, int y, ui_color_t color);
void ui_draw_rect(int x, int y, int w, int h, ui_color_t color);
void ui_draw_rect_filled(int x, int y, int w, int h, ui_color_t color);
void ui_draw_line(int x1, int y1, int x2, int y2, ui_color_t color);

// ---------------------------------------------------------------
//  EVENTS
// ---------------------------------------------------------------

typedef enum {
    UI_EVENT_NONE,
    UI_EVENT_KEY_DOWN,
    UI_EVENT_KEY_UP,
    UI_EVENT_MOUSE_MOVE,
    UI_EVENT_MOUSE_CLICK,
    UI_EVENT_MOUSE_RELEASE
} ui_event_type_t;

typedef struct {
    ui_event_type_t type;
    int key;
    int mouse_x;
    int mouse_y;
} ui_event_t;

ui_event_t ui_poll_event(void);

// ---------------------------------------------------------------
//  EXTENSIONS: DIALOGS
// ---------------------------------------------------------------

void ui_dialog_alert(const char *msg);
int  ui_dialog_confirm(const char *msg);
char *ui_dialog_input(const char *msg, char *buffer, int max_len);

// ---------------------------------------------------------------
//  EXTENSIONS: MENUS
// ---------------------------------------------------------------

void ui_menu_draw(const char **items, int count, int selected);
int  ui_menu_handle(const char **items, int count);

// ---------------------------------------------------------------
//  EXTENSIONS: PROGRESS BAR
// ---------------------------------------------------------------

void ui_progress_draw(int x, int y, int w, int percent);

// ---------------------------------------------------------------
//  EXTENSIONS: CHECKBOX / RADIO
// ---------------------------------------------------------------

void ui_checkbox_draw(int x, int y, int checked, const char *label);
void ui_radio_draw(int x, int y, int selected, const char *label);

// ---------------------------------------------------------------
//  EXTENSIONS: WINDOWS CONTROL
// ---------------------------------------------------------------

void ui_window_set_title(ui_window_t *win, const char *title);
void ui_window_move(ui_window_t *win, int new_x, int new_y);
void ui_window_resize(ui_window_t *win, int new_w, int new_h);

// ---------------------------------------------------------------
//  200+ FUNCTIONS (STUBS)
// ---------------------------------------------------------------
// These are empty placeholders so you can expand ENZO OS UI engine
// ---------------------------------------------------------------

#define UI_STUB_FUNCTION(id) void ui_stub_##id(void);

// Generate 200 stub functions
UI_STUB_FUNCTION(001)
UI_STUB_FUNCTION(002)
UI_STUB_FUNCTION(003)
UI_STUB_FUNCTION(004)
UI_STUB_FUNCTION(005)
UI_STUB_FUNCTION(006)
UI_STUB_FUNCTION(007)
UI_STUB_FUNCTION(008)
UI_STUB_FUNCTION(009)
UI_STUB_FUNCTION(010)
UI_STUB_FUNCTION(011)
UI_STUB_FUNCTION(012)
UI_STUB_FUNCTION(013)
UI_STUB_FUNCTION(014)
UI_STUB_FUNCTION(015)
UI_STUB_FUNCTION(016)
UI_STUB_FUNCTION(017)
UI_STUB_FUNCTION(018)
UI_STUB_FUNCTION(019)
UI_STUB_FUNCTION(020)
UI_STUB_FUNCTION(021)
UI_STUB_FUNCTION(022)
UI_STUB_FUNCTION(023)
UI_STUB_FUNCTION(024)
UI_STUB_FUNCTION(025)
UI_STUB_FUNCTION(026)
UI_STUB_FUNCTION(027)
UI_STUB_FUNCTION(028)
UI_STUB_FUNCTION(029)
UI_STUB_FUNCTION(030)
UI_STUB_FUNCTION(031)
UI_STUB_FUNCTION(032)
UI_STUB_FUNCTION(033)
UI_STUB_FUNCTION(034)
UI_STUB_FUNCTION(035)
UI_STUB_FUNCTION(036)
UI_STUB_FUNCTION(037)
UI_STUB_FUNCTION(038)
UI_STUB_FUNCTION(039)
UI_STUB_FUNCTION(040)
UI_STUB_FUNCTION(041)
UI_STUB_FUNCTION(042)
UI_STUB_FUNCTION(043)
UI_STUB_FUNCTION(044)
UI_STUB_FUNCTION(045)
UI_STUB_FUNCTION(046)
UI_STUB_FUNCTION(047)
UI_STUB_FUNCTION(048)
UI_STUB_FUNCTION(049)
UI_STUB_FUNCTION(050)
UI_STUB_FUNCTION(051)
UI_STUB_FUNCTION(052)
UI_STUB_FUNCTION(053)
UI_STUB_FUNCTION(054)
UI_STUB_FUNCTION(055)
UI_STUB_FUNCTION(056)
UI_STUB_FUNCTION(057)
UI_STUB_FUNCTION(058)
UI_STUB_FUNCTION(059)
UI_STUB_FUNCTION(060)
UI_STUB_FUNCTION(061)
UI_STUB_FUNCTION(062)
UI_STUB_FUNCTION(063)
UI_STUB_FUNCTION(064)
UI_STUB_FUNCTION(065)
UI_STUB_FUNCTION(066)
UI_STUB_FUNCTION(067)
UI_STUB_FUNCTION(068)
UI_STUB_FUNCTION(069)
UI_STUB_FUNCTION(070)
UI_STUB_FUNCTION(071)
UI_STUB_FUNCTION(072)
UI_STUB_FUNCTION(073)
UI_STUB_FUNCTION(074)
UI_STUB_FUNCTION(075)
UI_STUB_FUNCTION(076)
UI_STUB_FUNCTION(077)
UI_STUB_FUNCTION(078)
UI_STUB_FUNCTION(079)
UI_STUB_FUNCTION(080)
UI_STUB_FUNCTION(081)
UI_STUB_FUNCTION(082)
UI_STUB_FUNCTION(083)
UI_STUB_FUNCTION(084)
UI_STUB_FUNCTION(085)
UI_STUB_FUNCTION(086)
UI_STUB_FUNCTION(087)
UI_STUB_FUNCTION(088)
UI_STUB_FUNCTION(089)
UI_STUB_FUNCTION(090)
UI_STUB_FUNCTION(091)
UI_STUB_FUNCTION(092)
UI_STUB_FUNCTION(093)
UI_STUB_FUNCTION(094)
UI_STUB_FUNCTION(095)
UI_STUB_FUNCTION(096)
UI_STUB_FUNCTION(097)
UI_STUB_FUNCTION(098)
UI_STUB_FUNCTION(099)
UI_STUB_FUNCTION(100)
UI_STUB_FUNCTION(101)
UI_STUB_FUNCTION(102)
UI_STUB_FUNCTION(103)
UI_STUB_FUNCTION(104)
UI_STUB_FUNCTION(105)
UI_STUB_FUNCTION(106)
UI_STUB_FUNCTION(107)
UI_STUB_FUNCTION(108)
UI_STUB_FUNCTION(109)
UI_STUB_FUNCTION(110)
UI_STUB_FUNCTION(111)
UI_STUB_FUNCTION(112)
UI_STUB_FUNCTION(113)
UI_STUB_FUNCTION(114)
UI_STUB_FUNCTION(115)
UI_STUB_FUNCTION(116)
UI_STUB_FUNCTION(117)
UI_STUB_FUNCTION(118)
UI_STUB_FUNCTION(119)
UI_STUB_FUNCTION(120)
UI_STUB_FUNCTION(121)
UI_STUB_FUNCTION(122)
UI_STUB_FUNCTION(123)
UI_STUB_FUNCTION(124)
UI_STUB_FUNCTION(125)
UI_STUB_FUNCTION(126)
UI_STUB_FUNCTION(127)
UI_STUB_FUNCTION(128)
UI_STUB_FUNCTION(129)
UI_STUB_FUNCTION(130)
UI_STUB_FUNCTION(131)
UI_STUB_FUNCTION(132)
UI_STUB_FUNCTION(133)
UI_STUB_FUNCTION(134)
UI_STUB_FUNCTION(135)
UI_STUB_FUNCTION(136)
UI_STUB_FUNCTION(137)
UI_STUB_FUNCTION(138)
UI_STUB_FUNCTION(139)
UI_STUB_FUNCTION(140)
UI_STUB_FUNCTION(141)
UI_STUB_FUNCTION(142)
UI_STUB_FUNCTION(143)
UI_STUB_FUNCTION(144)
UI_STUB_FUNCTION(145)
UI_STUB_FUNCTION(146)
UI_STUB_FUNCTION(147)
UI_STUB_FUNCTION(148)
UI_STUB_FUNCTION(149)
UI_STUB_FUNCTION(150)
UI_STUB_FUNCTION(151)
UI_STUB_FUNCTION(152)
UI_STUB_FUNCTION(153)
UI_STUB_FUNCTION(154)
UI_STUB_FUNCTION(155)
UI_STUB_FUNCTION(156)
UI_STUB_FUNCTION(157)
UI_STUB_FUNCTION(158)
UI_STUB_FUNCTION(159)
UI_STUB_FUNCTION(160)
UI_STUB_FUNCTION(161)
UI_STUB_FUNCTION(162)
UI_STUB_FUNCTION(163)
UI_STUB_FUNCTION(164)
UI_STUB_FUNCTION(165)
UI_STUB_FUNCTION(166)
UI_STUB_FUNCTION(167)
UI_STUB_FUNCTION(168)
UI_STUB_FUNCTION(169)
UI_STUB_FUNCTION(170)
UI_STUB_FUNCTION(171)
UI_STUB_FUNCTION(172)
UI_STUB_FUNCTION(173)
UI_STUB_FUNCTION(174)
UI_STUB_FUNCTION(175)
UI_STUB_FUNCTION(176)
UI_STUB_FUNCTION(177)
UI_STUB_FUNCTION(178)
UI_STUB_FUNCTION(179)
UI_STUB_FUNCTION(180)
UI_STUB_FUNCTION(181)
UI_STUB_FUNCTION(182)
UI_STUB_FUNCTION(183)
UI_STUB_FUNCTION(184)
UI_STUB_FUNCTION(185)
UI_STUB_FUNCTION(186)
UI_STUB_FUNCTION(187)
UI_STUB_FUNCTION(188)
UI_STUB_FUNCTION(189)
UI_STUB_FUNCTION(190)
UI_STUB_FUNCTION(191)
UI_STUB_FUNCTION(192)
UI_STUB_FUNCTION(193)
UI_STUB_FUNCTION(194)
UI_STUB_FUNCTION(195)
UI_STUB_FUNCTION(196)
UI_STUB_FUNCTION(197)
UI_STUB_FUNCTION(198)
UI_STUB_FUNCTION(199)
UI_STUB_FUNCTION(200)

#endif // ENZO_OS_UI_H


// ---------------------------------------------------------------
// enzo_os_ui.c
// ---------------------------------------------------------------
#include "enzo_os_ui.h"

void ui_print_text(const char *text) {}
void ui_print_at(const char *text, int x, int y) {}
void ui_print_clear(void) {}

ui_window_t ui_window_create(int x, int y, int w, int h, const char *title) {
    ui_window_t wobj = {x, y, w, h, title};
    return wobj;
}

void ui_window_draw(ui_window_t *win) {}
void ui_window_destroy(ui_window_t *win) {}

void ui_button_draw(int x, int y, int w, int h, const char *label) {}
int ui_button_is_pressed(int x, int y, int w, int h) { return 0; }

void ui_label_draw(int x, int y, const char *text) {}

void ui_input_draw(int x, int y, int w, char *buffer, int max_len) {}
int ui_input_handle(char *buffer, int max_len) { return 0; }

void ui_set_text_color(ui_color_t color) {}
void ui_set_background_color(ui_color_t color) {}

void ui_draw_pixel(int x, int y, ui_color_t color) {}
void ui_draw_rect(int x, int y, int w, int h, ui_color_t color) {}
void ui_draw_rect_filled(int x, int y, int w, int h, ui_color_t color) {}
void ui_draw_line(int x1, int y1, int x2, int y2, ui_color_t color) {}

ui_event_t ui_poll_event(void) {
    ui_event_t ev = { UI_EVENT_NONE, 0, 0, 0 };
    return ev;
}

void ui_dialog_alert(const char *msg) {}
int ui_dialog_confirm(const char *msg) { return 0; }
char *ui_dialog_input(const char *msg, char *buffer, int max_len) { return buffer; }

void ui_menu_draw(const char **items, int count, int selected) {}
int ui_menu_handle(const char **items, int count) { return 0; }

void ui_progress_draw(int x, int y, int w, int percent) {}

void ui_checkbox_draw(int x, int y, int checked, const char *label) {}
void ui_radio_draw(int x, int y, int selected, const char *label) {}

void ui_window_set_title(ui_window_t *win, const char *title) { win->title = title; }
void ui_window_move(ui_window_t *win, int new_x, int new_y) { win->x = new_x; win->y = new_y; }
void ui_window_resize(ui_window_t *win, int new_w, int new_h) { win->w = new_w;}
