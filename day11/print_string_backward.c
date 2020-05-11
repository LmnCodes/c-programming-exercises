#include <stdio.h>

#define TOTAL 8

int main() {
	
	char name[TOTAL]={"vibulan"};
	int x=TOTAL-1;
	
	for (x=TOTAL-1; x>=1; x--)
	    printf ("%c",name[x-1]);
	}
	
	     
