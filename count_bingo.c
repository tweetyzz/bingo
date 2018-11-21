#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "bingo.h"


int count_bingo(int bingo4[N][N]) //빙고 세는 함수  
{
	int i,j;
	int count=0;//빙고 줄 수  
	int diagonal1=0; //대각선 1  
	int diagonal2=0; //대각선 2  
	
	int across=0; //가로  
	int down=0;   //세로  
	
		for(i=0;i<N;i++)
		{
			
			for(j=0;j<N;j++)
			{
				if(bingo4[i][j]==0)
				{
					across++;
				} // 가로줄에 있는 수가 0이 되면 across +1  
				
				
			    if(bingo4[j][i]==0)
				{
					down++;
				} //세로줄에 있는 수가  0이 되면 down +1  
				
				
				if(i== j && bingo4[i][j]==0)
				{
					diagonal1++;
				} // 왼쪽 위에서 오른쪽 아래로 대각선에 있는  수가 0이 되면 diagnoal1 +1  
				
				if((i+ j== N-1) && bingo4[i][j]==0)
				{
					diagonal2++;
				} // 반대쪽 대각선줄에 있는 수가 0이 되면 diagnoal +2 
			}
			
			
			if(across==N)
			{
				count++;
			} // 0이된 가로 칸의 개수가 N개가 되면 빙고 줄수 (count)++ 
			
			if(down==N)
			{
				count++;
			}// 0이된 세로  칸의 개수가 N개가 되면 빙고 줄수 (count)++ 
			
	    	
			across = 0;
			down = 0;
						
		}
	if(diagonal1==N)
	{
	count++;
	} //0이된 대각선1 줄의 개수가 N개가 되면 빙고 줄수 (count)++
	
	if(diagonal2==N)
	{
	count++;
	} //0이된 대각선2 줄의 개수가 N개가 되면 빙고 줄수 (count)++
	
	diagonal1 = 0;
	diagonal2 = 0;	
			
	
	
	return count; //빙고 개수 반환 
		
}
	
