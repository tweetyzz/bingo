#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#include "bingo.h"

int count_bingo(int bingo[N][N])
{
	int i,j;
	int sum;
	
	
	for(i=0;i<N;i++)
	{
		sum=0;
		for(j=0;j<N;j++)
		{
			sum+=bingo[i][j];
					
		}
		if(sum==0)
		{
			return 1;
		}
		
		
	
	
	for(j=0;j<N;j++)
	{
		sum=0;
		for(i=0;i<N;i++)
		{
			sum+=bingo[i][j];
			
		}
		if(sum==0)
		{
			return 1;
		}
	}
}
	
    sum=0;
    
    
    for(i=0;i<N;i++)
    {
    	sum+=bingo[i][i];
    	
	}
	if(sum==0)
	{
		return 1;
	}
	sum=0;
	
	for(i=0;i<N;i++)
	{
		sum+=bingo[i][N-i-1];
		
	}
	if(sum==0)
	{
		return 1;
	}
	return 0;
	
}
	
