#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "bingo.h"
#include "get_number_byme.h"
#include "get_number_bycom.h"

int process_bingo(int bingo2[N][N],int number) //빙고판에 있는 같은 숫자 0으로 바꾸는 함수. 매개변수로 빙고판과 num을 받음   
{
	int num;
	int i,j;
    
    
    
	for (i=0;i<N;i++)
	{    	
		for (j=0;j<N;j++)
		{
			if(bingo2[i][j]== num)
			{
			    bingo2[i][j] =0;
			}
		}
	} // 입력 받은 수를 0으로 빙고판에서 지움  
    
} 
	

