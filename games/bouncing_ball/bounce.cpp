#include <ncurses.h>
#include <algorithm>

using namespace std;

#define WIDTH 130
#define HEIGHT 40

char bar[] = "================";
char ball[] = "©";
const int barsize = strlen(bar);

int top=0,left=0,right=WIDTH,bottom=HEIGHT;
int barx=bottom-1, bary=left;

int ballx=top, bally=(right-left)/2;
int balldirx=1, balldiry=1;

bool running = false;

void draw_bar() {
    mvprintw(barx,bary, bar);
}

void draw_border() {
    for(int i=left; i<=right; i++) mvprintw(top,i,"-");
    for(int i=left; i<=right; i++) mvprintw(bottom,i,"_");
    for(int i=top; i<=bottom; i++) mvprintw(i,left,"|");
    for(int i=top; i<=bottom; i++) mvprintw(i,right,"|");
}

bool move_ball() {
    ballx += balldirx; 
    bally += balldiry; 

    // collision with bar
    if(ballx == barx && bary <= bally && bally <= bary + barsize) {
        balldirx *= -1;
        if(rand()%2 == 0) { balldiry = 1; }
        else { balldirx = -1; }
        ballx += balldirx; 
        bally += balldiry; 
        beep();
    }

    if(bally == left || bally == right) { balldiry *= -1; bally += balldiry; }
    if(ballx == top) { balldirx *= -1; ballx += balldirx; }
    if(ballx == bottom) { running = false; }
    return false;
}

void draw_ball() {
    mvprintw(ballx,bally, ball);
}

void draw_scene() {
    if(running) {
        move_ball();
        draw_ball();
        draw_bar();
        draw_border();
    } else {
        mvprintw(top + (bottom-top)/2, left + (right-left)/2-30, "Game Over! Press [R] to restart or [Q] for quit!");
        draw_border();
    }
}

void restart() {
    running = true;
    ballx=top; bally = max(left+5,min(rand()%WIDTH, right-5));
    barx = bottom-1; bary = max(left+5,min(rand()%WIDTH, right-5));
    balldirx=1; balldiry = (rand()%2)?-1:1;
    draw_scene();
}

int main()
{
    initscr();
    cbreak();
    keypad(stdscr, TRUE);
    noecho();
    nodelay(stdscr, TRUE);
    timeout(100);
    srand(time(NULL));


    // init
    restart();
    refresh();

    int ch;
    while((ch = getch()) != 'Q' && ch != KEY_F(1) && ch != 'q') {
        switch(ch) {
            case KEY_LEFT: 
                bary=std::max(0, --bary);
                break;
            case KEY_RIGHT: 
                bary=std::min(WIDTH-barsize, ++bary);
                break;
            case 'R':
            case 'r':
                restart();
                break;
        }
        erase();
        draw_scene();
        refresh();
    }
    endwin();
}
