#include <stdio.h>

int main() {
	
	int a,b,c;
	int smallest;
	
	a=10;
	b=20;
	c=5;
	
	
	if (a<c && a<b)
	  smallest=a;
	else if (b<a && b<c)
	  smallest=b;
	else if (c<a && c<b)
	  smallest=c;
	  
	printf ("smallest is %d",smallest);
  }
