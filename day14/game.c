#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

#define TEXT_COLOR 1
#define LINE_COLOR 2

int WIDTH = 70;
int HEIGHT = 15;

void printborder() {
	attron(COLOR_PAIR(LINE_COLOR));
	mvhline(HEIGHT, 0, '-', WIDTH);
	mvvline(0, WIDTH, '|', HEIGHT);
	attroff(COLOR_PAIR(LINE_COLOR));

}

int main() {
	
	initscr();
	start_color();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	
	// init color pairs

	init_pair(TEXT_COLOR, COLOR_YELLOW, COLOR_GREEN);
	init_pair(LINE_COLOR, COLOR_GREEN, COLOR_YELLOW);


	printborder();
	refresh();

	int counter = 15;
	
	while(counter-- >= 0) {
		erase();
		printborder();
		attron(COLOR_PAIR(TEXT_COLOR));
		mvprintw(HEIGHT/2, WIDTH/2-2, "%5d", counter+1);
		attroff(COLOR_PAIR(TEXT_COLOR));
		refresh();

		sleep(1);
	}
	erase();
	printborder();
	mvprintw(HEIGHT/2,WIDTH/2-10, "countdown timer reached!!!!!");
	refresh();
	
	int ch = getch();
	while(ch != 'Q' && ch != 'q') {
		ch = getch();
	}
	
	endwin();

	return 0;
}
