#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "bingo.h"


int count_bingo(int bingo4[N][N]) //���� ���� �Լ�  
{
	int i,j;
	int count=0;//���� �� ��  
	int diagonal1=0; //�밢�� 1  
	int diagonal2=0; //�밢�� 2  
	
	int across=0; //����  
	int down=0;   //����  
	
		for(i=0;i<N;i++)
		{
			
			for(j=0;j<N;j++)
			{
				if(bingo4[i][j]==0)
				{
					across++;
				} // �����ٿ� �ִ� ���� 0�� �Ǹ� across +1  
				
				
			    if(bingo4[j][i]==0)
				{
					down++;
				} //�����ٿ� �ִ� ����  0�� �Ǹ� down +1  
				
				
				if(i== j && bingo4[i][j]==0)
				{
					diagonal1++;
				} // ���� ������ ������ �Ʒ��� �밢���� �ִ�  ���� 0�� �Ǹ� diagnoal1 +1  
				
				if((i+ j== N-1) && bingo4[i][j]==0)
				{
					diagonal2++;
				} // �ݴ��� �밢���ٿ� �ִ� ���� 0�� �Ǹ� diagnoal +2 
			}
			
			
			if(across==N)
			{
				count++;
			} // 0�̵� ���� ĭ�� ������ N���� �Ǹ� ���� �ټ� (count)++ 
			
			if(down==N)
			{
				count++;
			}// 0�̵� ����  ĭ�� ������ N���� �Ǹ� ���� �ټ� (count)++ 
			
	    	
			across = 0;
			down = 0;
						
		}
	if(diagonal1==N)
	{
	count++;
	} //0�̵� �밢��1 ���� ������ N���� �Ǹ� ���� �ټ� (count)++
	
	if(diagonal2==N)
	{
	count++;
	} //0�̵� �밢��2 ���� ������ N���� �Ǹ� ���� �ټ� (count)++
	
	diagonal1 = 0;
	diagonal2 = 0;	
			
	
	
	return count; //���� ���� ��ȯ 
		
}
	
