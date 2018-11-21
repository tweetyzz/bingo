#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "bingo.h"

int get_number_byme(int Bingo[N][N]) //내 숫자 받는 함수  
{
	int i,j;
	int num;
	

				while(1)
				{
				    printf("숫자를 입력하세요 : ");
				    scanf("%d",&num);
				    printf("\n"); 
				
				if(num>0 && num<=N*N) //입력한 숫자가 1~N*N사이에 있으면  
				{
					 for (i=0;i<N;i++)
	                {
		                for(j=0;j<N;j++)
		                {   
		                    if (Bingo[i][j]==num)
		                    {
		                    	return num;
							}//입력한 숫자와 같은 빙고판의 숫자를 num으로 반환 
		                
					    }
					}
					
					printf("이미 입력한 숫자입니다. 다시 입력하세요 : ");
					scanf("%d",&num); //같은 숫자일 경우 다시 숫자를 받도록 함
			    }

				else if(Bingo[i][j]!=num)
				   {
				    printf("오류입니다. 숫자를 다시 입력하세요 : ");  
			        scanf("%d",&num);
			        printf("\n"); 
				   } //빙고판에 없는 숫자를 입력할 경우 다시 숫자를 받도록함
				   
			    
				break;
			    
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
	




