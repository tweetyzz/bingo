#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "bingo.h"
#include "get_number_byme.h"
#include "get_number_bycom.h"

int process_bingo(int bingo2[N][N],int number) //�����ǿ� �ִ� ���� ���� 0���� �ٲٴ� �Լ�. �Ű������� �����ǰ� num�� ����   
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
	} // �Է� ���� ���� 0���� �����ǿ��� ����  
    
} 
	

