#include <stdio.h>

int main () {
	
	int divident;
	int divisor;
	int zeroes;
	
	divident=1320; // given number. should be greater than 1
	
	divisor=1; // to try all numbers from 1 to divident
	zeroes=0; // at the end of below loop, if zeros are exactly 2, it is prime
	
	while (divisor<=divident){
	  if (divident%divisor==0)
	    zeroes=zeroes+1;
	  divisor=divisor+1;
	}
	
	printf ("%d is ",divident);
	if (zeroes==2)
	  printf ("prime");
	else 
	  printf ("not prime");
  }
  
