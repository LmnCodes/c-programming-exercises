#include <stdio.h>

int main() {
	
	int student[9][5]={ 
		{97,96,85,70,75},
		{99,68,70,79,67},
		{100,86,58,97,64},
		{100,100,100,100,100},
		{46,78,99,100,100},
		{50,40,29,11,34},
		{88,79,89,76,67},
		{77,77,66,87,98},
		{88,67,88,55,100} 
	};
    int row=0;
    int column=0;
    int students=9;
    int subjects=5;
    float average;
    
    for (row=0; row<students; row=row+1){
		column=0;
	    average=student[row][column];
	    
	    for (column=0; column<subjects-1; column=column+1)
	        average=average+student[row][column];
	        
	    average=average/subjects;
	    
	    printf ("the average of student %d is %f\n",row+1,average);
	}
} 
		
    
