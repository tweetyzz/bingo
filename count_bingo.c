#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "bingo.h"


int count_bingo(int bingo4[N][N])
{
	int i,j;
	int count=0;
	int diagonal1;
	int diagonal2;
	
	while(count!=M)
	{
		for(i=0;i<N;i++)
		{
			int across=0;
	        int down=0;
			
			for(j=0;j<N;j++)
			{
				if(bingo4[i][i]==0)
				{
					across++;
				}
				if(bingo4[j][i]==0)
				{
					down++;
				}
				if(i==j && bingo4[i][j]==0)
				{
					diagonal1++;
				}
				if((i+j==N-1) && bingo4[i][j]==0)
				{
					diagonal2++;
				}
			}
			
			if(across==N)
			{
				count++;
			}
			if(down==N)
			{
				count++;
			}
			
		}
		if(diagonal1==N)
		{
			count++;
		}
		if(diagonal2==N)
		{
			count++;
		}
		printf("%d",count);
	    //break;
	
	}
	
	
	
	
	
	
}
	
