#include <stdio.h>

int main() {
	
	int a;
	int b;
	
	printf ("type from which number to which for listing the odd numbers using comma.\n");
	scanf ("%d,%d",&a,&b);
	
	printf ("the odd numbers between %d and %d are ",a,b);
	while (a<=b){
		 if (a%2!=0)
		  printf ("%d,",a);
		 
		 a=a+1;
	 }
 }
		 
		 
		 
	


