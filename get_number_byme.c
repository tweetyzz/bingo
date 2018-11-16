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
				    printf("숫자를 입력하세요 : ");
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
				    printf("오류입니다. 숫자를 다시 입력하세요 : ");
			        scanf("%d",&num);
				   }
				   
			    else (Bingo[i][j]!=num)
			    {
			    	printf("같은 숫자 입니다. 숫자를 다시 입력하세요 : ");
			    	scanf("%d",&num) ;
				} 
				
				
			    
			    }
				
				
			
				
	    
	
}
                
				
			    
	
	
		
			
	



/*  for (i=0;i<N;i++){
		
		for(j=0;j<N;j++)
		{
			Bingo[i][j]=0;
		}
			
	} //빙고판 초기화   
	
	
	
		
	for(i=0;i<N*N;i++){
		temp[i]=0;
	}// 0으로 초기화  
		
	
	
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
	




