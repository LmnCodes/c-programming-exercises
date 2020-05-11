#include <stdio.h>

int main(){
	
	int x = 1;
	int num;
	int count = 1;
	int total = 100;
	
	while (count <= total){
	    num = 60 * x + 1;
		if (num % 7 == 0){
		    printf("%d, ", num);
		    count = count + 1;
		}
		x = x + 1;    
    }
}
