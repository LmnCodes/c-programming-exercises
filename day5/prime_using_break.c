#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FALSE 0
#define TRUE 1

int main () {
	
	int divident;
	int divisor;
	int prime;
	
	
	divident=25; // given number. should be greater than 1
	divisor=2; // to try all numbers from 2 to divident-1
	prime=TRUE;
	
	while (divisor <= sqrt( divident) ){
	  if (divident%divisor==0) {
	    prime=FALSE; break;
	  }
	  divisor=divisor+1;
	}
	
	
	
	printf ("%d is ",divident);
	if (prime==TRUE)
	  printf ("prime");
	else
	  printf ("not prime");
  }
  
