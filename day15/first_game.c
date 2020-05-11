#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

int HEIGHT = 10;
int WIDTH = 20;

void printborder() {
	mvhline(HEIGHT, 0, '-', WIDTH);
	mvvline(0, WIDTH, '|', HEIGHT);
}

int main () {
	// game state
	int game_over = FALSE;
	int score = 0;
	
	// player state
	char player = '!';
	int row2 = 9;
	int column2 = 5;
	
	// enemy state
	char enemy = '^';
	int column1 = 19;
	int row1 = row2;
	
	
	initscr();
	noecho();
	keypad(stdscr, TRUE);
	timeout(200);
    
    int ch = getch();
    while (ch != 'q' && 'Q'){
		
		switch(ch) {
			case 'w':
			case 'W':
				row1 = row1-3;				
				break;
			case ERR: // last getch timed out
				break;
		}
		
		// game logic
			// player logic
			if (row1 < HEIGHT-1) { // is in jump
				row1 = row1+1;
			}
			// enemy logic
			column1 = column1-1;
			if (column1 <= 0) 
				column1 = 19;
			// collision logic 
			if (column1 == column2 && row1 == row2){
				game_over = TRUE;
			}
		    else if (column1 == column2 && row1 == row2-1){
				score = score+1;
			}
		
	
		// draw scene
		erase();
		printborder();
		if (game_over == FALSE) {
			mvprintw(row2, column1 , "%c", enemy);
			mvprintw(row1, 5, "%c", player);
	} else {
			mvprintw(10, 10, "Game Over!");
			mvprintw(11, 10, "your score is %d", score);
		}
		refresh();
		//sleep(1);
		
		ch = getch();

	}
	
	
	endwin();
	
}
	
			
		
		
			
			
			
			
		
		
	
	
	
