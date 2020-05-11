#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>



int main() {
	
	char a = '|';
	int ch = getch();
	int row = 0;
    int column = 0;
    int x=1;
    
	initscr();
	noecho();
	keypad(stdscr, TRUE);
	timeout(0);
	
    while (x >= 0){
		erase();
        mvprintw (row, column, "%c", a);
        refresh();
        sleep(0.5);
        if (ch == 'd' && 'D'){
		    column = column+1;
		    ch = getch();
		}
        else if (ch == 'a' && 'A'){
            column = column-1;
            ch = getch();
		}
        else if (ch == 's' && 'S'){
            row = row+1;
            ch = getch();
		}
        else if (ch == 'w' && 'W'){
            row = row-1;
            ch = getch();
		}
	    else if (ch != 'q' && 'Q' && 'd' && 'D' && 'a' && 'A' && 's' && 'S' && 'w' && 'W')
	        ch = getch();
	    else if (ch == 'q' && 'Q')
	        break;
	    
	    x=x+1;
	}
	
	endwin();
	
}
		

