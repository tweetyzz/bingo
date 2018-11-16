#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#include "bingo.h"

int process_bingo(int Bingo[N][N], int number)
{
	int i,j;
	
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			if(Bingo[N][N]== number)
			{
				Bingo[N][N] =0;
			}
		}
	}
}

