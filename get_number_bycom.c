#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#include "bingo.h"

int get_number_bycom()
{
	int number;
	int re=0;
	int i,j;
	int temp[N*N];
	int tem;
	int Bingo[N][N];
	//srand( (unsigned)time(NULL) );
		
	for(i=0;i<N;i++)
		{
		
		for(j=0;j<N;j++)
		    {    
		    printf("!");
				while(1)
				{
					tem = rand()%(N*N)+1;
					 
					if(temp[tem-1]== 0)
					{
					  Bingo[i][j]= tem;
					  temp[tem-1]= 1;
					  break;
					}
	
				}
			
		    }
		
	    }
	    
	    printf("컴퓨터가 입력한 숫자 : ",tem);
	
	 return ;
}
 

