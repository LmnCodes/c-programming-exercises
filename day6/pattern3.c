#include <stdio.h>

int main (){
	
	int rows;
	int row;
	int stars;
	int spaces;
	int y;
	int x;
	
	rows=5;
	row=1;
	
	for (row=1; row<=rows; row=row+1){

		stars=row;		
		spaces=rows-stars;

		for (x=1; x<=spaces; x=x+1){
			printf (" ");
		}
		
		for (y=1; y<=stars; y=y+1){
			printf ("*");
		}
	
		printf ("\n");
	}
}
	
		
		
		
