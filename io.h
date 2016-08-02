#ifndef IO_H
#define IO_H

#include <curses.h>
#include <wchar.h>

/*
 * Colors
 */

#define COLOR_BLACK     0                        /* Black */
#define COLOR_RED       1                        /* Red */
#define COLOR_GREEN     2                        /* Green */
#define COLOR_YELLOW    3                        /* Yellow */
#define COLOR_BLUE      4                        /* Blue */
#define COLOR_MAGENTA   5                        /* Magenta */
#define COLOR_CYAN      6                        /* Cyan */
#define COLOR_WHITE     7                        /* White */

/*
 * Attributes
 */

#define ATTR_OFF        0                        /* All attributes off */
#define ATTR_BOLD       1                        /* Bold On */
#define ATTR_DIM        2                        /* Dim (Is this really in the ANSI standard? */
#define ATTR_UNDERLINE  4                        /* Underline (Monochrome Display Only */
#define ATTR_BLINK      5                        /* Blink On */
#define ATTR_REVERSE    7                        /* Reverse Video On */
#define ATTR_INVISIBLE  8                        /* Concealed On */

/*
 * Init & Close
 */

/* Initialize screen */
void io_init();

/* Restore original screen state */
void io_close();

/*
 * Output
 */

/* Set color attributes */
void out_setattr(int attr);

/* Set color */
void out_setcolor(int fg,int bg);

/* Move cursor to position (x,y) on the screen. Upper corner of screen is (0,0) */
void out_gotoxy(int x,int y);

/* Put a character on the screen */
void out_putch(char ch);

/* Write a string to the screen */
void out_printf(char *format, ...);

/* Refresh screen */
void out_refresh();

/* Get the screen width */
int out_width();

/* Get the screen height */
int out_height();

/* Beep */
void out_beep();

/*
 * Input
 */

/* Read a character */
int in_getch();

/* Set keyboard timeout in microseconds */
void in_timeout(int delay);

/* Empty keyboard buffer */
void in_flush();

#endif	/* #ifndef IO_H */
