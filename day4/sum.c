#include <stdio.h>

int main() {
	
	int sum;
	int i;
	int end;
	int start;
	
	start=50;
	sum=0;
	i=start;
	end=50;
	
	do { 
	  sum=sum+i;
	  i=i+1;
   }while (i<=end);
    
    printf ("the sum of numbers from %d to %d is %d.\n",start,end,sum);
    
    sum=0;
    
    for (i=start; i<=end; i=i+1)
      sum=sum+i;
      
    printf ("the sum of numbers from %d to %d is %d",start,end,sum); 
}
	
	
	  
