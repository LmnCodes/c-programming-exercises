#include <stdio.h>

int main(){
	
	int divident;
	int divisor;
	
	divident=219; // given number to find factors for
	divisor=1;
	
	printf ("the factors of %d are ",divident);
	while (divisor<=divident){
	  if (divident%divisor==0)
	    printf ("%d,",divisor);
	    
	  divisor=divisor+1;
	}
}
 
