#include <stdio.h>

int main(){
	
	int rows;
	int stars;
	
	rows=9;
	stars=1;
	
	const int last_row = 2*rows-1;
	
	for (int row=1; row<=rows; row=row+1) {
	  
	  for (int i=1; i<= (last_row-stars)/2; i=i+1){
	    printf (" ");
	  }

	  for (int i=1; i<=stars; i=i+1){
	    printf ("*");
	  }
	  
	  stars=stars+2;
	  printf ("\n");
    }    
} 
	  
	
