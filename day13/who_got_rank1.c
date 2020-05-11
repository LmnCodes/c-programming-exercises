#include <stdio.h>

#define TRUE 1
#define FALSE 0

struct mark {
    int math;
	int science;
};

int mark_sum(struct mark n) {
	return n.math + n.science;
}

float average(struct mark n){
	return mark_sum(n)/2;
}

int compare(struct mark n,struct mark i){
	return mark_sum(n) > mark_sum(i);
}

int main() {
	
	struct mark alice={90,100};
	struct mark benny={70,100};
	int result;
	
	result=compare(alice,benny);
	
	if (result==TRUE)
	    printf ("alice got rank 1");
	else 
	    printf ("benny got rank 1");
	}
	
