#include <stdio.h>
#include <stdlib.h>
#include "print bingo.h"	
#define N 5

void print_bingo(int bingo3[N][N])
{
	int i;
	int j;
	

	for (i=0;i<N;i++) 
	{
		for(j=0;j<N;j++) 
		{
			printf("%3u",bingo3[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	
	

}
