#include <stdio.h>

#define N 3 // maximum rows and columns. N should always be an odd number.
#define TRUE 1
#define FALSE 0

int main() {
	
	int number[N][N];
	int row=0;
	int column=0;
	int n=1;
	int magic_square=TRUE;
    int sum=0;
    int first_row_sum=0;
    int first_column_sum=0;
    int first_diagonal_sum=0;
	
	// initialize
	for (row=0; row<N; row=row+1){
	    for (column=0; column<N; column=column+1)
		    number[row][column]=0;
    }
    
	row=N-1;
	column=N/2;

	
	// calculate
	for (n=1; n<=N*N; n=n+1){
		number[row][column]=n;
		row=row+1;
		column=column-1;
		
		if (row>N-1 && column<0){
			row=row-2;
			column=column+1;
		}
	    else if (row>N-1)
	        row=0;
	    else if (column<0)
	        column=N-1;
	    else if (number[row][column]>0){
			row=row-2;
			column=column+1;
		}
	}
		for (row=0; row<N; row=row+1)
		    sum=sum+number[row][column];
		first_column_sum=sum;
		sum=0;
		for (column=1; column<N; column=column+1){
			for (row=0; row<N; row=row+1)
			    sum=sum+number[row][column];
			if (sum!=first_column_sum){
				magic_square=FALSE; break;
			}
			sum=0;
		}
		for (column=0; column<N; column=column+1)
		    sum=sum+number[row][column];
		first_row_sum=sum;
		sum=0;
		for (row=1; row<N;row=row+1){
			for (column=0; column<N; column=column+1)
			    sum=sum+number[row][column];
			if (sum!=first_row_sum){
				magic_square=FALSE; break;
			}
			sum=0;
		}
		for (row=0; row<N; row=row+1)
			sum=sum+number[row][row];
		first_diagonal_sum=sum;
		sum=0;
		for (row=0; row<N; row=row+1)
			sum=sum+number[row][N-(row+1)];
		if (sum!= first_diagonal_sum){
			magic_square=FALSE;
		}
		
		if (magic_square==FALSE)
		    printf ("your magic square is wrong\n");
		
        if (magic_square==TRUE){
	        for (row=0; row<N; row=row+1){
		        for (column=0; column<N; column=column+1)
		            printf ("%4d ",number[row][column]);
		        printf ("\n");
		
	        }
        }
	}

		
		    
	
	

	

		
		
		
