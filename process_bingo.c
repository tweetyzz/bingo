#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#include "bingo.h"


int process_bingo(int Bingo[N][N])
{
	
	int i,j;
	int result= 0;
	int number;
	
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			if(Bingo[i][j]== number)
			{
				Bingo[i][j] =0;
			}
		}
	}
}

