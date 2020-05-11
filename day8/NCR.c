#include <stdio.h>

 int factorial(int x){
	  int result=1;
	  for (int i=x; i >= 1; i--){
		result *= i;
	  }
	  return result;
 }
 
int main(){
	
	int n,r;
	float c;
    
    n=5;
    r=4;
    c=factorial(n)/(factorial(n-r)*factorial(r));
    
    printf ("NCR is %f",c);
}
	
	
	
	
	
