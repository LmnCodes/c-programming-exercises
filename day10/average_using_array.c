#include <stdio.h>

#define TOTAL 5

int main() {
	
	float number[TOTAL]={1,6,5,2,3};
	int n=0;
	float average=number[n];
	
	for (n=0; n<TOTAL-1; n=n+1)
	     average=average+number[n+1];
	     
	average=average/TOTAL;
	     
	printf ("the average of these numbers are %f",average);
}
	     
	  
	
