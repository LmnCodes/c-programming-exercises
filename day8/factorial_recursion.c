#include <stdio.h>

int factorial(int n){
    int y;
    
    if (n==1)
      y=1;
    else  
      y=n*factorial(n-1);

    return y;
}

int main (){
  
  int n=5;
    int result=factorial(n);
    printf ("the factorial of %d is %d\n",n,result);
  
}
