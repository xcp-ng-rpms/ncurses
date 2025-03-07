#include <stdio.h>
#include <curses.h>

int
main(void)
{
    printf("Running ncurses lib compat test\n");

    initscr();

    printf("ncurses lib compat test success!\n");
    return 0;
}
