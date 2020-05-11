#include <stdio.h>
#include <string.h>

#define TOTAL 8

int main() {
	
	char name[TOTAL]={"vibulan"};
	int x=0;
	int temp;
	
	for (x=0; x<(TOTAL-1)/2; x++){
	    temp=name[x];
		name[x]=name[TOTAL-(x+2)];
		name[TOTAL-(x+2)]=temp;
	}
		
    printf ("%s",name);
}

