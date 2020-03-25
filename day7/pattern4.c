#include <stdio.h>

int main(){
	
	int rows;
	int stars;
	int x;
	int y;
	int row;
	int spaces;
	
	row=1;
	rows=9;
	stars=1;
	spaces=rows-1;
	y=1;
	
	while (row<=rows) {
	  x=1;
	  y=1;
	  
	  while (x<=spaces){
	    printf (" ");
	    x=x+1;
	  }
	  spaces=spaces-1;
	  
	  while (y<=stars){
	    printf ("*");
	    y=y+1;
	  }
	  stars=stars+2;
	  printf ("\n");
	  row=row+1;
    }
} 
	  
	
