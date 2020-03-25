#include <stdio.h>

int main() {
	
	int row;
	int column;
	int spaces;
	int row_end;
	int space_end;
	
	row=1;
	column=1;
	row_end=7;
	space_end=row_end;
	
	while (row<=row_end){
	  
	  spaces=1;
	  while (spaces<space_end){
	    printf (" ");
	    spaces=spaces+1;
	  }
	  space_end=space_end-1;
	  
	  column=1;
	  while (column<=row){
	    printf ("*");
	    column=column+1;
	  }
	  
	  printf ("\n");  
	  row=row+1;
	  
    }
}
	 
	      
	      
	     
