#include <stdio.h>

int fibonacci(int n){
	int y=1;
	int a=0;
	int b=1;
	int number=1;
	for (number=1; number<n; number=number+1){
		y=a+b;
		a=b;
		b=y;
	}
	return y;
}

int main(){
	
	int n;
	
	n=7;
	
	int new=fibonacci(n);
	
	printf ("the n'th fibonacci number is %d",new);
}
		
