#include <stdio.h>

int main(){
	
  int row;
  int rowend;
  int column;
  
  row=1;
  rowend=50;
  
  for (row=1; row <= rowend; row=row+1){ 
    for (column=1; column <= row; column=column+1){
		printf ("*");
	}
	printf ("\n");
  }
}
		  
		
		  
		
  
	

  


