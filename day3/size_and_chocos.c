#include <stdio.h>

#define XS 1  // extra small
#define S  2  // small
#define M  8  // medium
#define L  4  // large
#define XL 5  // extra large

int main() {
		
	int shirt;
	int choco;
	
	printf ("type the shirt size.\n");
	printf ("xs-%d, s-%d, m-%d, l=%d, xl-%d.\n",XS,S,M,L,XL);
	scanf ("%d", &shirt);
	
	// assigning shirt size
	//shirt=4;
	
	// calculating number of chocolates
	switch (shirt) {
		case XS :choco=18; break;
		case S  :choco=9;  break;
		case M  :choco=4;  break;
		case L  :choco=2;  break;
		case XL :choco=1;  break;
    }
	
	// printing the result
	printf ("this kid's shirt size is ");
	if (shirt==XS)
	  printf ("extra small.\n");
	else if (shirt==S)
	  printf ("small.\n");
	else if (shirt==M)
	  printf ("medium.\n");
	else if (shirt==L)
	  printf ("large.\n");
	else if (shirt==XL) 
	  printf ("extra large.\n");   
	printf ("he will get %d chocolates",choco);
	
  }
  
