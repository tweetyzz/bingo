#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#include "bingo.h"

int get_number_bycom()
{
	int number;
	int i,j;
	int temp[N*N];
	int tem;
	int Bingo[N][N];
	//srand( (unsigned)time(NULL) );
	
			while(1)
				{
					tem = rand()%(N*N)+1;
					 
					if(temp[tem-1]== 0)
					{
					  Bingo[i][j]= tem;
					  temp[tem-1]= 1;
					  
					}
					
					else if(temp[tem]==0)
					{
						Bingo[i][j]=tem;
						temp[tem]=1;
						
					}
					break;
	
				}
				//��ǻ�ͷκ��� �������ڸ� ���� 
	    
	    printf("��ǻ�Ͱ� �Է��� ���� :%d",tem);
	
	 return ;
}
 

