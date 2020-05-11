#include <stdio.h>

#define TOTAL (6)

int main () {
	
	
	int student [TOTAL]={1,2,7,4,6,9};
	int i=0;
	
	int greatest=student[0];
	
	for (i=0; i<TOTAL; i=i+1){
		if (greatest<student[i])
		  greatest=student[i];
	}
    printf ("the tallest height in the class is %d",greatest);
    
    return 0;
}
