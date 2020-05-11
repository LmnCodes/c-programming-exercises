#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int polyndrome (char name[]){
	int polyn=TRUE;
	int index1,index2;
	int length=strlen(name);
	
	index1=index2=length/2;
	if (length%2==0)
	    index1=index2-1;
	for (; index1>=0; index1--,index2++){
		if (name[index1]!=name[index2]){
			polyn=FALSE; break;
		}
	}
	return polyn;
}

int main() {
	

	    printf("name %s is %s\n", "civic", (polyndrome("civic") == TRUE ? "polyndrome" : "not polyndrome"));
	    printf("name %s is %s\n", "civics", (polyndrome("civics") == TRUE ? "polyndrome" : "not polyndrome"));
	    printf("name %s is %s\n", "civit", (polyndrome("civit") == TRUE ? "polyndrome" : "not polyndrome"));
        printf("name %s is %s\n", "vibulan", (polyndrome("vibulan") == TRUE ? "polyndrome" : "not polyndrome"));
	    printf("name %s is %s\n", "malayalam", (polyndrome("malayalam") == TRUE ? "polyndrome" : "not polyndrome"));
	}
	
	
	
	
		    
	
