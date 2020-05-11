#include <stdio.h>

 int factorial(int x){
	  int result=1;
	  for (int i=x; i >= 1; i--){
		result *= i;
	  }
	  return result;
 }

int main (){
  
  int n=20;
  while (n>=1){
    int result=factorial(n);
    printf ("the factorial of %d is %d\n",n,result);
    n--;
  }
}

