#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "bingo.h"

int get_number_byme(int Bingo[N][N]) //�� ���� �޴� �Լ�  
{
	int i,j;
	int num;
	

				while(1)
				{
				    printf("���ڸ� �Է��ϼ��� : ");
				    scanf("%d",&num);
				    printf("\n"); 
				
				if(num>0 && num<=N*N) //�Է��� ���ڰ� 1~N*N���̿� ������  
				{
					 for (i=0;i<N;i++)
	                {
		                for(j=0;j<N;j++)
		                {   
		                    if (Bingo[i][j]==num)
		                    {
		                    	return num;
							}//�Է��� ���ڿ� ���� �������� ���ڸ� num���� ��ȯ 
		                
					    }
					}
					
					printf("�̹� �Է��� �����Դϴ�. �ٽ� �Է��ϼ��� : ");
					scanf("%d",&num); //���� ������ ��� �ٽ� ���ڸ� �޵��� ��
			    }

				else if(Bingo[i][j]!=num)
				   {
				    printf("�����Դϴ�. ���ڸ� �ٽ� �Է��ϼ��� : ");  
			        scanf("%d",&num);
			        printf("\n"); 
				   } //�����ǿ� ���� ���ڸ� �Է��� ��� �ٽ� ���ڸ� �޵�����
				   
			    
				break;
			    
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
	




