#include <stdio.h>
#include <string.h>

#define TRUE  1
#define FALSE 0

int main () {
	
	char name[]="civic";
	int polyndrome=TRUE;
	
	const int length = strlen(name);
	
	int index1,index2;
	
	index1=index2=length/2;
	if (length%2==0)
	    index1=index2-1;
	
	for (; index1>=0; index1--, index2++){
		if (name[index1]!=name[index2]){
		    polyndrome=FALSE; break;
		}
	}
		
    if (polyndrome==TRUE)
        printf ("it is a polyndrome");
    else 
        printf ("it is not a polyndrome");
	
}
	
		   
		
	
