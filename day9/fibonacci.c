#include <stdio.h>

int main() {
	
	int a;
	int b;
	int new;
	int number;
	int n;
	
	a=0;
	b=1;
	new=1;
	number=1;
	n=120;
	
	while (number<n){
	  new=a+b;
	  a=b;
	  b=new;
	  number=number+1;
	}
	printf ("the n'th fibonacci number is %d",new);
}

