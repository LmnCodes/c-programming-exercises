#include <stdio.h>
#include <time.h>
#include <ncurses.h>
#include <unistd.h>

int HEIGHT=30;
int WIDTH=20;

#define TEXT_COLOR 1
#define LINE_COLOR 2

void printborder() {
	attron(COLOR_PAIR(LINE_COLOR) );
	mvhline(0,0,'-',35);
	mvvline(0,20,'|',0);
	mvhline(20,0,'-',35);
	mvvline(0,35,'|',20);
    attroff(COLOR_PAIR(LINE_COLOR) );
}
	
int main() {
	
    char* caletime;
	time_t *t;
	time_t utime;
	
	t = &utime;
	
	time(t);
	caletime = ctime(t);
	
	
	initscr();
	noecho();
	keypad(stdscr, TRUE);
	timeout(0);
	start_color();
	
	init_pair(TEXT_COLOR, COLOR_RED, COLOR_YELLOW);
	init_pair(LINE_COLOR, COLOR_CYAN, COLOR_WHITE);
	
	int ch = getch();
	mvprintw (10, 10, "c");
	refresh();
	ch = getch();
	
	while (utime>0){
		erase();
	    printborder();
	    time(t);
	    caletime = ctime(t);
	    attron(COLOR_PAIR(TEXT_COLOR) );
	    mvprintw (HEIGHT-11, WIDTH-10, "%s", caletime);
	    attroff(COLOR_PAIR(TEXT_COLOR) );
	    refresh();
	    if (ch == 'Q' || ch =='q')
	        break;
	    else
	        ch = getch(); 
    }
	
	endwin();
		
}
	
	
