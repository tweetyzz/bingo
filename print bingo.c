#include <stdio.h>
#include <stdlib.h>
#include "print bingo.h"	

void print_bingo(int bingo2[N][N])
{
	int i;
	int j;
	

	for (i=0;i<N;i++) 
	{
		for(j=0;j<N;j++) 
		{
			printf("%u ",bingo2[i][j]);
			
		}
		printf("\n");
	}
	
	

}
