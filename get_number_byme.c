#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#include "bingo.h"

int get_number_byme()
{
	int i,j;
	int tem;
	int temp[N*N];
	int Bingo[N][N];
	int num;
	int re=0;

				while(1)
				{
				    printf("���ڸ� �Է��ϼ��� : ");
				    scanf("%d",&num);
				
				if(num>0 && num<=N*N)
				{
					 for (i=0;i<N;i++)
	                {
		                for(j=0;j<N;j++)
		                {   
		                    if (Bingo[i][j]==num)
		                    {
		                    	return num;
							}
		                
					    }
					}
			    }

				else if
				   {
				    printf("�����Դϴ�. ���ڸ� �ٽ� �Է��ϼ��� : ");
			        scanf("%d",&num);
				   }
				   
			    else (Bingo[i][j]!=num)
			    {
			    	printf("���� ���� �Դϴ�. ���ڸ� �ٽ� �Է��ϼ��� : ");
			    	scanf("%d",&num) ;
				} 
				
				
			    
			    }
				
				
			
				
	    
	
}
                
				
			    
	
	
		
			
	



/*  for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		{
			Bingo[i][j]=0;
		}
			
	} //������ �ʱ�ȭ   
	
	
	
		
	for(i=0;i<N*N;i++){
		temp[i]=0;
	}// 0���� �ʱ�ȭ  
		
	
	
	for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		{   
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
	}*/
	




