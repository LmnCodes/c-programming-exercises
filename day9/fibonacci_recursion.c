#include <stdio.h>

int fibonacci (int n){
	int y;
	
	if (n==0)
	  y=0;
	else if (n==1)
	  y=1;
	else
	  y=fibonacci(n-1)+fibonacci(n-2);
	  
	return y;
}

int main() {
	
	int n;
	
	n=3	;
	
	int result=fibonacci(n);
	
	printf ("the n'th fibonacci number is %d",result);
	
	return 0;
}
