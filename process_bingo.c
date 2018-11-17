#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "bingo.h"
#include "get_number_byme.h"
#include "get_number_bycom.h"

int process_bingo(int bingo2[N][N])
{
	int number;
	int i,j;
	int result= 0;
    
    
    
    
	for (i=0;i<N;i++)
	{    	
		for (j=0;j<N;j++)
		{
			if(bingo2[i][j]== number)
			{
			    bingo2[i][j] =0;
			}
			
	
		}
	} 
	
	//printf("!");
    
} 
	

